class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty())return false;
                else if(c==')' && st.top() =='(')st.pop();
                else if(c=='}' && st.top() =='{')st.pop();
                else if(c==']' && st.top() =='[')st.pop();
                else st.push(c);
            }
        }   
        return st.empty();
     }
};