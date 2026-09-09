class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;
        long long place=1000;
        while(n>=place){
            count+=(n-place+1);
            place*=1000;
        }
        return count;
    }
};