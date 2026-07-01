class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
      int low =0;
      int high = nums.size()-1;
      while(low <= high) {
        int mid = low + (high -low)/2;
        if(nums[mid] == k) {
            return true;
        }
        //edge case if duplicates are present move the pointers 
        if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low++;
            high--;
            continue;
        }
        if(nums[low] <= nums[mid]) {
            if(nums[low] < k && nums[mid] >= k) {
              high = mid-1;  
            }
            else {
                low = mid+1;
            }
        }
        else {
            if(nums[mid] <=k && nums[high] > k ) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
      }
      return false;
    }
};
