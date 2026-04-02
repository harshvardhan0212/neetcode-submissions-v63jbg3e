class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer=0,ans=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]>prices[i]) {
                 ans= prices[j]-prices[i];
                  answer=max(ans,answer);
                }
            }
           
        }
        return answer;
    }
};
