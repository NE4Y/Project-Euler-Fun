//
// Created by Pati on 18.04.2021.
//

#include <iostream>
#include <cmath>
#include <vector>


bool smalboi (int a) {
    int sum  = 0;
    if ( a % 2 == 0 && a >= 20) {
        for (int i = 3; i <= 20  ; i++) {
            if ( a % i == 0 ) {
                sum += 1;
               // std::cout << sum << std::endl;
            }
            else {
                break ;
            }
        }

    }
    if ( sum == 18) return true;
    else return false;
}

int main() {
   for (int i = 0; i < 999999999; ++i) {
       if (smalboi(i)) {
            std::cout << i << std::endl;
            break;
       }
    }
}








