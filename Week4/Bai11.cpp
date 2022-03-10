string pigLatin(string word)
{
    string new_word = "";
    if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i')
    {
        new_word = word;
        new_word += "way";
    }
    else
    {
        for (int i = 1; i < word.size(); ++i)
            new_word += word[i];
        new_word += word[0];
        new_word += "ay";
    }
    return new_word;
}