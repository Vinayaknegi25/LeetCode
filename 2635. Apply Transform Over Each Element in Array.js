/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn){
    let result = arr  
    for(let k=0;k<arr.length;k++){
        result[k]=fn(result[k],k);
    }
    return result;
};
