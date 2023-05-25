 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    let out = []
    var i=0
    while(i<arr.length)
    {
        out.push(arr.slice(i,i+size));
        i=i+size;
    }
    return out;

};
