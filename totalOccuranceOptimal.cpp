class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        //Since the array is sorted Binary search is the most optimal
        int low = 0;
        int high = arr.size()-1;
        int foccur = -1;
        while(low <=high) {
            int mid = low+(high-low)/2;
            if(arr[mid] == target) {
                foccur = mid;
                high = (mid-1);
            }
            else if(arr[mid] > target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        int left = 0;
        int right = arr.size()-1;
        int loccur = -1;
        while (left <= right) {
            int midd = left + (right-left)/2;
            if(arr[midd] == target) {
                loccur = midd;
                left = midd+1;
            }
            else if(arr[midd] > target) {
                right = midd-1;
            }
            else {
                left = midd+1;
            }
        }
        int count = loccur-foccur+1;
        return count;
    }
};
