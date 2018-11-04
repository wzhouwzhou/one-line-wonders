/**
 * Get an approximation for pi using the Leibniz formula
 * @param {number} iterations Number of iterations to use for approximations
 */
const approx_pi = (iterations) => 4 * [...Array(iterations)].reduce((accum, _, k) => accum + Math.pow(-1, k)/(2 * k +1), 0)