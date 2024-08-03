// Second Largest Element in an Array:

#include <bits/stdc++.h>
using namespace std;

// First Approach: TC: O(NlogN) + O(N) sorting and then search for second largest
// First sort the array. Then the last element will be the largest element. Then again traverse the array from arr[n-2] and find which element is not equal to largest then that will be the second largest element.

int secondLargest(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int largest = nums[n - 1];

    int sLargest = INT_MIN;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] != largest)
        {
            sLargest = nums[i];
            break;
        }
    }
    return sLargest;
}

// 2nd Approach: TC: O(N) for finding the largest and O(N) for second largest. So, total TC: O(2N)
// First set sLargset to INT_MIN or -1. Then find the largest. Then tarverse the array and find which is bigger than second largest and not equal to largest.
int sLargestBetter(vector<int> nums)
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
    int sndLargest = INT_MIN;
    for (auto it : nums)
    {
        if (it > sndLargest && it != largest)
        {
            sndLargest = it;
        }
    }
    return sndLargest;
}

// 3rd Approach: (One pass) TC: O(N)
int secondLargestOpt(vector<int> &nums)
{
    int n = nums.size();
    int largest = nums[0];
    int sLargest = INT_MIN;
    for (auto it : nums)
    {
        if (it > largest)
        {
            sLargest = largest;
            largest = it;
        }
        else if (it != largest && it > sLargest)
        {
            sLargest = it;
        }
    }
    return sLargest;
}

int main()
{
    vector<int> nums = {21, 21, 5, 25, 25, 25, 25, 2, 52, 555, 5, 5, 5855, 5855, 54};
    cout << "The second largest element in the array is: " << secondLargestOpt(nums) << endl;
    return 0;
}