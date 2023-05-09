// Types of function
// Function with arguments and no return values

// Function with arguments and one return value

// Function with no arguments and no return values

// Function with no arguments and one return value

// Function with multiple return values

// Inline Function 

// Function overloading

#include <iostream>
using namespace std;

// Function with arguments and no return values

void sum(int a, int b)
{
    cout << "The sum of given two number is : " << a + b << endl;
}

// Function with arguments and one return value
inline int add(int a, int b) // parameter || Formal Parameter
{
    return a + b;
}

// Function with no arguments and no return values
void hello()
{
    int a, b;
    cout << "Enter Number 1\n";
    cin >> a;
    cout << "Enter Number 2\n";
    cin >> b;
    cout << "The sum of given two number is : " << a + b << endl;
}

// Function with no arguments and one return values
int sub()
{
    int a, b;
    cout << "Enter Number 1\n";
    cin >> a;
    cout << "Enter Number 2\n";
    cin >> b;
    return a - b;
}

int main()
{

    //  sum(2, 4);

    //  int x = add(4,5);// Argument || Actual Parameter
    //  cout<<"The sum is : "<<x<<endl;

    // hello();

    int diff = sub();
    cout<<"The difference of 2 Number is : "<<diff<<endl;
  

}
