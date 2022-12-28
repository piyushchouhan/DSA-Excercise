//Find if there is a pair with a given sum in the rotated sorted Array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Find_Pair(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++ )
        {
            if(arr[i]+arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = { 11, 15, 6, 8, 9, 10 };
    int X = 16;
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    if (Find_Pair(arr, N, X))
        cout << "true";
    else
        cout << "false";
  
    return 0;
}