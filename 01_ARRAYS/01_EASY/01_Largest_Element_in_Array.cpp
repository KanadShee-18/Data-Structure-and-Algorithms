// Largest element in an array:

#include <bits/stdc++.h>
using namespace std;

// First Approach: First sort thhe array then the last element will be the largest element O(NlogN) for sorting
int largest(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n - 1];
}

// Second Approach: TC: O(N) for one pass
// Make the largest element as largest. Then traverse the whole array and if any one is greater than the largest, then replace the largest with the element.
int largestElement(vector<int> &nums)
{
    int n = nums.size();
    int largest = nums[0];
    for (auto it : nums)
    {
        if (it > largest)
        {
            largest = it;
        }
    }
    return largest;
}

int main()
{
    vector<int> nums = {2, 4, 1, 5, 56, 76};

    cout << "The largest element is: " << largestElement(nums) << endl;

    return 0;
}