#include<iostream>
using namespace std;



int Reverse_array(int arr[], int size)
{
    for(int i = 0; i < (size/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    return 0;
}

void printig_array(int arr[], int size)
{
    for( int i = 0; i< size; i++)
    {
        cout << " " << arr[i];
     }
}

int main(void)
{
    int array_size;
    cout << "what is the the size of array: ";
    cin >> array_size;
    int  arr[array_size];
    for (int i = 0; i < array_size; i++)
    {
         cout << "Enter Value for Position " << i+1 << " : ";
         cin >> arr[i];
    }
   
    //int arr[]={2,4,7,2,8,1,2,7,0,6};
     int size = *(&arr+1)-arr;
     Reverse_array(arr, size);
     printig_array(arr, size);


}