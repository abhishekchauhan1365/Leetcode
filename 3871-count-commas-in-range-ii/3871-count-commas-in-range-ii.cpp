class Solution {
public:
    long long countCommas(long long n){
        long long count=0;
        long long b=n;
        int a=0;
        while(n>=0){
        int y=n%10;
        n/=10;
        count++;
        }

        if(count<3){
            a=0;
        }
        if(count==4){
            b=b-1000;
            a=b;
        }
        if(count==5){
            b-b-10000;
            a=b;
        }

        return a;
    }
};