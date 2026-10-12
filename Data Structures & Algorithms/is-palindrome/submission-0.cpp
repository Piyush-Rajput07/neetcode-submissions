class Solution {
public:
    bool isAlnum(char ch) {
        return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'|| ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int n = s.length();

        int st = 0, end = n-1;

        while(st <= end) {
            if(!isAlnum(s[st])) {
                st++;
                continue;
            } else if(!isAlnum(s[end])) {
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++; end--;
        }

        return true;
    }
};
