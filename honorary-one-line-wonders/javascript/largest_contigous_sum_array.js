function largestContigousArraySum(arr) {
    let curr_sum = 0, max_sum = 0;
    arr.map((item, i) => max_sum = Math.max(curr_sum = Math.max(0, arr[i] + curr_sum), max_sum))
    return max_sum
}
