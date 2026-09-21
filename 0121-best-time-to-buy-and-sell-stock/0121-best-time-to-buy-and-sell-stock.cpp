class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxpr=0;
        for(int i=0;i<prices.size();i++){
            int ans=prices[i]-min;
            if(prices[i]<min)
                min=prices[i];
            if(ans>maxpr)
                maxpr=ans;
        
        }
        return maxpr;
    }
};