let fix f = (fun (`X x) -> f(x (`X x))) (`X(fun (`X x) y -> f(x (`X x)) y));;

let facRec f = function
    0 -> 1
  | n -> n * f (n-1)


Printf.printf "%d\n" (fix facRec 2);;
Printf.printf "%d\n" (fix facRec 8);;
