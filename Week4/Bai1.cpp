int maxThree(int a, int b, int c)
{
    int Max = a;
    if (Max < b) Max = b;
    if (Max < c) Max = c;
    return Max;
}