class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=nums.size();
        if(x==0) return 0;



        int i=1;
        for(int j=1;j<x;j++){
            if(nums[j]!=nums[i-1]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};