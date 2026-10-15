// PseudoCode
// function(arr, n)
// {
//     low = 0, high = n - 1, ans = INT_MAX;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] <= x)
//         {
//             mid = (low + high) / 2;

//             ans = min(ans, arr[low]);
//             low = mid + 1;
//         }
//         else
//         {
//             ans = min(ans, arr[mid]);
//             high = mid - 1;
//         }
//     }
//     return ans;
// }
 
int findMin(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] <= nums[high])
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
        else
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
    }
    return ans;
}


// Complexity Analysis
// Time Complexity: O(log n) - The search space is halved in each iteration of the while loop.
