class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return -1;
        int a=nums[0];
        int b=nums[nums.size()-1];
        if(nums[1]!=a && nums[1]!=b) return nums[1];
        return -1;
    }
};
