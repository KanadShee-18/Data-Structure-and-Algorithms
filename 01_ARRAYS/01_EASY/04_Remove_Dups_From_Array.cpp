// Remove duplicates from a sorted array:

#include <bits/stdc++.h>
using namespace std;

// Brute: (using set as it store only the unique elements)
// TC: O(NlogN) + O(N)
int removeDups(vector<int> &nums)
{
    int n = nums.size();

    set<int> st;
    for (auto it : nums)
    {
        st.insert(it);
    }

    int index = 0;
    for (auto it : st)
    {
        nums[index] = it;
        index++;
    }
    return index;
}

// 2 pointer Approach:
// TC: O(n) and SC: O(1)
int removeDupsOpt(vector<int> &nums)
{
    int n = nums.size();
    int index = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[index])
        {
            nums[index + 1] = nums[j];
            index++;
        }
    }
    return index + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 6, 6, 7, 7, 7, 7};
    cout << "The unique elements in the array is: " << removeDupsOpt(nums) << endl;
    return 0;
}