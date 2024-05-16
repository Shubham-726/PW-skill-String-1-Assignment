#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int x = 0;
    for (int i = 0; i < str.length(); i++)
    {
        x = x * 10 + (str[i] - '0');
    }
    cout << x;
}