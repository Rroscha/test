class Solution {
public:
    bool checkString(string s) {
        int lastAIndex = -1;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                if (lastAIndex > i || lastAIndex == -1) {
                    lastAIndex = i;
                }
            } else if (s[i] == 'b') {
                if (lastAIndex == -1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
