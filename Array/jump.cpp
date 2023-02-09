#include<iostream>
using namespace std;

int jump(int arr[], int n){
    int j,i;
    int ans=1;
    for(i = 1; i < n; i++ )
    {
        j = arr[i];
        for(int k = i; k < j+i; k++)
        {
            if(arr[k] == arr[n-1]){
                ans++;
            }else{
                j=arr[j+i];
                ans++;
            }
        }
    }
    return ans;

}

int main()
{
    int arr[] = {2,3,1,1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << jump(arr, n)<< endl;
    return 0;

}