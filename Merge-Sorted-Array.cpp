class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n2 = n;
        for(int i=0;i<n;i++){
            nums1[(m+i)]=nums2[n2-1];
            while(n2<0){
                return;
            }
            n2--;
        }
        sort(nums1.begin(),nums1.end());
    }
};
