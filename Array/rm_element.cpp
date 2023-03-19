#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val = 2;
    int arr[]={1,2,3,2,4,1,2};
    int n = *(&arr+1)-arr;
    int count = 0;
    for( int i =0; i < n; i++)
    {
        if(arr[i] != val)
        {
            arr[count++] = arr[i];
        }
    }
    cout << count<< endl;

}