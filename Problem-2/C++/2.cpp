#include <iostream>


int main() {
    int a = 1;
    int i = 1;
    int n = 4000000;
    int solution = 0;
    int temp = 0;
    while ( i <= n) {
        if ( i % 2 == 0 ){
            solution += i ;
        }
        temp = i ;
        i = a + i;
        a = temp;

    }
    std::cout << solution << std::endl;
}

