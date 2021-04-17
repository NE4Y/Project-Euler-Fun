#include <iostream>


int main() {
    int temp = 0;
    for ( int i = 0; i < 1000 ; ++i) {
        if ( i % 3 == 0 ||  i % 5 == 0) temp += i;
    }
    std::cout << temp << std::endl;
}