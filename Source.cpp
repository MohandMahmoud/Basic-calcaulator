#include <iostream>
#include <boost/chrono.hpp>
using namespace std;
double sum(double, double);
double sub(double, double);
double multply(double, double);
double division(double, double);
double pw(double, double);
double fact(double);
double squrt(double);
int main()
{
	double num_1 = 0, num_2 = 0;
	char op = ' ', choice = ' ';
	cout << "Enter the equation ";
	cin >> num_1 >> op >> num_2;
	if (op == '+')
	{
		cout << '=' << sum(num_1, num_2) << endl;
		num_1 = sum(num_1, num_2);
	}
	else if (op == '-')
	{
		cout << '=' << sub(num_1, num_2) << endl;
		num_1 = sub(num_1, num_2);
	}
	else if (op == '*')
	{
		cout << '=' << multply(num_1, num_2) << endl;
		num_1 = multply(num_1, num_2);
	}
	else if (op == '/')
	{
		cout << '=' << division(num_1, num_2) << endl;
		num_1 = division(num_1, num_2);
	}
	else if (op == '^')
	{
		cout << '=' << pw(num_1, num_2) << endl;
		num_1 = pw(num_1, num_2);
	}
	else if (op == '!')
	{
		cout << '=' << fact(num_1) << endl;
		num_1 = fact(num_1);
	}
	else if (op == '|')
	{
		cout << '=' << squrt(num_1) << endl;
		num_1 = squrt(num_1);
	}
	else { cout << "Invalid operator" << endl; }
	while (true) {
		cout << "1 - enter onother number " << endl << "2 - End" << endl;
		cin >> choice;
		if (choice == '1')
		{
			cout << "enter the operator ";
			cin >> op;
			if (op == '+')
			{
				cout << "Enter the number" << endl;
				cin >> num_2;
				cout << '=' << sum(num_1, num_2) << endl;
				num_1 = sum(num_1, num_2);
			}
			else if (op == '-')
			{
				cout << "Enter the number" << endl;
				cin >> num_2;
				cout << '=' << sub(num_1, num_2) << endl;
				num_1 = sub(num_1, num_2);
			}
			else if (op == '*')
			{
				cout << "Enter the number" << endl;
				cin >> num_2;
				cout << '=' << multply(num_1, num_2) << endl;
				num_1 = multply(num_1, num_2);
			}
			else if (op == '/')
			{
				cout << "Enter the number" << endl;
				cin >> num_2;
				cout << '=' << division(num_1, num_2) << endl;
				num_1 = division(num_1, num_2);
			}
			else if (op == '^')
			{
				cout << "Enter the number" << endl;
				cin >> num_2;
				cout << '=' << pw(num_1, num_2) << endl;
				num_1 = pw(num_1, num_2);
			}
			else if (op == '!')
			{
				cout << '=' << fact(num_1) << endl;
				num_1 = fact(num_1);
			}
			else if (op == '|')
			{
				cout << '=' << squrt(num_1) << endl;
				num_1 = squrt(num_1);
			}
		}
		else { return 0; }
	}
}
double sum(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double multply(double x, double y)
{
	return x * y;
}
double division(double x, double y)
{
	return x / y;
}
double pw(double x, double y)
{
	double z = 1;
	for ( int i = 1;i <= y;i++){z *= x;}
	return z;
}
double fact(double x )
{
	double z = 1;
	for (int i = 1;i <= x;i++){z *= i;}
	return z;
}
 double squrt(double x)
 {
	 double z = x;
	 double y = 1;
	 double e = 0.000001; /* e decides the accuracy level*/
	 while (z - y > e) {
		 z = (z + y) / 2;
		 y = x / z;
	 }
	 return z;
 }
 

