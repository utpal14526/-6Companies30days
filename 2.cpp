class Solution {
public:
  
   vector<int>vec;
   
   void solve(vector<vector<int>>&ans,vector<int>helper,int n,int k,int size){
       //if k=0 or idx<0 && k==0
     
       if(size<0){
           if(n==0 && k==0){
               ans.push_back(helper);
               return;
           }
          
           else{
             return;
           }
       } 
     
       if(n<0){
           return;
       }
     
     
       //if take 
       helper.push_back(vec[size]);
       solve(ans,helper,n-vec[size],k-1,size-1);
       helper.pop_back();
       
       solve(ans,helper,n,k,size-1);
     
   }
   

    vector<vector<int>> combinationSum3(int k, int n) {
        
       for(int i=1;i<=9;i++)vec.push_back(i);
        vector<vector<int>>ans;
        vector<int>helper;
        solve(ans,helper,n,k,8);
        return ans;  
    }
};