const map_filter_reduce = (array) => array.map(x => x * 2).filter((x,i) => i % 2 === 0 ).reduce((acc,cur) => acc + cur)
