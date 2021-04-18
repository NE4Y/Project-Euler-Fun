#include <iostream>
#include <cmath>
#include <vector>


void numberToVec (int _a , std::vector<int> &v) {
    v.push_back(_a % 10);
    if (_a > 10) {
         numberToVec(_a / 10, v);

    } //return v;

}

int main() {
    std::vector<int> v;

    int n = 9009;
    numberToVec(n , v);

    for ( auto i : v) {
        std::cout << i << std::endl;
    }


}





