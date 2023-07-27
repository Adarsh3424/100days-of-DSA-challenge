class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(auto i:arr) mp[i]++;
        double aa = arr.size()*(25.00/100.00);
        
        cout<<aa<<endl;
        for(auto i:mp) if(i.second>aa) return i.first;
        return -1;
    }
};
