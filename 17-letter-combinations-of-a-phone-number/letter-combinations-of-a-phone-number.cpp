class Solution {
public:
    string value(char x){
        if (x=='2') return "abc";
        if (x=='3') return "def";
        if (x=='4') return "ghi";
        if (x=='5') return "jkl";
        if (x=='6') return "mno";
        if (x=='7') return "pqrs";
        if (x=='8') return "tuv";
        if (x=='9') return "wxyz";
        return "";
    }
    vector<string> letterCombinations(string digits) {
        string first = value(digits[0]);
        vector<string> result;
        result={};
        if (digits.length() == 0)
            return result;
        for (int i = 0; i < first.length(); i++)
        {
            result.push_back(string(1, first[i]));
        }
        for (int i=1;i<digits.length();i++){
            string letters = value(digits[i]);
            vector<string> newresult;
            for (int j=0;j<result.size();j++){
                for (int k=0;k<letters.size();k++){
                    newresult.push_back(result[j]+letters[k]);
                }
            }
            result=newresult;
        }
    return result;
    }
};