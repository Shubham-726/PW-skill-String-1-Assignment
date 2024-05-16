#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    bool flag = false;
    for (int i = 0, j = str.length() - 1; i <= j; i++, j--)
    {
        if (str[i] == str[j])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Palindrome String";
    }
    else
        cout << "Not Palindrome";
}
