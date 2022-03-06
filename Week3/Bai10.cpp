#include <iostream>
#include <string>

using namespace std;

bool Check_Usename(string str);

int main()
{
    string str;
    getline(cin, str);
    bool check = Check_Usename(str);
    if (check == 1)
        cout << "Valid username.";
    else cout << "Invalid username.";
    return 0;
}

bool Check_Usename(string str)
{
    int len = str.length();
    if (len < 6 || len > 15)
        return 0;
    if (str[0] >= '0' && str[0] <= '9')
        return 0;
    for (int i = 0; i < len; ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
            continue;
        else return 0;
    }
    return 1;
}