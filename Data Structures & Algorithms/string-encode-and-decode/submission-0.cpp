class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for(auto &str : strs) {
            for(auto &ch : str) {
                res.push_back(ch);
            }
            res.push_back((char)0x2605);
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string curr = "";

        for(auto &ch : s) {
            if(ch == (char)0x2605) {
                res.push_back(curr);
                curr = "";
            } else {
                curr.push_back(ch);
            }
        }

        return res;
    }
};
