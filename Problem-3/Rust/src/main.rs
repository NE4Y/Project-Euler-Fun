fn is_prime(n: u64) -> bool {
    let mut prime: bool = true;

    for i in 2..((n as f64).sqrt() as u64)+1 {
        if n % i == 0 {
            prime = false;
            break;
        }
    }
    prime
}

fn main() {
    let n: u64 = 600851475143;

    for i in 2..n {
        if n % i == 0 {
            if is_prime(n / i) {
                println!("Found: {}", n/i);
                break;
            }
        }
    }
}
