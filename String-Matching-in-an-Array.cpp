class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
         vector<string> ans;

     
       for(int i=0;i<words.size();++i){
           for(int j=0;j<words.size();++j){
               
               if(i!=j && (words[i].find(words[j]) != string::npos)) {
                  
                   ans.push_back(words[j]);
               }
           }
       } 

      
       set<string> s;
      
       
       for(int i=0;i<ans.size();++i){
           s.insert(ans[i]);
       }

       
       ans.clear();

       
       for(auto itr:s){
         ans.push_back(itr);
       }

       return ans;
    }
};
