fn main() {
    let mut i = 21;

    loop {
        let mut divisible = true;
        for j in (2..21).rev() {
            if i % j != 0 {
                divisible = false;
                break;
            }
        }

        if divisible {
            break;
        }

        i += 1;
    }


    println!("i: {}", i);
}
