#include <iostream>
#include <math.h>

int main () {
    int n = 100;
    unsigned int g= (n*(n+1))/2;

    unsigned int sum1= g*g;

    unsigned int sum2 = 0;
    for (int i = 1 ; i <= n ; i++) {
        sum2 += i*i;
    }

    unsigned int res = sum1-sum2;
    std::cout << res << std::endl;
}


