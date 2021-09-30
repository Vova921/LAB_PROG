#include <iostream>

using namespace std;

int main()
{
    float x, b, y, s;
    x = 2.1;
    b = 3.23;

    y = tan(sin(b * x)) + 1 / (x + sqrt(sqrt(b)));
    s = 1 + 1 / (pow(x, 2) + 3.12);

    cout << "At х = " << x << ", b = " << b << endl;
    cout << fixed;
    cout.precision(2);
    cout << "y = " << y << ", s = " << s;
}

