/**
 Simple Rust One Liner to calculate length of hypotenuse.
 
 Requires Cargo.
 @author: github.com/ngweihow
*/

use std::io;
use std::f32;

fn main() {

    // I gave up using an array/vector input lol. Rust is hard.
    println!("Enter the length of the adjacent and opposite to find out the length of the hypotenuse!");
    println!("Adjacent: ");
    let mut input1 = String::new();
    io::stdin().read_line(&mut input1)
      .expect("Failed to read line!");

    let float1 = input1.trim().parse::<f32>().expect("Invalid Input!");

    println!("Opposite: ");
    let mut input2 = String::new();
    io::stdin().read_line(&mut input2)
      .expect("Failed to read line!");

    let float2 = input2.trim().parse::<f32>().expect("Invalid Input!");

    println!("The length of the hypotenuse is {} units!", length_hypotenuse(float1, float2));
}

// Calculation function.
fn length_hypotenuse(a: f32, b: f32) -> f32 { (a.powf(2.0) + b.powf(2.0)).sqrt() }