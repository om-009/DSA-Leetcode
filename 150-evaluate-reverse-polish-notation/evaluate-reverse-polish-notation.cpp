class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const string& ch : tokens){
            if(ch == "+"){
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int result = op1 + op2;
                st.push(result);
            }

            else if(ch == "-"){
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int result = op1 - op2;
                st.push(result);
            }

            else if(ch == "*"){
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int result = op1 * op2;
                st.push(result);
            }

            else if(ch == "/"){
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int result = op1 / op2;
                st.push(result);
            }

            else {
                st.push(stoi(ch));
            }
        }
        
        return st.top();
    }
};