// created using the C version in this repo as a reference

use std::env;
use std::str::FromStr;

fn fib_recursive(n: usize) -> usize { if n>1 { fib_recursive(n-1)+fib_recursive(n-2) } else { 1 } }
fn fib_iterative(n: usize) -> usize { if n>1 { (2..=n).into_iter().fold((1,1) , |acc, _| (acc.1, acc.0+acc.1)).1 } else { 1 } }

// Compile with rustc, run using the form "./Henning-K_fibonacci <some positive integer>"
fn main() {
	let n = usize::from_str(&env::args().nth(1).expect("Not enough arguments.")).expect("Positive integer expected.");
	println!("Fibonacci (iterative): {}", fib_iterative(n));
	println!("Fibonacci (recursive): {}", fib_recursive(n));
}


// Compile the test harness with rustc --test <filename>.rs, then execute the resulting binary
#[test]
fn test_normal_recursive() {
	assert_eq!(fib_recursive(0), 1);
    assert_eq!(fib_recursive(1), 1);
    assert_eq!(fib_recursive(2), 2);
    assert_eq!(fib_recursive(3), 3);
    assert_eq!(fib_recursive(4), 5);
    assert_eq!(fib_recursive(5), 8);
}

#[test]
fn test_normal_iterative() {
	assert_eq!(fib_iterative(0), 1);
    assert_eq!(fib_iterative(1), 1);
    assert_eq!(fib_iterative(2), 2);
    assert_eq!(fib_iterative(3), 3);
    assert_eq!(fib_iterative(4), 5);
    assert_eq!(fib_iterative(5), 8);
}
