string toLower (string s)
{
    int len = s.size();
    for (int i = 0; i < len; ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}