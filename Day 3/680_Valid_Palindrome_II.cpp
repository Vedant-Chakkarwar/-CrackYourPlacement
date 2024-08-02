class Solution {
private:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                string str1 = s.substr(i + 1, j - i);
                string str2 = s.substr(i, j - i);
                return isPalindrome(str1) || isPalindrome(str2);
            }
            i++;
            j--;
        }
        return true;
    }

    
};