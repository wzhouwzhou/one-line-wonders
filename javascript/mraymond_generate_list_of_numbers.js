const generateListOfNumbers = (min, max) => Object.keys(Array.apply(null, Array(max-min+1))).map(val => parseInt(val)+min)
