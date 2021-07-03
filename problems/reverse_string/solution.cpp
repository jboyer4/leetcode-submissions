class Solution {
public:
    void reverseString(vector<char>& s) {
        int pos = 0;
        while(pos < s.size()/2){
            char temp =  s[pos];
            s[pos] = s[s.size()-1-pos];
            s[s.size()-1-pos] = temp;
            ++pos;
        }
    }
};