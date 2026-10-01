class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }

            else {
                if(st.size()==0){
                    return 0;
                }
                if ((st.top() == '(' && c == ')') ||
                    (st.top() == '{' && c == '}') ||
                    (st.top() == '[' && c == ']')) {
                    st.pop();
                }
                else{
                    return false;
                }
                
            }
        }
        return st.size() == 0 ? 1 : 0;
    }
};