
// Typecasting
// Break and Continue statements

// Control structure
// 1. Sequence structure -> Function one after Another
// 2. Selection structure -> If-else Conditionals, Switch Statements
// 3. Loop structure -> While Do-while,For Loops (Done)

// ************************* Strings in C++ *************************
/*
char name[20] = {'L','o','k'}
C++ has in its definition a way to represent a sequence of characters as an object of the class. This class is called std:: string. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

The string class can be used by including the header file . The string class has a lot of functions which allow us to manipulate the stored sequence of characters in the object.

The string class also supports a lot of operators like =, +, +=, ==, !=, <, <=, >, >=, [], etc.

The string class also supports a lot of functions like length(), size(), begin(), end(), rbegin(), rend(), clear(), insert(), erase(), append(), replace(), swap(), pop_back(), c_str(), substr(), find(), rfind(), compare(), etc.

The string class also supports iterators which can be used to access the characters of the string object.

The string class also supports a lot of algorithms which can be used to manipulate the string object.

The string class also supports a lot of searching and sorting algorithms which can be used to search and sort the string object.




*/

#include <iostream>
#include <string>
using namespace std;
int main()
{

    // cout << "Hello World!";

    // Typecasting
    // int a = 10;
    // float b = 10.28;

    // cout << "The sum of given two number is : " << a + b << endl;

    // cout << "The sum of given two number is : " << a + int(b) << endl;

    // cout << "The sum of given two number is : " << a + (int)b << endl;

    // char character = 'c';

    // cout<<"The character is : "<<character<<endl;

    // cout<<"The character is : "<<int(character)<<endl;

    // cout<<"The character is : "<<int('b')<<endl;

    // ***************  Break and continue statement *************************

    // for (int  i = 0; i < 10; i++)
    // {
    //     if(i==5)break;
    //     cout<<i<<endl;
    // }

    // for (int  i = 0; i < 10; i++)
    // {
    //     if(i==5)continue;
    //     cout<<i<<endl;
    // }

    return 0;
}
