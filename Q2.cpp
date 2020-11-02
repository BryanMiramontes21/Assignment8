#include <iostream>
#include <cmath> 
using namespace std;

void circle(float& area, float& perimeter, const float pi, float& radius);

int main()
{
	const float pi = 3.14159;
	float area, perimeter, radius;

	circle(area, perimeter, pi, radius);
}

void circle(float& area, float& perimeter, const float pi, float& radius)
{
	cout << "Input radius of a circle : "; cin >> radius;
	area = pi * pow(radius, 2);
	cout << "Area of your circle is : " << area << endl;
	perimeter = 2 * pi * radius;
	cout << "perimeter of your circle is : " << perimeter << endl;
}