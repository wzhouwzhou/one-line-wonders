const map = (arr, cb) => {
  let i = arr.length, result = Array(i);
  while (i--) result[i] = cb(arr[i], i, arr);
  return result;
};