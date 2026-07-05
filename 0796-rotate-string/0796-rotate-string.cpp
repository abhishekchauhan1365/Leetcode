class Solution {
public:
    bool rotateString(string s, string goal) {
        int x=s.length();
        if(s.length()!=goal.length()){
            return false;
        }

        if(s==goal) return true;

        for(int i=0;i<x;i++){
            char ch=s[0];

            s.erase(s.begin());
            s.push_back(ch);

            if(s==goal){
                return true;
            }
        }
        return false;
    }
};