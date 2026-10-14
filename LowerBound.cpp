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