class Solution {
public:
    string capitalizeTitle(string title) {
        string result = "";
        int n = title.length();
        bool cap_next = true;
        for (int i = 0; i < n; i++) {
            if (title[i] == ' ') {
                cap_next = true;
                result += ' ';
            } else if (cap_next) {
                result += toupper(title[i]);
                cap_next = false;
            } else {
                if (i >= 2 && !(isupper(title[i - 1]) || islower(title[i - 1]))) {
                    result += title[i];
                } else {
                    result += tolower(title[i]);
                }
            }
        }
        return result;
    }
};
