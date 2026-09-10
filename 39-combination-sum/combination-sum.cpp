class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& candidates, int index, int remain, vector<int>& current){
        if (remain == 0) {
            ans.push_back(current);
            return;
        }
        if (remain < 0) {
            return;
        }
        for (int i=index;i<candidates.size();i++){
            current.push_back(candidates[i]);
            backtrack(candidates, i, remain - candidates[i], current);           
            current.pop_back();
        }
        return ;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current; 
        backtrack(candidates, 0, target, current); 
        return ans; 
    }
};