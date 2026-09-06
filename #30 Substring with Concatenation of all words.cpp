class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> res;
         
         int n=s.size();
         int wordLen = words[0].size();
         int wordCount=words.size();
         int totalLen=wordLen * wordCount;
         

         unordered_map<string,int>need;
         for(string word: words){
            need[word]++;
         } 

         for(int start=0;start<wordLen;start++){
            int low=start;
            int count=0;

            unordered_map<string,int>have;

            for(int high=start;high+wordLen <=n; high+=wordLen){
                string word=s.substr(high,wordLen);

                if(need.find(word)==need.end()){
                    have.clear();
                    count=0;
                    low=high+wordLen;
                    continue;
                } 

                have[word]++;
                count++; 

                while(have[word]>need[word]){
                    string leftword = s.substr(low,wordLen);
                    have[leftword]--;
                    low+=wordLen;
                    count--;
                } 

                if(count==wordCount)
                      res.push_back(low);
            }
         } 
          return res;
    }
};
