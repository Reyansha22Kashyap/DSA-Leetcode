class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();

        vector<int> have(256,0);
        vector<int> need(256,0);
        vector<int> res;
       if(n<m){
          return res;
       }
       for(int i=0;i<m;i++){
              need[p[i]]++;
       } 

       int low=0,high=0;
       for(high=0;high<n;high++){
           have[s[high]]++;
                if(high-low+1 > m){
                have[s[low]]--;
                low++;
                }
             if(high-low+1==m){
                if(have==need){
                    res.push_back(low);
                }
             }
           } 
               return res;
       
    }
};
