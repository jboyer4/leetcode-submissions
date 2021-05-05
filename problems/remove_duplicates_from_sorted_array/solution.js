/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let idx = 0;
    let ptr = 0;
    while(ptr < nums.length){
        while(ptr < nums.length && nums[idx] >= nums[ptr]){
                ptr++;
            }
        (ptr < nums.length) && (nums[idx + 1] = nums[ptr])
        idx++;
        }
    return idx++;
};