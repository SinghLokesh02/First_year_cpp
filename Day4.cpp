// Loops
// 1) For Loop
// 2) While Loop
// 3) Do While Loop



#include <iostream>
using namespace std;
int main()
{
    /*
    cout << "\n  For Loops\n";
    // 1) For Loop
    for (int i = 0; i < 10; i++) // 0 1 2 3 4 5 6 7  8 9
    {
        cout << i << " ";
    }

    cout << "\n While Loop\n";
    // 2) While Loop
    int j = 0;
    while (j < 10)
    {
        cout << j << " ";
        j++;
    }

    cout << "\n Do While Loop\n";
    // 3) Do While Loop
    int k = 0;
    do
    {
        cout << k << " ";
        k++;
    } while (k < 10);
*/
    int n;
    cout << "Please Enter the value of N : ";
    cin >> n;
    int i = 0;
    // do
    // {
    //    cout<<i<<" ";
    //    i += 2;
    // } while (i<n);

    // for (int i = 0; i < n; i+=2)
    // {
    //     cout<<i<<" ";
    // }

    // cout << endl;

    while (i < n)
    {
        cout << i << endl;
        i += 2;
    }

    return 0;
}

//  Problems of the Day

// 1) Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.

// 2) Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

// 3) Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.

// 4) Enter two numbers from keyboard. Write a program to check if the two numbers are equal.