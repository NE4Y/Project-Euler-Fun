
#include <iostream>
#include <cmath>

unsigned long isPrime (long a) {

    for (int i = 2; i <= sqrt(a)+ 1 ;i++) {

        if ( a % i == 0) return false;

    } return true;
}


int main () {
    int sum = 0;
    int i = 1;
    while (sum != 10001){
        if (isPrime(i)) sum += 1;
        if (sum == 10001) std::cout << i << std::endl;
        ++i;
    }


}
