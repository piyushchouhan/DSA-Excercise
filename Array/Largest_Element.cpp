// Kth Largest Element in an Array
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int Kth_Largest(int arr[], int n,int k)
{
    sort(arr, arr+n);
    return arr[n-k];
}

int main(void)
{
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k = 2;
    cout << "Kth_largest element is : " << Kth_Largest(arr, n, k) ;
}
  