const sum = (x, y) => y ? sum(x ^ y, (x & y) << 1) : x;
