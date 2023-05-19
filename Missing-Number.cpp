class Solution {
public:
         int  n = nums.size();
    int missingNumber(vector<int>& nums) {
         long long  expectedSum = (n * (n + 1)) / 2;
         long long actualSum = 0;

         for (int i = 0; i < nums.size(); i++) {
            actualSum = actualSum + nums[i];
        }
  
            return(expectedSum-actualSum);
    }
};
