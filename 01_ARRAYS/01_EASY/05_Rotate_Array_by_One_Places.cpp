// Rotate array By 1 places:

#include <bits/stdc++.h>
using namespace std;

// Simple approach: Store the element in a temp variable. The move the others and then replace the last position with the temp value
// TC: O(n) & SC: O(1)
void rotateArrByOnePlace(vector<int> &nums)
{
    int n = nums.size();

    int temp = nums[0];
    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
    cout << "After rotating the array by 1 place the array will be: ";
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotateArrByOnePlace(nums);
    return 0;
}