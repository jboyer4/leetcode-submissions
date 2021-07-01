class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() < 2) return;
        vector<int> numsCopy(nums.begin(), nums.end());
        for(int i=0; i< nums.size(); i++){
            int newPos = i+k;
            while(newPos >= nums.size()){
                newPos = newPos-nums.size();
            }
            //printf("|%d|%d|", newPos, i);
            nums[newPos] = numsCopy[i];
        }
    }
};