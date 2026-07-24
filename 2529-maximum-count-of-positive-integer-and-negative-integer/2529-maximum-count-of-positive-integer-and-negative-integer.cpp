class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int x=nums.size();
        int left=0;
        int right=x-1;


        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>0){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }

        int positivecount=x-left;

        left=0;
        right=x-1;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<0){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }

        int negativecount=right+1;
        return max(positivecount,negativecount);
    }
};