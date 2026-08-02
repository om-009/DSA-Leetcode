class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(st.top() == ch){
                st.pop();
                continue;
            }
            else{
                st.push(ch);
                continue;
            }
        }
        
        string op;
        while(!st.empty()){
            op = op + st.top();
            st.pop();
        }
        string output;
        for (int i = op.length() - 1; i >= 0; i--) {
            output += op[i];
        }

        return output;
    }
};