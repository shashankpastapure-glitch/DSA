class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i])) cnt++;
            if(s[i]==' ' && cnt>0) break;
        }
        return cnt;
    }
};