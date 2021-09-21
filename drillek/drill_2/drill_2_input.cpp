#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";  //Felhaszálónak standard output
	string first_name; //Név változó deklarálása
	cin >> first_name; //Név bekérése
	cout << "Dear " << first_name << ",\n" << "\t How are you? I am fine. I miss you. "<< 
	"I've started University, and everyone is really kind, though I must admit haven't really found my group.\n";
	cout << "Enter the name of another friend: ";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " <<friend_name<< " lately? \n";
	char friend_sex = '0';
	cout <<"Enter an f if the friend is female and m if the friend is male: ";
	cin >> friend_sex;
	if (friend_sex='m')
	{
		cout <<"If you see " <<friend_name<< " please ask him to call me.";
	}
	else
	{
		cout <<"If you see " <<friend_name<< " please ask her to call me.";
	}
	cout << "Please enter your age: ";
	int age=0;
	cin >> age;
	cout << "I hear you just had a birthday and you are "<< age<< " years old\n" ;
	
	if (age < 0 || age > 110)
		simple_error("you're kidding\n");
	 
	if (age < 12)
		cout<< "Next year you will be " << age+1 <<".\n";
	else if (age = 17)
		cout<<"Next year you will be able to vote.\n";
	else if (age > 70)
		cout<<"I hope you are enjoying retirement.\n";    


	cout <<"Yours sincerely,\n\n \nVajda Máté\n";
	return 0;
}