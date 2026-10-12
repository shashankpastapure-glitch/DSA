class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> ans(26,0);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
            ans[t[i]-'a']--;
        }
        for(int j=0;j<ans.size();j++){
            if(ans[j]!=0) return false;
        }
        return true;
    }
};