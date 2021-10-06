#include "../../std_lib_facilities.h"
int main()
{
	try {
		cout << "Success!\n";
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
	return 0;
}
/*
1. Cout << "Success!\n"; 
cout << "Success!\n";  Nagy C, szintaxis hiba

2. cout << "Success!\n;
cout << "Success!\n";  Lemaradt egy ", szintaxis hiba

3. cout << "Success" << !\n"	
cout << "Success" << "!\n";  Lemaradt egy ", szintaxis hiba, illetve egy ; is lemaradt.

4. cout << success << '\n';
cout << "Success" << '\n';  success szó nem egy változó, hanem string, kell "", és kell a nagy S és !.

5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";  Egy integert tároló vektorba csak integert tárolhatunk, 
tehát a res int kell, hogy legyen, nem string

6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";			
vector<int> v(10); v[5] = 7; if (v[5]=7) cout << "Success!\n";  Ha a vektor elemeire hivatkozunk  []-t kell használnunk, illetve != helyett = kell,
hogy igazat adjon vissza az if.

7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
if (true) cout << "Success!\n"; else cout << "Fail!\n";  cond nincs meghatározva, sem más változó, 
így csak akkor kapjuk meg a kívánt kiíratást, ha mindig igaz a ha argumentuma

8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";  Mivel a c hamis, mindig Fail lesz az output, 
ezért vagy meg kell változtatni a C-t, vagy negálni kell.

9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
string s = "ape"; bool c = "apd"<s; if (c) cout << "Success!\n";  Boo-t ki kell javítani bool-ra, majd a "fool"-t ki kell cserélni valamilyen stringre,
aminek a számértéke kisebb mint az "ape"-nek

10. string s = "ape"; if (s=="fool") cout << "Success!\n";
string s = "ape"; if (s=="ape") cout << "Success!\n";  A "Ha" csak akkor fog igaz értéket adni, és 
kiírni hogy sikeres, ha s megegyezik az megadott stringgel, tehát vagy s-t, vagy a stringet változtatjuk meg

11. string s = "ape"; if (s=="fool") cout < "Success!\n";
string s = "ape"; if (s=="ape") cout << "Success!\n";  Egyrészt a "Ha" ismét csak akkor ad vissza 
igaz értéket, ha megegyezik S-el a megadott string, másrészt a standradt outputnál a cout után két << kell  

12. string s = "ape"; if (s+"fool") cout < "Success!\n";
string s = "ape"; if (s=="ape") cout << "Success!\n";  Két string összefűzése nem fogok sem igaz, sem hamis
értéket visszaadni, tehát ekvivalenciát kell vizsgálni, és meg kell változtatni a stringet, valamint a standradt outputnál << szükséges

13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";   cout << "Success!\n";  a for ciklusban a ciklusváltozót
kell a vektor hosszával hasonlítani, különben végtelenségig fut a ciklus.

14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
Nincs benne hiba, mivel hiába adna "range errort" a ciklus, nem használjuk semmire a ciklusváltozót, az egyenlőségjel nélkül tökéletes lenne.

15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
string s = "Success!\n"; for (int i=0; i<s.size(); ++i) cout << s[i];  Ha a ciklus addig megy, amíg i<6, akkor csak az első hat karakterér írja ki az s-nek,
ellenben az összes karakterrel

16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
if (true) cout << "Success!\n"; else cout << "Fail!\n";  A then szintaktikailag nem felel meg.

17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
int x = 2000; int c = x; if (c==2000) cout << "Success!\n";  Ha a c egy karakter változó, nem fogja tudni eltárolni a 2000-et, ami egy egész szám, 
tehát c-nek egész számnak kell lennie

18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
string s = "Success!\n"; for (int i=0; i<s.size(); ++i) cout << s[i];  Működik az alapkód is, de 2-szer feleslegesen fut le, akkor tökéletes, ha pont annyiszor fut le,
amennyi karaktere van a string-nek.

19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
vector<int> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";  Deklarálni kell milyen vektort szeretnénk, majd hogy ne legyen "range error" i<v.size() <= helyett.

20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
int i=0; int j = 9; while (i<=(j+1)) ++i; if (j<i) cout << "Success!\n";  A ciklus során, ha azt akarjuk, hogy a j<i, akkor az i-t kell növelni nem a j-t, és pontosan addig,
amíg i<=j+1.

21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
double x = 2; double d = 5/(x-1); if (d==2*x+1) cout << "Success!\n";  Ahhoz, hogy double-t tudjunk osztani, az x-nek is double-nek kell lennie nem integernek, 
és meg kell változtatni a d-t, hogy a Ha igazat adjon vissza.

22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
string s = "Success!\n"; for (int i=0; i<=s.size(); ++i) cout << s[i];  Egy string nem lehet char is, illetve a ciklusnak csak annyiszor kell lefutnia, amilyen hosszú a string.

23. int i=0,j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
int i=0,j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";  Nincs deklarálva j változó, azt deklarálni kell, a ciklusban pedig az i-t kell növelni.

24. double x = 4; double d = 5/(x–2); if (d=2*(x/2)+0.5) cout << "Success!\n";
double x = 4; double d=5/(x-2); if (d==(2*(x/4)+0.5)) cout << "Success!\n"; Az x–2-nél - jel kell, illetve alakítani kell a számokon, hogy igazat adjon az if.

25. cin << "Success!\n";
cout << "Success!\n";  Standard inputon nem lehet megadni stringet, ezért csak outputként működhet.
*/