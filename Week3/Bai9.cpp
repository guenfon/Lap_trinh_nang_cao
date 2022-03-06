#include <iostream>
#include <string>

using namespace std;

string Remove_Space(string str);

int main()
{
    string str;
    getline(cin, str);
    cout << Remove_Space(str);
    return 0;
}

string Remove_Space(string str)
{
    int len = str.length();
    string result = "";
    while (str[len] == ' ')
    {
        --len;
    }
    int i = 0;
    while (str[i] == ' ')
    {
        result += str[i];
        ++i;
    }
    for (; i < len; ++i)
    {
        if (str[i] != ' ')
        {
            result += str[i];
        }
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            result += ' ';
        }
    }
    return result;
}