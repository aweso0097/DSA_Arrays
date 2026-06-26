class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low=0;
        int high = nums.size()-1;
        int ans;
        while(low <= high) {
            int mid = (low+high)/2;
            if(x >= nums[mid]) {
                ans = mid+1;
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return ans;
    }
};
