class Solution {
public:
    int maximum69Number (int num) {
        std::string str = std::to_string(num); 
        int maxans = num; 

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '6') { 
                str[i] = '9'; 
                int updatedNum = stoi(str); 
                maxans = std::max(maxans, updatedNum); 
                str[i] = '6'; 
            }
        }
        return maxans;
    }
    
};
