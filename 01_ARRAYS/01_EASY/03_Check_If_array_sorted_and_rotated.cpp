// Check if array is sorted and also check sorted and rotated:

#include <bits/stdc++.h>
using namespace std;

// Just sorted check:
// TC: O(N) for single pass

bool isSorted(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] >= nums[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

// Check if sorted and rotated: TC: O(N) for one pass
bool isSortedAndRotated(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
        if (count > 1)
            return false;
    }
    return true;
}

int main()
{
    vector<int> nums = {4, 5, 6, 1, 2, 89};
    if (isSortedAndRotated(nums))
    {
        cout << "The array is sorted and rotated.";
    }
    else
    {
        cout << "The array is not sorted and rotated.";
    }
    return 0;
}