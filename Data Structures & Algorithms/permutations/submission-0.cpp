class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        if (nums.empty()) return {{}};

        vector<int> next = vector<int> (nums.begin()+1, nums.end());

        vector<vector<int>> ans = permute(next);

        for(auto &i:ans){
            for(int j=0; j<=i.size(); j++){
                vector<int> temp = i;
                temp.insert(temp.begin()+j, nums[0]);
                result.push_back(temp);
            }
        }

        return result;
    }
};
