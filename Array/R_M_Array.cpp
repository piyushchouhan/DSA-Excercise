//Repeat and Missing Number Array
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Repeat(long arr[], int n)
{
     for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++ )
        {
            if(arr[i] == arr[j])
            {
                int Repeat = arr[i];
                return Repeat;
        }
    }
  }
  return 0;
}

int Missing(long arr[], int n)
{
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i+1]-arr[i]  == 2)
        {
            return arr[i]+1;
        }
    }

     for(int i = 0; i < n; i++)
    {
        if(arr[i+1]-arr[i]  != 2)
        {
            return arr[0]-1;        }
    }

    return 0;
}

int main(void)
{
     //long arr[]={1,2,3,4,6,1};
     long arr[] = { 7, 3, 4, 5, 5, 6, 2 };
     int n = *(&arr+1)-arr;
     cout << "Repeating no. is: "<< Repeat(arr, n)<<"\n" ;
     cout << "Missing no. is: "<< Missing(arr, n) ;

}