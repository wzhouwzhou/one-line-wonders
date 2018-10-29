const getMin = (arr) => arr.reduce( (x,y) => x<y?x:y );
// Sorter version using Math
const getMin = arr => Math.min(...arr);
