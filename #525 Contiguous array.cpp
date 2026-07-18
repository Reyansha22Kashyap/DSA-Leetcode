class Solution {
public:
    int findMaxLength(vector<int>& nums) { 
        unordered_map<int,int>f;
        int zero=0,one=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else{
                one++;
            }
            int diff = zero-one;
            if(diff==0){
                res=max(res,i+1);
            }
            if(f.find(diff)==f.end()){
                f[diff]=i;
            } else{
                int index = f[diff];
                int len = i-index;
                res= max(len,res);
            }
        } 
                  return res;
    }
};
