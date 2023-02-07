#include <iostream>

using namespace std;

class DateTime
{
	int day, month, year, hours, minutes, seconds;

    public:
        void SetValue(int d,int m, int y)
        	{
        		day = d;
        		month = m;
        		year = y;
        		cout << "Date is:" << day << "-" << month << "-" << year << endl;
        	}

        void SetValue(int d,int m,int y,int h)
        	{
        		day = d;
        		month = m;
        		year = y;
        		hours = h;
        		cout << "Date is:" << day << "-" << month << "-" << year << endl;
        		cout << "Time is:" << hours << " hours." << endl;
        	}

        void SetValue(int d,int m,int y,int h,int min)
        	{
        		day=d;
        		month=m;
        		year=y;
        		hours=h;
        		minutes=min;
        		cout << "Date is:" << day << "-" << month << "-" << year << endl;
        		cout << "Time is:" << hours << ":" << minutes << endl;
        	}

        void SetValue(int d,int m,int y,int h,int min,int s)
        	{
        		day=d;
        		month=m;
        		year=y;
        		hours=h;
        		minutes=min;
        		seconds=s;
        		cout << "Date is:" << day << "-" << month << "-" << year << endl;
        		cout << "Time is:" << hours << ":" << minutes << ":" << seconds << endl;
        	}
};

int main()
{
	int d, m, y, h, min, s;

	cout << "Enter date:";
	cin >> d;

	cout << "Enter month:";
	cin >> m;

	cout << "Enter year:";
	cin >> y;

	cout << "Enter hours:";
	cin >> h;
	
	cout << "Enter minutes:";
	cin >> min;
	
	cout << "Enter seconds:";
	cin >> s;

	DateTime dt;

	dt.SetValue(d, m, y);
	dt.SetValue(d, m, y, h);
	dt.SetValue(d, m, y, h, min);
	dt.SetValue(d, m, y, h, min, s);
	
	return 0;
}