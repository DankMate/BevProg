#include "../../std_lib_facilities.h"

int main()
{
	constexpr double meter = 1;
	constexpr double centimeter = meter/100;
	constexpr double in = 2.54*centimeter;
	constexpr double feet = 12*in;
	cout << "Please enter a real number and a unit (m,cm,ft,in:) \n";
	double num_1=0.0,minimum,maximum,sum=0.0 ;
	int i = 1;
	string unit="";
	vector <double> values;
	while (cin>>num_1>>unit)
		{
		if (unit=="m"|| unit=="cm"|| unit=="in"|| unit=="ft")
			{
			cout<<"The number you've entered: "<<num_1 <<" The unit you've entered: "<<unit;
			if (i>=3)
				{
				if (num_1>maximum)
					{
					cout<<" The largest so far\n";
					maximum=num_1;
					}
				else if (num_1<minimum)
					{
					cout<<" The smallest so far\n";
					minimum=num_1;
					}
				else
					cout<<"\n";
				if (unit=="m")
					{
					sum=sum+meter*num_1;
					values.push_back(meter*num_1);
					}
				else if (unit=="cm")
					{
					sum=sum+centimeter*num_1;
					values.push_back(centimeter*num_1);
					}
				else if (unit=="ft")
					{
					sum=sum+feet*num_1;
					values.push_back(feet*num_1);
					}
				else if (unit=="in")
					{
					sum=sum+in*num_1;
					values.push_back(in*num_1);
					}
				}
			else if (i==1)
				{
				minimum=num_1;
				cout << " First Number\n";
				if (unit=="m")
					{
					sum=sum+meter*num_1;
					values.push_back(meter*num_1);
					}
				else if (unit=="cm")
					{
					sum=sum+centimeter*num_1;
					values.push_back(centimeter*num_1);
					}
				else if (unit=="ft")
					{
					sum=sum+feet*num_1;
					values.push_back(feet*num_1);
					}
				else if (unit=="in")
					{
					sum=sum+in*num_1;
					values.push_back(in*num_1);
					}
				}
			else if (i==2)
				{
				if (num_1<minimum)
					{
						maximum=minimum;
						minimum=num_1;
					}
				else
					maximum=num_1;
				cout<<" Second number\n";
				if (unit=="m")
					{
					sum=sum+meter*num_1;
					values.push_back(meter*num_1);
					}
				else if (unit=="cm")
					{
					sum=sum+centimeter*num_1;
					values.push_back(centimeter*num_1);
					}
				else if (unit=="ft")
					{
					sum=sum+feet*num_1;
					values.push_back(feet*num_1);
					}
				else if (unit=="in")
					{
					sum=sum+in*num_1;
					values.push_back(in*num_1);
					}
				}
			}

		else
			{
			cout<<"Wrong unit type! Enter another number!\n";
			--i;
			}
		++i;
		}
	sort(values);
	cout<<"The smallest value is: "<<minimum<<" The largest value is: "<<maximum <<" The sum of the given numbers in meters is: "<<sum<<"\n" ;
	cout<<"The values given in increasing order: ";
	for (int i=0;i<values.size();i++)
		cout<<values[i]<<" ";
	cout<<"\n";
	return 0;
}