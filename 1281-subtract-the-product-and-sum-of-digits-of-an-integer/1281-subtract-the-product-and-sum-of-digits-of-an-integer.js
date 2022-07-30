/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    
    let digits = n.toString().split("");
    let sum = 0;
    let product = 1;
    for(let i=0; i<digits.length; i++)
        {
            sum += parseInt(digits[i]);
            product *= parseInt(digits[i]);
        }
    
    return product-sum;
};