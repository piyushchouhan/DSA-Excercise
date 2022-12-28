//Search in Rotated Sorted Array
#include<iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        return arr[i];
    }
    return false;
}

int main()
{
    int arr[] = {1,8,5,9,6,3,7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int key = 8; 
    if(search(arr,n,key))
    {
        cout << search(arr,n, key);
    }
    else
    {
        cout << "Not found";
    }

}