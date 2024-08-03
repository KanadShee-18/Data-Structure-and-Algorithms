// Left rotate array by K places:

#include <bits/stdc++.h>
using namespace std;

// Brute Appproach:
//  Take a temp array. Put the k elements in the array. shift rest of the elements. And put back elements from the temp to array.
// TC: O(n+k) SC: O(K)

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
// -> Reverse the first k elements
// -> Reverse the rest (n-k) elements
// -> Reverse the whole array.

// TC: O(2n) and SC: O(1)

void leftRotateOpt(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());

    cout << "After left rotating the array by " << k << " places the array will be: ";
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    leftRotateOpt(nums, k);
    return 0;
}