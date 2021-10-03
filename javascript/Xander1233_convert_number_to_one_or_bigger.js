// This will check if a number is 0 or smaller and then converts it. If 0, to 1. If n < 0, to -n
const convert = (n) => { return (-(~(n ^ 0))) < 0 ? (-(~(n ^ 0))) != -1 ? (-(-(~(n ^ 0)))) + 1 : (-(-(~(n ^ 0)))) : (-(~(n ^ 0))) != 1 ? (-(~(n ^ 0))) - 1 : (-(~(n ^ 0))); }
