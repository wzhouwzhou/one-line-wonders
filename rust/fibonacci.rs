fn fibonacci(x: u8) -> u8 {
    match x {
        0 => 1,
        1 => 1,
        _ => fibonacci(x - 1) + fibonacci(x - 2),
    }
}

fn main() {
    println!("{}", fibonacci(5));
}
