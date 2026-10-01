class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        int minLen = strs[0].length();

        for(int i=0; i<n; i++) {
            if(strs[i].length() < minLen) {
                minLen = strs[i].length();
            }
        }

        string str = "";

        for(int i=0; i<minLen; i++) {

            char ch = strs[0][i];

            for(int j=0; j<n; j++) {

                if(strs[j][i] != ch) {
                    return str;
                }
            }

            str += ch;
        }

        return str;
    }
};