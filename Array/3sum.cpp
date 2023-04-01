#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closestSum = INT_MAX;
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int currSum = nums[i] + nums[left] + nums[right];
            if (currSum == target) {
                return target;
            } else if (currSum < target) {
                left++;
            } else {
                right--;
            }
            if (abs(target - currSum) < abs(target - closestSum)) {
                closestSum = currSum;
            }
        }
    }
    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int closestSum = threeSumClosest(nums, target);
    cout << "Closest sum to target " << target << " is " << closestSum << endl;
    return 0;
}
