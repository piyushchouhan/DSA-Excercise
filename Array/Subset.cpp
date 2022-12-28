#include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(int arr[], int n)
{
    int count = pow(2,n);

    for (int i = 0; i < count; i++)
    { 
        // int array;
        // cout << i <<":";
        for (int j = 0; j < n; j++)
        {
           
            if (( i & (1<< j)) != 0)
                cout << arr[j]<<" " ;
        }
        cout <<"\n";
    }
}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    

    int arr[n];
    cout << "Enter the element in the set\n";
    for ( int i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }

    allPossibleSubset(arr, n);
    return 0;
}