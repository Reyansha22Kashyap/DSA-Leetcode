class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int siz=nums.size();
        vector<int> neg;
        vector<int> pos;

        for(int i=0;i<siz;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];

            }
        
        
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            } 
             reverse(neg.begin(),neg.end());
         
        int i=0,j=0;
        int id=0;
        int n=neg.size();
        int m=pos.size();
        vector<int> res(n+m);
        while(i<n && j<m){
           if(neg[i]<pos[j]){
            res[id]=neg[i];
            i++;
            id++;
           }else{
            res[id]=pos[j];
            j++;
            id++;
           }
        }
        while(i<n){        
            res[id]=neg[i];
            i++;
            id++;
        }
        while(j<m){
            res[id]=pos[j];
            j++;
            id++;
        } 
           return res;
    }
};
