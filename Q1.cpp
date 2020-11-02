#include <iostream>
using namespace std;

void swapnums(int& a, int& b);

int main()
{
	int a, b;
	cout << "enter 2 intigers : "; cin >> a >> b;
	swapnums(a, b);
}

void swapnums(int& a, int& b)
{
	swap(a, b);

	cout << a << b;

}