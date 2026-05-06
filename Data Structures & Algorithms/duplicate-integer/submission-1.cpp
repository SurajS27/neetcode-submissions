class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        bool res = false;
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                res = true;
                break;
            }
        }
        return res;
    }
};