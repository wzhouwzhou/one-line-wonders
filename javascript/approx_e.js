/**
 * Approximate the Euler Number e
 * @param {number} iterations 
 */
const approx_e = (iterations) => [...Array(iterations)].reduce((accum, _, k) => accum + 1/([...Array(k)].reduce((p, _, i) => p * (i+1), 1)), 0)