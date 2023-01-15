#include <iostream>

using namespace std;

int main()
{
	int num1, num2, current, i, nthFibonacci;

	cout << "Enter first 2 Fibonacci Numbers: ";
	cin >> num1 >> num2;
	
	cout << "Enter the Position of the desired Fibonacci Number: ";
	cin >> nthFibonacci;

	if (nthFibonacci == 1)
	{
		current = num1;
	}
	else if (nthFibonacci == 2)
	{
		current = num2;
	}
	else
	{
		i = 3;
		while (i <= nthFibonacci)
		{
			current = num1 + num2;
			num1 = num2;
			num2 = current;
			i++;
		}
	}

	cout << "The Fibonacci Number at position " << nthFibonacci << " is: " << current << endl;
	
	// system("pause");         // Uncomment this line for Visual Studio
	return 0;
}