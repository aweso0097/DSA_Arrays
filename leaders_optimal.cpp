class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int max = INT_MIN;
      vector <int> result;
      int n = nums.size();
      for(int i =n-1;i>=0;i--) {
        if(nums[i] > max) {
            max = nums[i];
            result.push_back(nums[i]);
        }
      }
      reverse(result.begin(),result.end());
      return result;
    }
};
