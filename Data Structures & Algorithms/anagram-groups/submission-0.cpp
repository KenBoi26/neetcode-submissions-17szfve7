class Solution {
public:

    bool isAnagram(string first, string second){
        map<char,int> mp1, mp2;
        for(auto i:first){
            mp1[i]++;
        }
        for(auto i:second){
            mp2[i]++;
        }

        return mp1==mp2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        while(strs.size()){
            vector<string> temp;
            temp.push_back(strs[0]);
            strs.erase(strs.begin());
            int j=0;
            while(j<strs.size()){

                if(isAnagram(temp[0],strs[j])){
                    temp.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                }else{
                    j++;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
