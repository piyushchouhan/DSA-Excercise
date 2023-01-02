//Sentence Palindrome (Palindrome after removing spaces, dots, .. etc)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sentencePalindrome(string str)
{
    int m = 0, n = str.length() - 1;

    for(int i = 0; i<=n; i++)
    {
        str[i] = tolower(str[i]);
    }

    while(m <= n)
    {
        // checking if there is any symbol left of sentance
        if (!((str[m]>='a' && str[m]<='z')||(str[m]>='0' && str[m]<='9')))
            m++;

        // checking if there is any symbol right of sentance
        else if (!((str[n]>='a' && str[n]<='z')||(str[n]>='0' && str[n]<='9')))
            n--;
            
        // comparing every character
        else if(str[m]==str[n])
        m++,n--;

        else
            return false;
    }
    return true;
}

int main()
{
    string str = "0p";
  
    if (sentencePalindrome(str))
        cout << "Sentence is palindrome.";
    else
        cout << "Sentence is not palindrome.";
  
    return 0;
}