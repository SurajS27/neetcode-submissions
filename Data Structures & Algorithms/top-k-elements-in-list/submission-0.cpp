class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int ele : nums){
            mp[ele]++;
        }
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        for (auto const& [val, freq]:mp){
            minHeap.push({freq,val});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        vector<int>res;
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;

    }
};
