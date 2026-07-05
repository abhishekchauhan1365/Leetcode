class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        int x=sentence.size();
        for(int i=0;i<x;i++){
            mp[sentence[i]]++;
        }

        if(mp.size()==26){
            return true;
        }
        return false;
    }
};