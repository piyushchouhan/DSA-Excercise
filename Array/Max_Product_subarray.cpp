//Maximum Product Subarray
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

const int y = -1e9;
int Max_Product_subarray(int arr[], int n)
{
    int max_Product = y;
    for (int i = 0; i < n; i++)
    {
        int curr_product = 1;
        for(int j = i; j<n; j++)
        {
            curr_product *= arr[j];
            if (curr_product>max_Product)
            {
                max_Product = curr_product;
            }
        }
    }
    return max_Product;
}

int main() {
   // Your code goes here
   int arr[] ={6, -3, -10, 0, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Maximum Sub array product is " << Max_Product_subarray(arr,n);
   return 0;
}
