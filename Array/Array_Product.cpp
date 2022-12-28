// Product of Array Except Self

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Array_Product(int arr[], int n)
{
   // int counter = 0;
    
    for( int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++ )
        {
        
            if(i != j)
            {
                 product = product * arr[j];  
            }
        }
        cout << product<<" " ;
       
    }
         return 0;
}


int main()
{
    int arr[]={1,2,3,4};
    int size = *(&arr+1)-arr;
    cout << "Product of Array Except Self: \n";
    Array_Product(arr, size);
   
    return 0;

}
