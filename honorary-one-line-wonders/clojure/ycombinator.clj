(defn Fix [f]
  ((fn [x] (x x))
   (fn [x]
     (f (fn [& args]
          (apply (x x) args))))))

(def fac-rec
  (fn [f]
    (fn [n]
      if (zero? n) 1
        (* n (f (dec n)))))))


(def fac (Fix fac-rec))

(println (fac 2))
(println (fac 8))
