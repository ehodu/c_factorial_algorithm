#include <iostream>

using namespace std;

double factorial(int x)
{
    double f = 1;
    double z = x + 1;
    while (z > 1)
    {
        z--;
        f *= z;
    }
    return f;
}

int main()
{
    double y;
    cin >> y;
    cout << factorial(y);

    return 0;
}
