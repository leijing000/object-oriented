#include"Circle.h"
#include<iostream>

using namespace std;

int main()
{
	double area;
	double radius;

	cout << "Please enter the radius of the circle:";
	cin >> radius;

	area = calculate(radius);

	cout << "The area of the circle is: " << area << endl;

	return 0;
}