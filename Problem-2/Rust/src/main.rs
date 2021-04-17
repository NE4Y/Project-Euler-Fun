fn main() {

    let limit: i32 = 4000000;

    let mut fib_1: i32 = 1;
    let mut fib_2: i32 = 1;

    let mut sum: i32 = 0;

    while fib_2 <= limit {
        if fib_2 % 2 == 0 {
            sum += fib_2;
        }

        let tmp: i32 = fib_2;

        fib_2 = fib_1 + fib_2;
        fib_1 = tmp;
    }

    println!("{}", sum);
}
