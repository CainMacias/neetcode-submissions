class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;

        int maxP = 0;

        int res = 0;

        while(r < prices.size()){
                if(prices[l] < prices[r]){
                    res = prices[r] - prices[l];
                }else{
                    l = r;
                    res = 0;
                }

                maxP = max(maxP, res);
                r++;

            }


            return maxP;
            
    }
};