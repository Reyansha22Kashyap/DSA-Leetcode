class Solution{
public:
    int find(int f[]){
    int maxi=INT_MIN;
    for(int i=0;i<256;i++){
        maxi=max(maxi,f[i]);
    }
    return maxi;
    }

    int characterReplacement(string s, int k) {
        int low=0,high=0,res=0;
        int f[256]={0};
        
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            int len=high-low+1;
            int maxcount=find(f);
            int diff=len-maxcount;
            while(diff>k){
                f[s[low]]--;
                low++;
                len=high-low+1;
                maxcount=find(f);
                diff=len-maxcount;
            } 
             len=high-low+1;
            res= max(res,len);
        } 
        return res;
    }
};
