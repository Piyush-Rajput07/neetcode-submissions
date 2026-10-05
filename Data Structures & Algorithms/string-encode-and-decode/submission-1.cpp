class Solution {
public:

    string encode(vector<string>& strs) {
        string curr = "";

        for(auto &str : strs) {
            curr = curr + to_string(str.length()) + "#" + str;
        }

        return curr;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string curr = "";

        int i = 0;

        while(i < s.length()) {
            string len = "";

            while(s[i] != '#') {
                len += s[i];
                i++;
            }

            int n = stoi(len);
            i++;

            while(n > 0) {
                curr += s[i];
                i++;
                n--;
            }

            res.push_back(curr);
            curr = "";
        }

        return res;
    }
};
