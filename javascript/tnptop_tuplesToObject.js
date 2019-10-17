/**
 * Convert an array of tuples into an object
 * The function assumes the first element of each tuple is the desired keys
 * If a tuple contains more than two element, all but the first element will be grouped into an array
 */
const tuplesToObject = (tuples) => tuples.reduce((obj, [key, ...value]) => Object.assign({ [key]: value }, obj), {})
