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
    int a, b;
	
	cout <<" \t GCD Calculator" <<endl;
	cout <<"----------------------------------------" <<endl;
	
	cout <<" " <<endl;
	
	cout <<"Enter first number" <<endl;
	cin>>a;
	
	cout <<" " <<endl;
	
	cout <<"Enter second number" <<endl;
	cin>>b;
	
	cout <<" " <<endl;
    
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}



