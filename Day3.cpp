/*
-> Input/Output in CPP

-> Operators in CPP
1. Arithmetic Operators (+,-,*,/,%)

2. Relational Operators (== ,<, >, <=, >=, !=)

3. Logical Operators (&&, ||, !)

4. Bitwise Operators (&,|,^,!)
1&0 -> 0
5. Assignment Operators (=,+=,-=,*=,/=)
i = 1
(i = i+10 -> i += 10 )
(i = i-10 -> i -= 10 )
(i = i*10 -> i *= 10 )
(i = i/10 -> i /= 10 )

i = 11;

OR Gate

1 || 1 -> 1
1 || 0 -> 1
0 || 1 -> 1
0 || 0 -> 0

*/

#include <iostream>
using namespace std;
int main()
{
    // int num1;

    // char char1;
    // cout << "Enter the value of a number\n";
    // cin >> num1;
    // cout << "Enter the value of a char\n";
    // cin >> char1;

    // cout << "The value of num1 is " << num1 << endl;
    // cout << "The value of char1 is " << char1 << endl;

    // int num3 = 1, num2 = 3;
    // cout << "The sum of given 2 number is : " << num3 + num2 << endl;

    // Operators
    int num1 = 10, num2 = 10;
    // 1) Arithmetic Operators

    // cout<<"The sum of two number is : "<<num1+num2<<endl;
    // cout<<"The multiply of two number is : "<<num1*num2<<endl;
    // cout<<"The difference of two number is : "<<num1-num2<<endl;
    // cout<<"The division of two number is : "<<num1/num2<<endl;// 3.3 , 3
    // cout<<"The mod is : "<<num1%num2<<endl;// 1

    // 2) Relational Operators
    // cout << "The value of num1 == num2 is : " << (num1 == num2) << endl;
    // cout << "The value of num1 != num2 is : " << (num1 != num2) << endl;
    // cout << "The value of num1 >= num2 is : " << (num1 >= num2) << endl;
    // cout << "The value of num1 <= num2 is : " << (num1 <= num2) << endl;
    // cout << "The value of num1 > num2 is : " << (num1 > num2) << endl;
    // cout << "The value of num1 < num2 is : " << (num1 < num2) << endl;

    // 3) Logical Operators
    // cout << "The value of ((num1==num2) && (num1<num2)) is : " << ((num1 == num2) && (num1 < num2)) << endl;//0
    // cout << "The value of ((num1==num2) || (num1<num2)) is : " << ((num1 == num2) || (num1 < num2)) << endl;//1
    // cout << "The value of (!(num1==num2)) is : " << (!(num1 >= num2)) << endl;//0

    // 4) Assignment Operators

    // num1 = num1 + 2;
    // cout << "The value of num1 is : " << num1 << endl; // 12
    // num1 += 2;
    // cout << "The value of num1 is : " << num1 << endl;// 14
    // num1 -= 2;
    // cout << "The value of num1 is : " << num1 << endl; // 12
    // num1 *= 2;
    // cout << "The value of num1 is : " << num1 << endl; // 24
    // num1 /= 2;
    // cout << "The value of num1 is : " << num1 << endl; // 12
    // num1 %= 2;
    // cout << "The value of num1 is : " << num1 << endl; // 0

    // Increment operator
    // int number = 10;
    // number++;
    // cout << number << endl;
    // cout << number++ << endl;
    // cout << number << endl;
    // cout << ++number << endl;
    // cout << ++number << endl;
    // cout << number++ << endl;
    // cout << number << endl;

    // Decrement
    // cout<<"\n Decrement Operators\n";
    // number--;
    // cout<<number<<endl; //14
    // cout<<number--<<endl;  // 13
    // cout<<number<<endl;
    // cout<<--number<<endl;
    // cout<<--number<<endl;
    // cout<<number--<<endl;
    // cout<<number<<endl;

    // Loops
    // 1) For Loop
    // 2) While Loop
    // 3) Do While Loop
    cout << "\n Loops\n";
    for (int i = 0; i <= 0; i*=1) // 0 1 2 3 4 5 6 7  8 9
    {
        cout << i << endl;
    }

  

    return 0;
}