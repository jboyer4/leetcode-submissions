// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n){
        long int good = 0;
        long int bad = n;
        while(bad-good>1){
            long int nextCheck = (bad+good)/2;
            bool isBad = isBadVersion(nextCheck);
            if(isBad){
                bad=nextCheck;
            }
            else{
                good=nextCheck;
            }
        }
        return bad;       
    }
};