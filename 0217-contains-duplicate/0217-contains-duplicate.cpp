class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int x=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<x-1;i++){
            if(nums[i]==nums[i+1]){
                return true; 
            }

        }

        return false;
    }
};