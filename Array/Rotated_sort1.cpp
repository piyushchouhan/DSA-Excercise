//Find the Minimum element in a Sorted and Rotated Array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Findmin(int arr[], int n)
{
    int min_ele = arr[0];
    for (int i=0; i<n ; i++)
    {
        if(arr[i]<min_ele)
        {
            min_ele = arr[i];
        }
    }
    return min_ele;
}

int main()
{
    int arr[] =  { 5, 6, 1, 2, 3, 4 };
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << "Minimum element in this array is "<< Findmin(arr,n);
}