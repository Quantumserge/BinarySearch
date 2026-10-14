// PSEUDOCODE
// function(arr,target,n)
// {
//     low = 0, high = n - 1;
//     ans = n;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(arr[mid] >= x){
//             ans = mid;
//             high = mid - 1;
//         }
//         else{
//             low = mid + 1;
//         }
//     }
//     return ans;
// }


// IMPLEMENTATION OF LOWER BOUND FUNCTION
int lowerBound(vector<int> arr, int n, int x){
    int low = 0, high = n - 1;
    int ans = n;
    while(low<=high){
        int mid = (low + high) / 2;
        // maybe an answer
        if(arr[mid] >= x){
            ans = mid;
            // look for a better answer in the left half
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

// Complexity Analysis
// Time Complexity: O(log n) - The search space is halved in each iteration of

// General functiions in cpp standard library
lower_bound(arr.begin(), arr.end(), n) - Returns an iterator pointing to the first element in the range [first, last) which does not compare less than val. If all elements in the range compare less than val, the function returns last. The range shall be partitioned with respect to the expression !comp(element, val), where comp is a comparison function that returns true if the first argument is less than the second. The function uses binary search algorithm and has logarithmic complexity.
