const getFrequency=x=>{let p;x.sort();for(i=0,a=[],b=[];i<x.length;i++)x[i]!==p?(a.push(x[i]),b.push(1)):b[b.length-1]++,(p=x[i]);return a.map((v,i)=>({v,f:b[i]}))}
