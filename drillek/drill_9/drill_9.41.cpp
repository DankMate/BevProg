#include "../../std_lib_facilities.h"

struct Date 
{
	int y;
	int m; 
	int d;
};

void init_day(Date& dd, int y, int m, int d) 
{
	if (y>0 && y <3000)
		dd.y=y;
    if (m < 12 && m > 0)
		dd.m = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		dd.d = d;
	else
		error("Invalid day");
	
}
void add_day(Date& dd, int n)
{
	dd.d += n;
	if (dd.d > 31) 
	{
		dd.m++;
		dd.d -= 31;
		if (dd.m > 12)
		{
			dd.y++;
			dd.m -= 12;
		}
	}
}
ostream& operator<<(ostream& os, const Date d)
{
	return os << d.y<<". "<<d.m<<". "<<d.d<<'\n';
}

int main()
{
Date today;
init_day(today,1978,6,25);
cout<<"Date: "<<today;
add_day(today,1);
Date tomorrow = today;
cout<<"Date: "<<tomorrow;

return 0;	
}

