class Solution {
public:
    bool isPalindrome(int x) {
         long long int original=x;
        long long int reverse=0;
        while (x>0){
           reverse= (reverse*10) + (x % 10);
           x=x/10;
        }
        if (reverse==original){
            return true;
        }
        else{
            return false;
        }
    }
};