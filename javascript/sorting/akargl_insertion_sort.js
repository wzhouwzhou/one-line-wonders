/**
 * One line insertion sort
 * Each reduce step builds new array with all smaller values than the current one inserted into a new list, followed by the current value and all bigger values
 * 
 * @param {number[]} arr 
 * @returns {number[]}
 */
const insertionSort = (arr) => arr.reduce((sorted, currentVal) => [...sorted.filter((n) => n <= currentVal), currentVal, ...sorted.filter((n) => n > currentVal)], [])