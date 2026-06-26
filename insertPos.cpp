class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int low =0;
       int high = nums.size()-1;
       int insertPos;
       while(low <= high) {
        int mid = (low+high)/2;
        if(target == nums[mid]) {
            return mid;
        }
        else if(target < nums[mid]) {
          high = mid-1;
          insertPos = mid;
        }
        else {
           low = mid+1;
        }
       }
       return insertPos;
    }
