fn gauss(n: u32) -> u32 {
    (n * (n+1))/2
}

fn main() {
    let sum_of_squares = {
        let mut sum: u32 = 0;

        for i in 1u32..101 {
            sum += i.pow(2);
        }

        sum
    };

    let square_of_sum: u32 = gauss(100).pow(2);

    println!("Difference is: {}", square_of_sum - sum_of_squares);
}
