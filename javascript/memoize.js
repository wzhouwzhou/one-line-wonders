// This function can be used to cache previous runs results of a given function
// for example if you make the following function
// const multiplyBy2=memoize(n=>n*2)
// then call it with the same input arguments it will not recalculate the output, but grab it from the cache
const memoize = f => ((c = {}), x => (x in c ? c[x] : (c[x] = f(x))));
