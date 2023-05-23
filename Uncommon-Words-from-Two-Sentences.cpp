class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        s1 += " ";
        s1 += s2;

        vector<string>v;
        string p;
        int j=0;

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                m[p]++;
                p="";
            }
            else
            {
                p+=s1[i];
            }
        }
        m[p]++;
        int k=0;

        for(auto i:m){
            if(i.second == 1)
            {
                v.push_back(i.first);
            }
        }
        return v;

    }
};
