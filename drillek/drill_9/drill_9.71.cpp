#include "../../std_lib_facilities.h"

class Year 
{
	static const int min = 1800;
	static const int max = 2200;
public:
	class Invalid {};
	Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
	int year() { return y; }
	void increment() { y++; }
private:
	int y;
};

Year operator++(Year& year)
{
		year.increment();
		return 0;
}

ostream& operator<< (ostream& os, Year year)
{
		return os << year.year();
}

const vector<string> months = 
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

enum class Month 
{
jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
		return os << months[int(m)];
}

class Date {
public:
	class Invalid {};
	Date(Year year, Month month, int day): y(year), m(month),d(day) {if(!is_valid())throw Invalid{};}
	bool is_valid();
	void add_day(int n);
	Year year() const { return y; }
	Month month() const{ return m; }
	int day() const { return d; }
private:
	Year y;
	Month m;
	int d;
};

bool Date::is_valid()
{
	if (d > 0 && d < 32) return true;
	return false;
}
	

void Date::add_day(int n)
{
	d += n;
	if (d > 31) 
	{
		++m;
		d -= 31;
		if (m == Month::jan)
		{
			++y;
			
		}
	}
}
ostream& operator<<(ostream& os, const Date date)
{
	return os << date.year()<<". "<<date.month()<<". "<<date.day()<<'\n';
}


int main()
try {
	
	Date today{Year(1978),Month::jun,25};
	cout<<"Date: "<<today;
	today.add_day(1);
	Date tomorrow = today;
	cout<<"Date: "<<tomorrow;


	return 0;
} 

catch (Date::Invalid) 
{
	cerr << "Error: Invalid date\n";
	return 1; 
} 

catch (Year::Invalid) 
{
	cerr << "Error: Invalid year\n";
	return 2; 
} 

catch (exception& e) 
{
	cerr << "Error: " << e.what() << endl;
	return 3;
}