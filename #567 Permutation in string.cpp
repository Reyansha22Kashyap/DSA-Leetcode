class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n= s1.size();
        int m= s2.size();

        if(n>m)
            return false;
        vector<int> need(256,0);
        vector<int> have(256,0);

        for(int i=0;i<n;i++){
            need[s1[i]]++;
        } 
        int low=0;

        for(int high=0;high<m;high++){
            have[s2[high]]++;

            if(high-low+1 > n){
                have[s2[low]]--;
                low++;
            } 

            if(high-low+1==n){
                if(have==need)
                    return true;
            }
        }   

         return false;  
    }
};
