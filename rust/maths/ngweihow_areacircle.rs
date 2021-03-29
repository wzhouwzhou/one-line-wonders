/**
 Simple Rust One Liner to calculate area of circle.
 Made to have fun and learn Rust. This is my first time writing working code in Rust.

 Requires Cargo.
 @author: github.com/ngweihow
*/
use std::io;
use std::f32::consts::PI;

fn main() {
    println!("Enter the radius of the circle you want to calculate the area of: ");

    let mut input = String::new();
    io::stdin().read_line(&mut input)
        .expect("Failed to read line!");

    let float_input = input.trim().parse::<f32>().expect("Invalid Input!");

    println!("The area of your circle is {} unit squared!", area_of_circle(float_input));
}

// Area of circle one liner.
fn area_of_circle(r: f32) -> f32 { r.powf(2.0) * PI }
