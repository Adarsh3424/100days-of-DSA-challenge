class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int, int>, int> memo;
        return dp(nums, target, 0, memo); 
    }

    private:
    int dp(vector<int>& nums, int target, int idx, map<pair<int, int>, int>& memo) {
        if (idx == nums.size()) return target == 0;
        if (memo.count({idx, target})) return memo[{idx, target}];

        int positive = dp(nums, target + nums[idx], idx + 1, memo);
        int negative = dp(nums, target - nums[idx], idx + 1, memo);

        return memo[{idx, target}] = positive + negative;
    }
};
