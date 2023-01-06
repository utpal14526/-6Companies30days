class Solution {
public:
    int evalRPN(vector<string>& s) {
         int n=s.size();
         stack<long long int>st;
         for(int i=0;i<n;i++){
              if(s[i]=="/" || s[i]=="*" || s[i]=="-" || s[i]=="+"){
                  long long int a=st.top();
                  st.pop();
                  long long int b=st.top();
                  st.pop();
                  
                  if(s[i]=="/")st.push(b/a);
                  if(s[i]=="+")st.push(b+a);
                  if(s[i]=="-")st.push(b-a);
                  if(s[i]=="*")st.push(a*b);   

              }

              else{
                  long long int a=stoi(s[i]);
                  st.push(a);
              }
         }

         return st.top();
    }
};