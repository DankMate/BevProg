#include "../../std_lib_facilities.h"

void print_array(ostream& os,int* a,int n)
{
	for (int i=0;i<n;i++)
		{
		os<<a[i]<<" ";
		}
	cout<<endl;
}
int main()
{
	//First part
	int a=7;
	int* p1=&a;
	cout<<"Adress: "<<p1<<" Value: "<<*p1 <<endl;

	//Second part
	int* p2=new int[7]{1,2,4,8,16,32,64};
	cout<<p2 ;print_array(cout,p2,7);
	int* p3=p2;
	p2=p1;
	p2=p3;
	cout<<"p1= "<<p1<<" Value: "<<*p1<<endl;
	cout<<"p2= "<<p2<<" Values: "; print_array(cout,p2,7);
	delete[] p3;
	

	p1=new int[10]{1,2,4,8,16,32,64,128,256,512};
	p2=new int[10]{1,2,3,4,5,6,7,8,9,10};
	for (int i=0;i<=10;i++)
	{
		p2[i]=p1[i];
	}
	cout<<"Values of p2: "; print_array(cout,p2,10);


	delete[] p2;
	delete[] p1;
	
	vector<int>p1v= {1,2,4,8,16,32,64,128,256,512};
	vector<int>p2v= {1,2,3,4,5,6,7,8,9,10};
	cout<<"Values of p2v: ";
	for (int i=0;i<10;i++)
	{
		p2v[i]=p1v[i];
		
		cout << p2v[i] << " ";
	}
	cout<<endl;



	return 0;
}