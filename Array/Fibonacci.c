#include<stdio.h>
#include<math.h>

int t = 1;
int n = 10;
int arr[10];
int main(void)
{
    arr[0] = 0;
    for(int i = 1; i<n; i++)
    {
        int m = arr[i-2] + t ;
        arr[i] = m;
        t = m;
    }

    for( int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
     }  
     return 0;

}