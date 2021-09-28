#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter real numbers: \n";
	double num_1=0.0,num_2,difference=0.0 ;
	int i = 1;
	while (cin>>num_1>>num_2)
		{
		cout<<"First Number:"<<num_1 <<" Second number:"<< num_2<<"\n";
		if (num_1 == num_2)
			cout<< "The numbers are equal\n";
		else if (num_1 > num_2)
			{
			cout<< "The larger value is " << num_1<<"\n";
			difference = num_1 - num_2;
			}
		else
			{
			cout<< "The larger value is " << num_2<<"\n";
			difference = num_2 - num_1;
			}
		if (difference <= (0.01))
			cout<< "The numbers are almost equal\n";
		} 
	return 0;
}