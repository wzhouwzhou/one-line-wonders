# one-line implementation of FizzBuzz
(1..100) | % { if(!($_ % 15)){"FizzBuzz"} elseif(!($_ % 3)){"Fizz"} elseif(!($_ % 5)){"Buzz"} else {$_} }
