#include<iostream>
#include <algorithm>
using namespace std;

int jump(int nums[], int n){
        int i;
        int ans = 0, last = 0, farthest=0;
        for(i=0; i < n-1; i++)
        {
            farthest = max(farthest, nums[i]+i);
            if (farthest >= n - 1) {
                ++ans;
            break;
      }
            if(i == last)
            {
                last = farthest;
                ans++;
            }
        }
        return ans;

}

int main()
{
    int nums[] = {2,3,1,1,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << jump(nums, n)<< endl;
    return 0;

}