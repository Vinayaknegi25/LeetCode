/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    let out = [];
    flatten(arr, n, out);
    return out;
};

function flatten(arr, n, out) {

    for(var i=0;i < arr.length;i++){
        if(Array.isArray(arr[i])&& n>0){
            flatten(arr[i],n-1,out);
        }
        else[
            out.push(arr[i])
        ]
    }
}
