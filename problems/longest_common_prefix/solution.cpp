class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = "";
        int curPos = 0;
        while(1){
            char curChar = '\0'; 
            for(int i = 0; i < strs.size(); ++i){
                if(curPos >= strs[i].size()){
                    return longestPrefix;
                }
                if(curChar != strs[i][curPos]){
                    if(curChar=='\0'){
                        curChar = strs[i][curPos];
                    }
                    else{
                        return longestPrefix;
                    }
                } 
            }
            longestPrefix.push_back(curChar); 
            ++curPos;
        }
    }
};