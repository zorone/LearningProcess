#include <iostream>
#include <vector>

int main() {
    std::cout << "Hello, World\n";

    std::vector<int> V{1, 2, 3, 4, 5};
    int a = 8;

    for(auto &e : V) {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    std::cout << "a = " << a << '\n';
}