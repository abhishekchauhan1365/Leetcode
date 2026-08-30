class Solution {
public:
    int hIndex(vector<int>& citations) {
        int x=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=0;i<x;i++){
            if(citations[i]>=x-i){
                return x-i;
            }
        }
        return 0;
    }
};