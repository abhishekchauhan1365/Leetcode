class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int x=nums.size();
        int sum=0;
        int a=-1;
        for(int i=0;i<x;i++){
            sum=sum+nums[i];
        }
        int sum1=0;
        for(int i=x-1;i>=0;i--){
            sum=sum-nums[i];
            if(sum==sum1){
                a=i;
            }
            sum1=sum1+nums[i];
            
        }
        return a;
    }
};