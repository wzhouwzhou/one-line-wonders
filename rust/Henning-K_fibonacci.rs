// created using the C version in this repo as a reference

use std::env;
use std::str::FromStr;

fn fib(n: usize) -> usize { if n>1 { fib(n-1)+fib(n-2) } else { 1 } }


// Compile with rustc, run using the form "./Henning-K_fibonacci <some positive integer>"
fn main() {
	let n = usize::from_str(&env::args().nth(1).expect("Not enough arguments.")).expect("Positive integer expected.");
	println!("Fibonacci: {}", fib(n));
}