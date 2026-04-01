class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& numbers) {
        set<vector<int>> s;
        int n = numbers.size();
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1;k<n;k++){
                    if(numbers[i]+numbers[j]+numbers[k] == 0){
                        vector<int> triplet = {numbers[i], numbers[j], numbers[k]};
                        sort(triplet.begin(), triplet.end());
                        s.insert(triplet);
                    }
                }
            }
        }
        vector<vector<int>> myVector(s.begin(), s.end());

        return myVector;
    }
};
