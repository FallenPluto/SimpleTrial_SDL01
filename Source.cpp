#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    float y, a, b, c, d;

    a = 3.56;
    b = 1.02;
    c = 3;
    d = 2.43;

    // The formula to fnd y 
    y = pow(tan(a), 1 / c) / (1 + (sinh(b)) / (log(abs(d + c))));

    // Print the value of y 
    cout << "The Solution is " << y;

    return 0;
}
