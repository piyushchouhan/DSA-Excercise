//Remove all consecutive duplicates from the string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string S)
{
    int n = S.length();
    string str = "";

    if (n == 0)
        return str;
    // str[0] = "";
    for(int i = 0; i < n-1; i++)
        if(S[i] != S[i+1])
            str = str + S[i];
    return str;
}

int main()
{
    string S1 = "geeksforgeeks";
    cout << removeDuplicates(S1)<< endl;
   
    string S2 = "aaaabbbba";
    cout << removeDuplicates(S2)<< endl;
    
    return 0;
}