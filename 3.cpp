class Solution {
public:
    string getHint(string secret, string guess) {
        
        int count=0;
        int n=secret.size();

        string a="";
        string b="";

        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                count++;
            }
            else{
                a.push_back(secret[i]);
                b.push_back(guess[i]);
            }
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
         

        n=a.size();

        int i=0;
        int j=0;

        int count2=0;

        while(i<n && j<n){

            if((a[i]-'0')==(b[j]-'0') ){
                i++;
                j++;
                count2++;
            }
            else if((a[i]-'0')<(b[j]-'0')){
               i++;
            }
            else{
                j++;
            }

        }

       
        string aa=to_string(count2);
        string bb=to_string(count);

        string ans="";
        ans=ans+bb;
        ans.push_back('A');
        ans=ans+aa;
        ans.push_back('B');
        return ans;

    }
};