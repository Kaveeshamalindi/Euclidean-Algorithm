//Euclidean algorithm

#include <iostream>
using namespace std;

//GCD Function
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

//Main Function
int main()
{
    int a = 30, b = 15;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}


