class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        //the number of times the array is rotated is equal to the index of the smallest element in the array
        int low = 0;
        int high = nums.size()-1;
        while(low < high) {
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[high]) {
                low = mid+1;
            }
            else {
                high = mid;
            }
        }
        return low;
    }
};
