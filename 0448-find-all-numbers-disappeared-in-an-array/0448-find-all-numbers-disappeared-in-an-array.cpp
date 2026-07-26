class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int x=nums.size();
        vector<bool> visited (x+1,false);
        vector<int> ans;

        for(int i=0;i<x;i++){
            int val=nums[i];
            visited[val]=true;
        }

        for(int i=1;i<=x;i++){
            if(visited[i]==false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};