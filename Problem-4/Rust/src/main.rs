fn number_to_vec(n: u32, v: &mut Vec<u32>) {
    v.push(n % 10);

    if n > 10 {
        number_to_vec(n/10, v);
    }
}

fn is_palindrom<T: Eq + Clone>(v1: &Vec<T>) -> bool {
    let mut v2 = v1.clone();
    v2.reverse();

    return v1 == &v2;
}

fn main() {
    let mut largest = 1;

    for i in 100..1000 {
        for j in 100..i {
            let number = i * j;

            let mut v1 = vec![];

            number_to_vec(number, &mut v1);

            if is_palindrom(&v1) {
                if number > largest {
                    largest = number;
                }
            }
        }
    }


    println!("{}", largest);


}
