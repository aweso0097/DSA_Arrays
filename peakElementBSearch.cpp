class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      //binary search--optimal approach
      int low = 0;
      int high = arr.size()-1;
      while(low < high) {
        int mid = low+(high-low)/2;
        if(arr[mid] < arr[mid+1]) { //peak is on right side
            low = mid+1;
        }
        else { //peak is mid or on the left side
            high = mid;
        }
    }
    return high;
}
};
