// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once
// Input: s = "anagram", t = "nagaram"
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2)
{

    if (str1.size() != str2.size())
    {
        return false;
    }
    else
    {
        int count[26];
        for (int i = 0; i < 26; i++)
        {
            count[i] = 0;
        }

        for (int i = 0; i < str1.size(); i++)
        {
            count[str1[i] - 'a']++;
        }
        for (int i = 0; i < str2.size(); i++)
        {
            count[str2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }
        return true;

    }
}

int main()
{

    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    cout << anagram(str1, str2);
}