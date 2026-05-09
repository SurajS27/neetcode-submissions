class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        int l = 0, r = heights.size() - 1;
        while(l<r){
            int w = r-l;
            int curr_h = min(heights[l], heights[r]);
            maxi = max(maxi , w * curr_h);
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return maxi;
    }
};
