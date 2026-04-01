class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for(auto i:tokens){
            if(i=="+"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();

                st.push(num1+num2);
            }else if(i=="-"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();

                st.push(num2-num1);
            }else if(i=="*"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();

                st.push(num1*num2);
            }else if(i=="/"){
                long long num2 = st.top();
                st.pop();
                long long num1 = st.top();
                st.pop();

                if(num1 == 0 || num2 == 0){
                    st.push(0LL);
                }else{
                    st.push(num1/num2);
                }
            }else{
                st.push(stoll(i));
            }
        }

        return st.top();
    }
};
