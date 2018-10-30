/** returns the magnitude between two n-length vectors */

const magnitude = (v1, v2) => Math.sqrt((a => { a.forEach((_, i) => a[i]=Math.exp(v1[i]-v2[i],2)); return a; })([...v1]).reduce((a, c) => a + c, 0));
