class Solution {
public:
    int secondHighest(string s) {
        int ans[2] = {-1, -1};
        for (char c: s) {
            if (c >= '0' && c <= '9') {
                c -= '0';
                if (c > ans[0])
                    ans[1] = ans[0], ans[0] = c;
                else if(c != ans[0] && c > ans[1]) 
                    ans[1] = c;
            }
        }
        return ans[1];
    }
};
