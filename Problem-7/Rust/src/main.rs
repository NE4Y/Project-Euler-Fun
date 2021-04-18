fn is_prime(n: u32) -> bool {
    for i in 2..(n as f64).sqrt() as u32 + 1 {
        if n % i == 0 {
            return false
        }
    }

    true
}

fn main() {
    let mut counter = 1;
    let mut i = 1;

    while counter != 10001 {
        i += 2;

        if is_prime(i) {
            counter += 1;
        }
    }

    println!{"10 001st prime number is: {}", i};
}
