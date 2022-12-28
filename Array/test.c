#include<stdio.h>

int main(void)
{
    int arr[]= {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    //int New[50] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;

}