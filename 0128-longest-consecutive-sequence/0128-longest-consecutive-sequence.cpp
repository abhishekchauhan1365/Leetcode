class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int x = nums.size();
        int count = 0;
        int maxcount = 0;

        for(int i = 0; i < x - 1; i++) {

            // Ignore duplicate
            if(nums[i + 1] == nums[i]) {
                continue;
            }

            if(nums[i + 1] - nums[i] == 1) {
                count++;
            }
            else {
                count = 0;
            }

            maxcount = max(maxcount, count);
        }

        return maxcount + 1;
    }
};