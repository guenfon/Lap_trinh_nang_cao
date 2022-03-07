#include <iostream>

using namespace std;

int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = 0;
    for (int numDog = 0; numDog <= total; ++numDog)
    {
        int numChicken = total - numDog;
        if (numDog*4 + numChicken*2 == totalLegs)
            flag = 1;
        if (flag == 1)
        {
            cout << "chicken = " << numChicken << ", dog = " << numDog;
            break;
        }
    }
    if (flag == 0) cout << "invalid";
    return 0;
}