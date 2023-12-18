int maxSubstring(string S)
    {
        // Your code goes here
        int sum=0;
        int ans=0;
        for(int i=0; i<S.size(); i++){
            if(S[i]=='0'){
                sum++;
            }
            else{
                sum--;
            }
            if(sum<0) sum=0;
            ans=max(ans,sum);
        }
        return ans==0 ? -1 : ans;
    }
