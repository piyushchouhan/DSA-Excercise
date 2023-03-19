#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rmDuplicates(int nums[], int n)
{
    int current = 0;
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[position++] = nums[i];
            current++;
        }
        else
        {
            continue;
        }
    }

    return position;
    return current;
}

// driver code
int main()
{
    int nums[] = {1, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << rmDuplicates(nums, n) << endl;
    return 0;
}