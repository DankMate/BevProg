#include "../../std_lib_facilities.h"


void print_array10(ostream& os, int* a)	
{
	for (int i=0;i<10;i++) 
	{	
        os << a[i] << " ";  
    }

    cout <<'\n';
}


void print_array(ostream& os, int* a,int n)	
{
	for (int i=0;i<n;i++) 
	{	
        os << a[i] << " ";  
    }

    cout <<'\n';
}

void print_vector(ostream& os,vector<int> a, int n)
{
	for (int i=0;i<n;i++) 
	{	
        os << a[i] << " ";  
    }

    cout <<'\n';
}	

int  main()
{
	//First part
	int* a=new int[10];
	cout<<"Values of a: ";
	for (int i=0;i<10;i++) 
	{	
        cout << a[i] << " ";  
    }
    cout <<'\n';
	cout<<"Values of a again: "; print_array10(cout,a);
	//

	//Second Part
	int* b=new int[10]{101,102,103,104,105,106,107,108,109,110};
	cout<<"Values of b: "; print_array10(cout,b);
	//

	//Third part
	int* c=new int[11]{101,102,103,104,105,106,107,108,109,110,111};
	cout<<"Values of c: ";
	for (int i=0;i<11;i++) 
	{	
        cout << c[i] << " ";  
    } 
    cout <<'\n';
    cout<<"Values of c again: "; print_array(cout,c,11);
    //

    //Fourth part
    int* d=new int[20]{101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
    cout<<"Values of d: ";print_array(cout,d,20);


    //5
    vector<int>avector ={101,102,103,104,105,106,107,108,109,110};
    cout<<"Values of avector: ";print_vector(cout,avector,avector.size());

    //6
    vector<int>bvector ={101,102,103,104,105,106,107,108,109,110,111};
	cout<<"Values of bvector: ";print_vector(cout,bvector,bvector.size());

	//7
    vector<int>cvector ={101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
	cout<<"Values of cvector: ";print_vector(cout,cvector,cvector.size());


	
    delete[] a;
    delete[] b;
    delete[] c;
    delete[] d;


	return 0;
}