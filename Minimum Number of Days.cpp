class Solution {
public:
bool canMake(vector<int>& bloomDay,int day,int m, int k){
    int bouquet=0;
    int count=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            count++;

            if(count==k){
                bouquet++;
                count=0;
            }
           } else{
                count=0;
            }
        }
    
     return bouquet>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) { 

        if((long long)m * k > bloomDay.size()) {
        return -1;
    }

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        
        int ans=-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(canMake(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        } 
           return ans;
        
    }
};
