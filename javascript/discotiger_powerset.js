// generate the powerset (set of all subsets) of an arrays elements
// given [a,b] return [[],[a],[b],[a,b]]
const powerset = (input) => input.reduce((acc, cur) => acc.concat(acc.map(x => [...x,cur])),[[]]);