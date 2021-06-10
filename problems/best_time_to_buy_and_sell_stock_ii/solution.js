/**
 * @param {number[]} prices
 * @return {number}
 */


var maxProfit = function(prices) {
    let bought = false;
    let boughtVal = 0;
    let total = 0;
    for(let i = 0; i < prices.length; i++){
        //If we've reached the end, sell
        if(bought){
            if(i === prices.length-1){
                total = total + prices[i] - boughtVal
            }
            //If not decide if we should hold
            else if(prices[i] > prices[i+1]){
                //sell
                bought = false;
                total = total + prices[i] - boughtVal;
            }
        }
        //If we haven't bought, should we?
        if(!bought){
            if(prices[i] < prices[i+1]){
                //buy
                bought = true;
                boughtVal = prices[i];
            } 
        }
    }
    return total;
};