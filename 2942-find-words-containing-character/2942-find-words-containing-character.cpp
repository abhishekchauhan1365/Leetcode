class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char y) {
        vector<int> ans;
        int x=words.size();
        for(int i=0;i<x;i++){
            string a=words[i];
            for(int j=0;j<a.length();j++){
                char ch=a[j];
                if(ch==y){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};