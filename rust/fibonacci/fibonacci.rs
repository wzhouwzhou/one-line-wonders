fn main() {
    let num: u32 = 20;
    println!("The {} number in the fibonacci sequence is: {}", num, fib(num));
}

fn fib(x: u32) -> u32 { match x {0 => 1, 1 => 1, _ => fib(x - 1) + fib(x - 2),}}
