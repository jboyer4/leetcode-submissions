class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::set<int> vals;
        for(int i = 0; i < nums.size(); i++){
            if(vals.find(nums[i]) != vals.end()){
                vals.erase(nums[i]);
            } else{
                vals.insert(nums[i]);
            }
        }
        return *vals.begin();
    }
};