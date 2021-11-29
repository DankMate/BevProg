#include "../../std_lib_facilities.h"

void swap_v(int num1, int num2)
{
int temp=num1;
num1=num2;
num2=temp;
}
void swap_r(int& num1, int& num2)
{
int temp=num1;
num1=num2;
num2=temp;
}
/*void swap_cr(const int& num1, const int& num2)
{
int temp=num1;
num1=num2;
num2=temp;
}
*/ //Ez a függvény helytelen, mivel egy konstans refernciát nem változtathatunk meg

int main()
{
	int x =7;
	int y =9;
	swap_v(x,y);
	cout << "x = "<<x<<'\n';
	cout << "y = "<<y<<'\n';
	swap_r(x,y);
	cout << "x = "<<x<<'\n';
	cout << "y = "<<y<<'\n';
	/*swap_cr(x,y);   
	cout << "x = "<<x<<'\n';  //Nem ment a compile, mivel egy konstans referenciát nem lehet megváltozatni, ezáltal ez semmilyen esetben nem fog működni.
	cout << "y = "<<y<<'\n';
	*/ 
	swap_v(7,9);
	cout << "x = "<<x<<'\n'; //Lefut, de nincs effektív változás, mivel nem változók, tehát nem is írathajtuk ki
	cout << "y = "<<y<<'\n';
	/*swap_r(7,9);
	cout << "x = "<<x<<'\n';
	cout << "y = "<<y<<'\n';*/ //Nem fut le mivel a referencia egy memóriabeli helyhez "referál", itt pedig nem változók vannak megadva
	
  /*const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);
	cout << "cx = "<<cx<<'\n';
	cout << "cy = "<<cy<<'\n';  Nem fog lefutni, mert a swap int-et vár, nem const-intet.
	
	swap_r(cx,cy);
	cout << "cx = "<<cx<<'\n';
	cout << "cy = "<<cy<<'\n';  Ez sem fog lefutni, mivel nem lehet megváltoztatni egy konstans változó értékét. */ 


  //swap_?(7.7,9.9); Nem fog működni semmilyen esetben sem, mivel ez egy double típusú szám, nem pedig int.
	
  /*double dx = 7.7; //Szintén nem fog működni double-re
	double dy = 9.9; 
	swap_?(dx,dy);
	swap_?(7.7,9.9);*/
	return 0;


}