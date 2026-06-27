class Solution {
public:
    bool isPalindrome(int x) {
        int r,m;
        long long n=0;
        m=x;
        while(x>0){
         r=x%10;
         n=n*10+r;
         x=x/10;
        }
         if(m==n){
            return true;
         }
         else{
            return false;
         }
    }
};