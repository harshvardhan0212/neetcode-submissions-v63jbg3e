class Solution {
public:
    bool isValid(string s) {
        stack<int>st;

       // st.push(s[i]);
        for(int i=0;i<s.size();i++){
         char ch =s[i];

         if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
         }
         else{
            if(st.empty())
            return false;

            else if(s[i]==')'&& st.top()!='(') return false;
             else if(s[i]=='}'&& st.top()!='{') return false;
             else if(s[i]==']'&& st.top()!='[') return false;
             else{
                st.pop();
             }

         }

            
        }
        return st.empty();
    }
};
