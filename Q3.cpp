#include <iostream>
using namespace std;

int RandNum;
int f();

int main()
{
	int i = 0;
	
	do
	{
			f();
			i++;	

	} while (10 < RandNum);
	
	cout << endl <<  "Times ran : " << i << endl;
	return 0;
}

int f()
{

	int range = 100;
	RandNum = rand() % range;
	cout << RandNum << " ";

	return RandNum;
}