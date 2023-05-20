class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int>mp;

        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }

        for(int i=0;i<nums1.size();i++){
            int x = nums1[i];
            int index = mp[x];
            for(int j = index; j < nums2.size(); j++){
                if(nums2[j] > x){
                    ans.push_back(nums2[j]);
                    break;
                }
                else if(j == nums2.size()-1){
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
