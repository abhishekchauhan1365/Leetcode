class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int x=nums.size();
        int l=0;
        int r=x-1;
        string a;
        long long sum=0;
    
        while(l<=r){
            if(l==r){
                sum=sum+nums[l];
            }

            else{
                string a=to_string(nums[l])+to_string(nums[r]);
                sum=sum+stoll(a);
            }

            l++;
            r--;

        }

        return sum;
    }
};