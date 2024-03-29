#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n-2; i++) {
        if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
            int l = i+1, r = n-1, sum = 11 - nums[i];
            while (l < r) {
                if (nums[l] + nums[r] == sum) {
                    result.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l+1]) l++;
                    while (l < r && nums[r] == nums[r-1]) r--;
                    l++; r--;
                } else if (nums[l] + nums[r] < sum) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j != result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}
