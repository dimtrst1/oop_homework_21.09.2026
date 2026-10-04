#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString str1("Hello World");

    cout << "str1: ";
    str1.Print();

    MyString str2 = str1;

    cout << "str2: ";
    str2.Print();

    cout << "Length str1: " << str1.MyStrLen() << endl;

    cout << "Index of 'W': " << str1.MyChr('W') << endl;

    MyString str3("Test");

    str3.MyStrcpy(str1);

    cout << "str3 after copy: ";
    str3.Print();

    MyString str4("!!!");

    str1.MyStrCat(str4);

    cout << "str1 after MyStrCat: ";
    str1.Print();

    str1.MyDelChr('l');

    cout << "str1 after deleting 'l': ";
    str1.Print();

    cout << "Compare str1 and str2: " << str1.MyStrCmp(str2) << endl;

    cout << "Objects count: " << MyString::GetCount() << endl;

    MyString str5;

    str5.Input();

    cout << "You entered: ";
    str5.Print();
}
