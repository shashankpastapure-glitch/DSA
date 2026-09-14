class Solution {
public:
    int totalMoney(int n) {
        int current=0;
        int total=0;
        for(int i=0;i<n;i++){
            if(i%7==0 && i!=0){
                current=current-5;
            }
            else{
                current++;
            }
            total+=current;
        }
        return total;
    }
};