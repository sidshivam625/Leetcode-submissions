class Solution {
public:
    bool isValid(string s) {

        map<char, char> mapped = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> st;

        for(char c : s) {

            if(c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {

                if(st.empty())
                    return false;

                if(st.top() != mapped[c])
                    return false;

                st.pop();
            }
        }

        return st.empty();
    }
};