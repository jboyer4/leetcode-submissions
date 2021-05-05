/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let common = "";
    let shared = true;
    let idx = 0;
    if(strs.length == 0){
        return common;
    }
    while(shared && (idx < strs[0].length)){
        let next = strs[0][idx]
        for(let i = 1; i < strs.length; i ++){
            //console.log(next, strs[i][idx]);
            if(idx >= strs[i].length || strs[i][idx] != next){
                shared = false;
            }
        }
        shared && (common += next);
        idx++;
    }
    return common;
};