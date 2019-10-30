const getMax = arr => arr.reduce((m, n) => (m > n ? m : n));
// Get max via the built in Math module
const getMax = arr => Math.max(...arr);
