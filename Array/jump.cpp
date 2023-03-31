#include<iostream>
#include <algorithm>
using namespace std;

int jump(int nums[], int n){
    int i;
    int ans = 0, last = 0, reach = 0;
    for(i=0; i < n-1; i++){
        reach = max(reach, nums[i] + i);
        if(reach >= n-1){
            ans++;
            break;
        }
        if(i == last){
            last = reach;
            ans++;
        }
        return ans;
    }

}

int main()
{
    int nums[] = {2,3,1,1,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << jump(nums, n)<< endl;
    return 0;

}