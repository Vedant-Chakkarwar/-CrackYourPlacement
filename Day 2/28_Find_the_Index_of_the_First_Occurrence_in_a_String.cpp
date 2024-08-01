class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int>ind;
        int i=0;
        do{
            if(needle == haystack.substr(i,needle.length())){
                ind.push_back(i);
            }
            i++;
        }while(i+needle.length()<=haystack.length());

        ind.push_back(-1);

        return ind[0];
    }
};