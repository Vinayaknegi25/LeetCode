/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
        let k = x;
        for(let i = functions.length -1 ;i>=0;i--)
        {
            k =functions[i](k);
        }
        return k   
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
