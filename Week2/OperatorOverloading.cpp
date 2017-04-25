//	Author 			: Mostafa Bassem Heiba
// 	Description 		: Generic Function for summation of vectors of allowed datatypes (int,double,etc..)
//  	Date			: 26/4/2017

#include <iostream>

using namespace std;

typedef enum days { SUN, MON, TUE, WED, THU, FRI, SAT } days;

class point
{
public:
	double x, y;
};

// overloading + operator for point
point operator+ (point& p1, point& p2)
{
	point sum = { p1.x + p2.x , p1.y + p2.y };
	return sum;
}

// overloading - operator for point
point operator- (point& p1, point& p2)
{
	point diff = { p1.x - p2.x,p1.y - p2.y };
	return diff;
}

// overloading outstream 
ostream& operator<<
(ostream& out, const point& p)
{
	out << "(" << p.x << "," << p.y << ")";
	return out;
}

// overloading outstream
ostream& operator<<
(ostream& out, const days& d)
{
	switch (d)
	{
	case SUN: out << "SUN"; 
		break;
	case MON: out << "MON";
		break;
	case TUE: out << "TUE";
		break;
	case WED: out << "WED";
		break;
	case THU: out << "THU";
		break;
	case FRI: out << "FRI";
		break;
	case SAT: out << "SAT";
		break;
	default: out << "NULL";

	}
	return out;
}

inline days operator++ (days d)
{
	return static_cast<days>((static_cast<int>(d)+1)%7);
}
int main()
{
	days d = MON;
	cout << "Today is " << d << endl;
	d = ++d;
	cout << "Tomorrow is " << d << endl;
	point a = { 3.5,2.4 };
	point b = { 2.25,3.14 };
	cout << a + b << endl;
	
	system("pause");
	return 0;
}
