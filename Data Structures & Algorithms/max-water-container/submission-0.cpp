class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = -1;
        int l = 0;
        int r = heights.size()-1;

        while(l<r){
            int current_area = (r-l) * min(heights[l], heights[r]);
            max_area = max(max_area, current_area);

            if(heights[l] > heights[r]){
                r--;
            }else{
                l++;
            }
        }

        return max_area;
    }
};
