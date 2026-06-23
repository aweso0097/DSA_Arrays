class Solution {
public:
    int stockBuySell(vector<int>& arr) {
        int min_price = INT_MAX;
        int max_profit = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            
            min_price = min(min_price, arr[i]);
    
            max_profit = max(max_profit, arr[i] - min_price);
        }
        
        return max_profit;
    }
};
