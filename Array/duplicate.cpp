#include<iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++ )
        {
            if(arr[i] == arr[j])
            {
                int min = arr[i];
                return min;
                //break;
            }
        }
    }
    return false;
}

int main(void)
{
     int arr[]={1,2,3,4,1};
    int n = *(&arr+1)-arr;
    // if (duplicate(arr,n))
        cout << (duplicate(arr,n));
        return 0;
    //else
       // printf("No");
    
}