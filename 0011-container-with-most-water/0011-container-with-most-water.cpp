class Solution {
public:
    int maxArea(vector<int>& height) {
        

        int x=height.size();
        int a=0;
        int b=x-1;
        int ans=0;
        while(a<b){
            int water=b-a;
            int water1=water* min(height[a],height[b]);
            ans=max(ans,water1);
            if(height[a]<height[b]){
                a++;
            }else{
                b--;
            }
        }
        return ans;
    }
};