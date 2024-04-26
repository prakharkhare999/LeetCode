class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s=0;
        int e=arr.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==target){
                return mid;
            }
            if(arr[s]<=arr[mid]){
                if(arr[s]<=target && target <=arr[mid]){
                 e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(arr[mid]<=target && target<=arr[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            mid=(s+e)/2;
        }
        return -1;
    }
};


// BS
 class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};
