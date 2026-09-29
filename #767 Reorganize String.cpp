class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:freq){
            char element=i.first;
            int frequency=i.second;

            pq.push({frequency,element});
        }

        pair<int,char> prev={0,'#'};
        string res="";

        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();

            int frequency=curr.first;
            char element=curr.second;
            res+= element;  
            if(prev.first>0){
                pq.push(prev);
            }
            frequency--;
            prev={frequency,element};
        } 
         if(res.size()!=n){
            return "";
         }
          return res;
    }
};
