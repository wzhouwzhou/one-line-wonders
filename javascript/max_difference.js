var difference = a => a.sort((x, y) => x - y)[(a.length -1)] - a.sort((x, y) => x - y)[0];
// Using Math module
const diff = arr => Math.max(...arr) - Math.min(...arr);
