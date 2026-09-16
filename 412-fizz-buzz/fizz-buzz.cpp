class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fuck;
        for(int i=1;i<=n;i++){
            if (i%3==0 && i%5==0){
                fuck.push_back("FizzBuzz");
            }
            else if (i%3==0){
                fuck.push_back("Fizz");
            }
            else if (i%5==0){
                fuck.push_back("Buzz");
            }
            else {
                fuck.push_back(to_string(i));
            }
        }
        return fuck;
    }
};