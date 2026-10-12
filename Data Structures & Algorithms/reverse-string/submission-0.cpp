class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        vector<char> vec(n);

        for(int i=0; i<n; i++) {
            vec[i] = s[n-i-1];
        }

        for(int i=0; i<n; i++) {
            s[i] = vec[i];
        }
    }
};