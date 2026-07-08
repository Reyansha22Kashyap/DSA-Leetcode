class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low=0,high=0,k,res=0;
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            k=high-low+1;
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                } 
                low++;
                k=high-low+1;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};
