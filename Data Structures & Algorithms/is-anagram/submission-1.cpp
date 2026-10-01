class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        if(is_permutation(s.begin(), s.end(), t.begin())) {
            return true;
        } else {
            return false;
        }
    }
};
