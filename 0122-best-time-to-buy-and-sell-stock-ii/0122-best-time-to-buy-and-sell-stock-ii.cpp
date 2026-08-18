class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=prices.size();
        int sum=0;
        for(int i=0;i<x-1;i++){
            if(prices[i+1]>prices[i]){
                sum=sum+prices[i+1]-prices[i];
            }
        }
        return sum;
    }
};