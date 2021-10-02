#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "~~~Square Root Calculator~~~" << endl;
	cout << "-type any weird value to exit-" << endl;
	double input;
	int limit = 999999999;
	for (int i; i<limit; i++)
	{
		cout << "Input Value : ";
		cin >> input;
		if (input < 0)
		{
			return 0;
		}
		else 
		{
			cout << sqrt(input) << endl;
		}
	}
}
