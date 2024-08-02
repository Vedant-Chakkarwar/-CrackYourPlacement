class Solution {
public:
    string convertToTitle(int columnNumber) {
        array<string,26> alpha{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O",
        "P","Q","R","S","T","U","V","W","X","Y","Z"};
        string ans;
        while (columnNumber > 0) {
            int r = columnNumber % 26;
            if (r == 0) {
                r = 26;
                columnNumber--;
            }
            ans = alpha[r - 1] + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};