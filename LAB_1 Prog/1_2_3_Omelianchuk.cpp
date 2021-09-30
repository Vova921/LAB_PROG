#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float e = 2.71828, pi = 3.14, f = 3.33821;
	float x = 2.3, z = -1.21, f1;

	f1 = pow(e, x * cos(pi / 4)) * cos(z * sin(pi / 4));
	cout << "f = " << f1;
}