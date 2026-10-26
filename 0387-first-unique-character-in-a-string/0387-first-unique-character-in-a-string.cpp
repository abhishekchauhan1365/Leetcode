class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int a=-1;
        int x=s.length();
        for(int i=0;i<x;i++){
            char ch=s[i];
            mp[ch]++;
        }

        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};