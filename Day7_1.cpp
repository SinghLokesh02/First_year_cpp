// *********************************** String Function ->Revisiting String Functions ***********************************

// 1. append() -> It is used to append the string at the end of another string

// 2. insert() -> It is used to insert the string at the given position

// 3. size(), length() -> It is used to get the length/size of string

// 4. clear() -> It is used to clear the string

// 5. empty() -> It is used to check whether the string is empty or not

// 6. compare() -> It is used to compare two strings
//(i) it returns -1 if statement is false
//(ii) it returns 0 if both strings are equal
//(i) it returns 1 if statement is true

// 7. swap() -> It is used to swap the content of two strings

// 8. find() -> It is used to find the index of given string

// 9. replace() -> It is used to replace the string
// string_in_which_you_want_replacement.(starting_Index,Number_of_char_to_replace,new_string_after_replacement)

// 10. push_back() -> It is used to push the character at the end of string

// 11. pop_back() -> It is used to pop the character from the end of string

// 12. substr() -> It is used to get the substring from the string
// formula -> *******  from_which_string_you_want_substring.(starting_index,Number_of_character_to_copy) **********

// 13. erase() -> It is used to erase the string
// Syntax:-
// for deletion at specific position
//  string_name.erase(position_iterator);

// for deletion in range
// string_name.erase(starting_position_iterator, ending_position_iterator);

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Lokesh is good boy", s2 = "Singh";

    // append
    // s1.append(s2);
    // cout << s1 << endl;

    // insert
    //  s1.insert(17, s2);
    //  cout << s1 << endl;

    // size or lenght
    // cout<<"The size of string s1 is : "<<s2.size()<<endl;
    // cout<<"The size of string s1 is : "<<s2.length()<<endl;

    // clear
    // cout << s1 << endl;
    // s1.clear();
    // cout << s1 << endl;

    // empty -> return ans in 0 or 1
    // cout<<s1.empty()<<endl;
    // s1.clear();
    // cout<<s1.empty()<<endl;

    // compare ->1 , 0 , -1 it compares > only
    // cout<<s2.compare(s1)<<endl;

    // swap
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // swap(s2,s1);
    // cout<<s1<<endl;
    // cout<<s2<<endl;

    // find -> it returns an integer value
    // i)the given string is found -> return index
    // ii)the given string is not found ->return -1

    //    int found = s1.find("Lokesh");
    //     cout<<"The index of defined word in string is : "<<found<<endl;

    // replace
    // cout<<s1<<endl;
    // s1.replace(3,2,"Mukesh");
    // cout<<s1<<endl;

    // push_back
    // s1.push_back('h');
    // cout << s1 << endl;

    //pop_back
    // s1.pop_back();
    // cout << s1 << endl;

    // substr
    // cout<<s1<<endl;
    // string new_string = s1.substr(4,6);
    // cout<<new_string<<endl;
    // cout<<new_string.size();

    // erase
    // Delete a specific character from string
    // cout<<s1<<endl;
    // s1.erase(s1.begin()+7);
    // cout<<s1<<endl;

    // Delete a range of character from string
    cout<<s1<<endl;
    s1.erase(s1.begin()+7 , s1.end()-3);
    cout<<s1<<endl;





    return 0;
}
