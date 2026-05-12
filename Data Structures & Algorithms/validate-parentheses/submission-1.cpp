class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool res = true;
        for(char ch : s){
            if (ch == '{' || ch == '(' || ch == '[' ) st.push(ch);
            else {
                if (st.empty()) return false;
                if (ch == '}' && st.top()!= '{') {res = false; break;}
                else if (ch == ']' && st.top()!= '[') {res = false; break;}
                else if (ch == ')' && st.top()!= '(') {res = false; break;}
                else st.pop();
            }
        }
        if (!st.empty()) res = false;
        return res;
    }
};
