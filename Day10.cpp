// Function overloading

int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}

#include <iostream>
using namespace std;
int main()
{
    // int x = sum(4,5);
    // cout<<"The sum is : "<<x<<endl;

    cout << "The sum is : " << sum(4, 5) << endl;
    cout << "The sum is : " << sum(4.6, 5.7) << endl;
    cout << "The sum is : " << sum(4, 5, 5) << endl;
    cout << "The sum is : " << sum(4, 5, 5, 6) << endl;

    return 0;
}