// Moving zeroes to the end of array:

#include <bits/stdc++.h>
using namespace std;

// Brute:
// -> First move the non zero elements from the main array to a temp array.
// -> Then modify the main array from the temp array.
// -> Then fill rest of the elements with 0.

vector<int> moveZeroToEnd(vector<int> &nums)
{
    vector<int> temp;
    for (auto it : nums)
    {
        if (it != 0)
        {
            temp.push_back(it);
        }
    }
    int nonZeroElements = temp.size();
    for (int i = 0; i < nonZeroElements; i++)
    {
        nums[i] = temp[i];
    }
    for (int i = nonZeroElements; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 0, 1, 2, 0, 1, 0, 5, 4, 5, 6, 9, 0, 0, 7, 8, 0, 9, 4, 6};
    vector<int> modifiedArray = moveZeroToEnd(nums);
    for (auto it : modifiedArray)
    {
        cout << it << " ";
    }
    return 0;
}