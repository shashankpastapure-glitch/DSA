class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for (char c : s) {
            if (isalnum(c)) {
            ans += tolower(c);
            }
        }
        int left=0;
        int right=ans.size()-1;
        while(right>=left){
            if(ans[right]==ans[left]){
               right--;
               left++;
            }
            else{
                return false;
            }   
        }
        return true;
    }
};