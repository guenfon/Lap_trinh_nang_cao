#include <iostream>
#include <cstring>

using namespace std;

void Replace_Zues(string str);

int main()
{
    string str;
    getline(cin, str);
    Replace_Zues(str);
    return 0;
}

void Replace_Zues(string str)
{
    int len = str.length();
    for (int i = 0; i < len;)
    {
        if (i > len - 4 || str.substr(i, 4) != "Zues")
        {
            cout << str[i];
            ++i;
        }
        else
        {
            cout << "Zeus";
            i += 4;
        }
    }
}