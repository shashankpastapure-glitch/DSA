class Solution {
public:
    int secondHighest(string s) {
        int fl=-1;
        int sl=-1;
        for (int i=0;i<s.length();i++){
            if (isdigit(s[i])) {
                int num = s[i] - '0';
                if (num>fl){
                    sl=fl;
                    fl=num;
                }
                else if (num<fl && num>sl){
                    sl=num;
                } 
            }
        }
        return sl;
    }
};