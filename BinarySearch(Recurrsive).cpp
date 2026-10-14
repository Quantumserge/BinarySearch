// PSEUDOCODE
// function(arr,low,high,target){
//     if(low > high){
//         return -1; 
//         mid = (low+high)/2;

//     if(arr[mid] == target) return mid;
//     else if(target > arr[mid])  return function(arr, mid+1, high , target)
//     else return function(arr, low, mid-1, target)
//     }
// }


// IMPLEMENTATION OF RECURSIVE FUNCTION

int binarySearch(vector<int> &nums, int low, int high, int target){
    if(low > high) return -1; //target not found

    int mid = low + (high - low)/2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return binarySearch(nums,mid+1, high, target);
    else return binarySearch(nums, low, mid -1, target);
}

int search(vector<int> &nums, int target){
    return binarySearch(nums, 0, nums.size()-1, target);
}
