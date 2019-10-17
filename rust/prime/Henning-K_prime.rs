// inspired by the C version in this repo

use std::env;
use std::str::FromStr;

// Compile with rustc, run using the form "./Henning-K_prime <some positive integer>"
fn main() {
	let n = usize::from_str(&env::args().nth(1).expect("Not enough arguments.")).expect("Positive integer expected.");
	println!("{} is {}prime.", n, if is_prime(n) {""} else {"not "});
}

fn is_prime(n: usize) -> bool { if n>1 { !(2..n).any(|i| n%i==0)} else { false } }
