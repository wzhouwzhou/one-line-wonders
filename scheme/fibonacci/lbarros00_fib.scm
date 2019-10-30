; Download DrRacket and set language to R5RS
; Click Run

(define (fib n) (cond ((= n 0) 0) ((= n 1) 1) (else (+ (fib (- n 1)) (fib (- n 2))))))

; uncomment the line below to calculate the 2nd Fibonacci number
; (fib 2)
