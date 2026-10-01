class Solution {
    public boolean isValid(String s) {
       
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {

            char c = s.charAt(i);

            // Opening bracket
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }

            // Closing bracket
            else {

                // No opening bracket available
                if (st.empty()) {
                    return false;
                }

                // Matching bracket
                if ((st.peek() == '(' && c == ')') ||
                    (st.peek() == '{' && c == '}') ||
                    (st.peek() == '[' && c == ']')) {

                    st.pop();
                }

                // Mismatched bracket
                else {
                    return false;
                }
            }
        }

        return st.empty();


        
    }
}