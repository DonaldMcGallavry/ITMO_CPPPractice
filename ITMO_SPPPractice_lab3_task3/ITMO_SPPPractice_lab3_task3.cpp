#include <iostream>
#include <math.h>

using namespace std;

double calArea(double x) {
	if (x <= 0)
		return 0;
	else
		return (sqrt(3) / 4) * x * x;
}

double calArea(double x, double y, double z) {
	double halfP = (x + y + z) / 2;
	if (x <= 0 || y <= 0 || z <= 0)
		return 0;
	else if (x + y <= z || x + z <= y || y + z <= x)
		return 0;
	else
		return sqrt(halfP * (halfP - x) * (halfP - y) * (halfP - z));
}

int main()
{
	int choice{};
	double x{}, y{}, z{};
	cout << "Choose type of triangle:\n";
	cout << "1 - equilateral\n";
	cout << "2 - scalene\n";
	cin >> choice;
	switch (choice)
	{
	case(1):
		cout << "Enter side ";
		cin >> x;

		if (calArea(x) == 0) {
			cout << "Triangle cannot exist";
		}
		else
		{
			cout << "S = " << calArea(x) << endl;
		}
		break;
	case(2):
		cout << "Enter side x, y, z ";
		cin >> x >> y >> z;
		if (calArea(x) == 0) {
			cout << "Triangle cannot exist";
		}
		else
		{
			cout << "S = " << calArea(x,y,z) << endl;
		}
		break;
		
		return 0;
	}

}

