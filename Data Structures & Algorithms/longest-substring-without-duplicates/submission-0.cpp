class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxi = 0;
        vector<int> li(128,-1);
        for (int r = 0; r < s.length(); ++r){
            char curr = s[r];
            if(li[curr] >= l){
                l = li[curr] + 1;
            }
            li[curr] = r;
            maxi = max(maxi , r-l+1);
        }
        return maxi;
    }
};
