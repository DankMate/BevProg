#include "../std_lib_facilities.h"

int main(){

	cout << "Please enter your first and last name and age: \n";

	string first_name;
	string last_name;

	int age;

	cin >> last_name >> first_name >> age;

	string full_name= last_name + " " + first_name;

	cout << "Hello, " << full_name << " aged " << age <<"!\n";

	return 0;
}