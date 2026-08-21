class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }

        while (s.length() > 0) {

            bool found = false;

            for (int i = 0; i < s.length() - 1; i++) {

                if ((s[i] == '(' && s[i + 1] == ')') ||
                    (s[i] == '{' && s[i + 1] == '}') ||
                    (s[i] == '[' && s[i + 1] == ']')) {

                    s.erase(i, 2);
                    found = true;
                    break;
                }
            }

            if (!found) {
                return false;
            }
        }

        return true;
    }
};