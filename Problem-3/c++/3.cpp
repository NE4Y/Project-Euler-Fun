#include <iostream>
#include <cmath>

int isPrime (int _a) {
    for (int i = 2; i <= sqrt(_a); i++ ) {

        if (_a % i == 0) return false;
    }
    return true;
}

int main() {
        int n = 6246  ;
        int sol = 0;

        for (int i = n; i > 1; --i) {
           // std::cout << i << std::endl;
           //
            //std::cout << isPrime(i) << std::endl;
            if (isPrime(i) == true && n % i == 0) {
                sol = i;
                break;
            }
        }
        std::cout << sol << std::endl;
}




