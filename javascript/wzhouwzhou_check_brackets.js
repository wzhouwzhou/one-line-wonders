const b=['()','[]','{}'],d=b.reduce((o,e)=>Object.defineProperty(o,e[0],{value:e[1]}),{}),c=b.map((e,i)=>Object.defineProperty(Object.defineProperty({},[]+e[0],{value:[i,1],enumerable:!0}),[]+e[1],{value:[i,-1],enumerable:!0})).reduce((a,b)=>Object.assign(a,b),{}),check_brackets=str=>str.split``.filter(e=>'()[]{}'.includes(e)).reduce((a,n)=>(a.some(e=>e<0)?a[3]=!0:c[n][1]==-1&&a[4]&&n!=d[a[4]]?a[3]=!0:(a[c[n][0]]+=c[n][1]),c[n][1]==1?a[4]=n:a[4]='',a),[0,0,0,!1]).filter((e,i)=>i<4).every(e=>!e);

check_brackets('Some [awesome (string)] to {check}');
check_brackets('Less [awesome (string}] to {check}');
