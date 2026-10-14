// UpperBound Smallest index Such that arr[ind]>x


int upperBound(vector<int> arr, int n, int x){
    int low = 0, high = n - 1;
    int ans = n;
    while(low<=high){
        int mid = (low + high) / 2;
        // maybe an answer
        if(arr[mid] > x){ // In LowerBound we used >= but here we are using > because we want the first index where arr[ind]>x
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

// cpp standard library
// upper_bound(arr.begin(), arr.end(), n) - Returns an iterator pointing to the first element
