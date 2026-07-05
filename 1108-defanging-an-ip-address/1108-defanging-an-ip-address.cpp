class Solution {
public:
    string defangIPaddr(string address) {
        int x=address.size();
        string a;
        for(int i=0;i<x;i++){
            char ch=address[i];
            if(ch=='.'){
                a=a+"[.]";
            }else{
                a=a+ch;
            }
        }
        return a;
    }
};