
// Basic String
// This class is called std:: string. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

// Declaration

// Initialization

// Input

// Output

// Concatenation

// Operators supported -> +,+=,>,<,>=,<=,!=,==

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s1; // declaration
    s1 = "Lokesh"; //Initialization

    string s2 = "Singh"; //Initialization + declaration

    string s3;
    // cin >> s3; //Input

    // cout<<s3<<endl;


    // Concatenate -> add,plus
    // cout<<"The addition of two string : "<<s1+s2;

    // operator that string supports
    // 1) -> =
    // 2) -> +,+=

if(s1!=s2){
    cout<<"The given 2 strings are not Equal";
}


    return 0;
}

/*
   int n;
    cout << "Enter the size of Array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Forward Printing
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Methods -1
    // size -> 5
    //Indexing -> 0 1 2 3 4
    // Array ->   1 2 3 4 5
    // cout << "The array elements are \n";
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    // Methods -2
    // Array ->   5 4 3 2 1
    reverse(arr,arr+n);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
*/