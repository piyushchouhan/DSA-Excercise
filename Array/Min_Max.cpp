#include<iostream>
using namespace std;

int min(int arr[], int n2)
{
    int min = arr[0];
   for ( int i = 0; i < n2; i++)
   {
        if(arr[i]<min)
            {
                min = arr[i];
            }
    }
    return min;
}

   


int max(int arr[], int n2)
{
     int max = arr[0];
    for ( int i = 0; i < n2; i++)
   {
        if(arr[i] > max)
            {
                max = arr[i];
            }
    }
    return max;
}


int main(void)
{
    int arr[]={2,4,7,2,8,1,2,7,0,6};
    int size = *(&arr+1)-arr;
    int Min = min(arr,size);
    int Max = max(arr,size);
     cout <<"Minimum value in this arry is: "<< Min<< '\n';
     cout <<"Maximum value in this array is: "<< Max;

}

