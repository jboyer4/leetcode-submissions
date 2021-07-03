class Solution {
public:
    bool isPalindrome(string s) {
        int pos = 0;
        int endpos = s.length()-1;
        while(pos < endpos){
            while(!isalnum(s[pos]) && pos < endpos){
                ++pos;
            }
            while(!isalnum(s[endpos]) && pos < endpos){
                --endpos;
            }
            if(toupper(s[pos]) != toupper(s[endpos])){
                return false;
            }
            ++pos;
            --endpos;
        }
        return true;
    }
};