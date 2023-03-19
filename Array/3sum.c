#include<stdio.h>
#include<math.h>

int find3numbers(int arr[], int arr_size, int sum)
{
    for(int i = 0; i < arr_size-2; i++)
    {
        for(int j = i+1; j < arr_size-1; j++)
        {
            for( int k = j+1; k < arr_size; k++)
            {
                if(arr[i]+arr[j]+arr[k] == sum)
                {
                    printf("%d, %d, %d \n",arr[i],arr[j],arr[k]);
                }
                else
                {
                    printf("[]");
                }
            }
        }
    }
}

int main()
{
    int arr[] = {1,5,9,6,3};
    int sum = 15;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    find3numbers(arr,arr_size,sum);
    return 0;
}
