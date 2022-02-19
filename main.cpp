#include <iostream>
double f(double a) { return a - 10; }
double bisection(double a, double b, double e)
{
	double fa = f(a);
	while (true)
	{
		double x = (a + b) / 2;
		if ((abs(x - a) < e) || (abs(x - b) < e))
			return x;
		else if (f(x) * fa > 0)
			a = x;
		else
			b = x;
	}
}
int main()
{
	std::cout << "x^2 - 10 = 0" << std::endl;
	double e = 0.0001;
	double ds = bisection(0, 10, e);
	std::cout << "x = " << ds;
}
