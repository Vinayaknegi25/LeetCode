BETA APPROACH
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0;
        int minelem=prices[0];
        for(int i=1;i<prices.size();i++){
           minelem=min(prices[i],minelem);
            profit=max(profit,(prices[i]-minelem));
        }
        return profit;
    }
};


SIGMA APPROACH XD 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int ValShare=INT_MAX;
        int result=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<ValShare)
            {
                ValShare=prices[i];
            }
            profit=prices[i] - ValShare;
                if(result < profit)
                result = profit;
        }
        return result;
    }
};
