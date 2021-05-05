/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var areAlmostEqual = function(s1, s2) {
    if(s1 === s2) return true;
    if(s1.length != s2.length || s1.length == 0) return false;
    
    let count = 0;
    s1match = '';
    s2match = '';
    for(let i = 0; i < s1.length; i++){
        if(s1[i] != s2[i]){
            count++;
            if(count == 1) {
                s1match = s1[i];
                s2match = s2[i];
            }
            else if(count == 2){
                if(s1[i] != s2match || s2[i] != s1match) return false;
                //else cont
            }
            else return false;
        }
        //if s1[i] == s2[i] cont
    }
    return count == 2 ? true:false;
};