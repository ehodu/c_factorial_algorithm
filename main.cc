#include <iostream>

using namespace std;

int fatorial(int x)
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
    cout << fatorial(y);

    return 0;
}