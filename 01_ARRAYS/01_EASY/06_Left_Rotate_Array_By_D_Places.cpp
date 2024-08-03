// Left rotate array by K places:

#include <bits/stdc++.h>
using namespace std;

// Brute Appproach:
//  Take a temp array. Put the k elements in the array. shift rest of the elements. And put back elements from the temp to array.
// TC: O(n+k)

void leftRotateByK(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }

    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];
    }

    for (int i = n - k; i < n; i++)
    {
        nums[i] = temp[i - (n - k)];
    }

    cout << "After left rotating the array by " << k << " places the array will be: ";
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

// Optimal Approach: Just By observation

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    leftRotateByK(nums, k);
    return 0;
}