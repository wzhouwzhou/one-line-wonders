const values = [1, 2, 3, 4, 5, 1, 1, 1, 3];

const unique = [void(0)].map((e, i, arr) => new Set(values).forEach(v => arr.push(v)) || arr)[0].slice(1);
