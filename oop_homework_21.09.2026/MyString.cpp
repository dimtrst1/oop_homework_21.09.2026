#include "MyString.h"
#include <iostream>
using namespace std;

int MyString::count = 0;

MyString::MyString()
{
    length = 80;
    str = new char[length + 1];
    str[0] = '\0';
    count++;
}

MyString::MyString(int size)
{
    length = size;
    str = new char[length + 1];
    str[0] = '\0';
    count++;
}

MyString::MyString(const char* s)
{
    length = strlen(s);

    str = new char[length + 1];
    strcpy(str, s);
    count++;
}

MyString::MyString(const MyString& obj)
{
    length = obj.length;
    str = new char[length + 1];
    strcpy(str, obj.str);
    count++;
}

void MyString::Input()
{
    char buff[1000];
    cout << "Enter string: ";
    cin.getline(buff, 1000);
    delete[] str;
    length = strlen(buff);
    str = new char[length + 1];
    strcpy(str, buff);
}

void MyString::Print() const
{
    cout << str << endl;
}

void MyString::MyStrcpy(const MyString& obj)
{
    delete[] str;
    length = obj.length;
    str = new char[length + 1];
    strcpy(str, obj.str);
}

bool MyString::MyStrStr(const char* sub)
{
    int subLength = strlen(sub);
    
    for (int i = 0; i <= length - subLength; i++)
    {
        bool found = true;

        for (int j = 0; j < subLength; j++)
        {
            if (str[i + j] != sub[j])
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            return true;
        }
    }

    return false;
}

int MyString::MyChr(char c)
{
    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }

    return -1;
}

int MyString::MyStrLen()
{
    return length;
}

void MyString::MyStrCat(const MyString& obj)
{
    int newLength = length + obj.length;

    char* temp = new char[newLength + 1];

    strcpy(temp, str);
    strcat(temp, obj.str);

    delete[] str;

    str = temp;
    length = newLength;
}

void MyString::MyDelChr(char c)
{
    int newLength = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] != c)
        {
            newLength++;
        }
    }

    char* temp = new char[newLength + 1];
    int j = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] != c)
        {
            temp[j] = str[i];
            j++;
        }
    }

    temp[j] = '\0';
    delete[] str;
    str = temp;
    length = newLength;
}

int MyString::MyStrCmp(const MyString& obj)
{
    int result = strcmp(str, obj.str);

    if (result < 0)
    {
        return -1;
    }

    if (result > 0)
    {
        return 1;
    }

    return 0;
}

int MyString::GetCount()
{
    return count;
}

MyString::~MyString()
{
    delete[] str;
    count--;
}
