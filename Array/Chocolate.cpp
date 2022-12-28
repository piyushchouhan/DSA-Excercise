#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int find_Min_diff(int arr[], int n, int m)
{
    if ( m == 0 || n == 0)
    {
        return 0;
    }
    // sort the whole array
    sort(arr, arr + n);

    int Min_diff = INT_MAX;
    for ( int i = 0; i+m-1 < n; i++)
    {
        int diff = arr[i+m-1]- arr[i];
        if( diff<Min_diff)
        {
            Min_diff = diff;
        }
    }
    return Min_diff;
}

int main(void)
{

    int array_size;
    cout<<"What is the array size: ";
    cin >> array_size;
    cout << "\n";
    int arr[array_size];
    for( int i = 0 ; i< array_size; i++)
    {
        cout << "Enter the value for position " << i+1 << " : ";
        cin >> arr[i];
    }

    int Students;
    cout << "What is the no. of students : ";
    cin >> Students;
    cout << "\n";
    cout << "Minimum difference is "<< find_Min_diff(arr, array_size, Students) ;
    return 0;
}