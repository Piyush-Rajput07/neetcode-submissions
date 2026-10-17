class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.length(), word2.length());

        string res = "";

        for(int i=0; i<n; i++) {
            res += word1[i];
            res += word2[i];
        }

        if(word1.length() > n) {
            res += word1.substr(n);
        } else {
            res += word2.substr(n);
        }

        return res;
    }
};