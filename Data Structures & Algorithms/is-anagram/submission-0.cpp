class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> sc;
        vector<char> tc;
        for(char ch : s){
            sc.push_back(ch);
        }
        for(char ch: t){
            tc.push_back(ch);
        }
        sort(sc.begin(),sc.end());
        sort(tc.begin(),tc.end());
        if(sc == tc) return true;
        else return false;
    }
};
