/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let aux = arr;
    let result=[];
    for(let i=0;i<arr.length;i++)
    {
        let x= fn(aux[i],i)
        if(x)
            result.push(aux[i]);
    }
    return result;
    
};
