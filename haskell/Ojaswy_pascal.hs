  r n=take(n+1)$iterate(\a->zipWith(+)(0:a)$a++[0])[1]
