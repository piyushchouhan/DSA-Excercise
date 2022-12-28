#include<stdio.h>

const int INT_MIN = -1e9;
int maximumSubarraySum(int arr[], int n) 
{
    int maxSum = INT_MIN;
    for (int i = 0; i< n; i++)
    {
        int currSum = 0;
        for(int j = i; j<n; j++ )
        {
              currSum += arr[j];
              if(currSum>maxSum)
              {
                    maxSum = currSum;
              }
        }

    }
    return maxSum;
}

int main() {
   // Your code goes here
   int a[] = {-2,1,-3,4,-1,2,1,-5,4};
   printf("%d", maximumSubarraySum(a, 9));
   return 0;
}