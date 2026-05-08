class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for (int ele : st){
            if(st.find(ele - 1) == st.end()){
                int currele = ele;
                int currstreak = 1;
            while(st.find(currele + 1) != st.end()){
                currele += 1;
                currstreak += 1;
            }
            longest = max(currstreak, longest);
            }
        }
        return longest;
    }
};
