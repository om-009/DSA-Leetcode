class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for(string operation : operations){
            if(operation == "+"){
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int result = op1 + op2;

                st.push(op1);
                st.push(op2);
                st.push(result);
            }
            else if(operation == "C"){
                st.pop();
            }
            else if(operation == "D"){
                int op = st.top();
                int result = op * 2;
                st.push(result);
            }
            else {
                st.push(stoi(operation));
            }
        }
        
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        
        return sum;
    }
};