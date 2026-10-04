#pragma once
#include <iostream>
using namespace std;

class MyString
{
    char* str;
    int length;

    static int count;

public:
    MyString();
    MyString(int size);
    MyString(const char* s);
    MyString(const MyString& obj);

    ~MyString();

    void Input();
    void Print() const;

    void MyStrcpy(const MyString& obj);
    bool MyStrStr(const char* str);
    int MyChr(char c);
    int MyStrLen();
    void MyStrCat(const MyString& obj);
    void MyDelChr(char c);
    int MyStrCmp(const MyString& obj);

    static int GetCount();
};
