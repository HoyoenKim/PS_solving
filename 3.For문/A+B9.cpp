#include <iostream>

int main () {
    int N;
    std::cin >> N;

    for (int i = 0 ; i < N ; i++) {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case #" << i + 1<< ": " << a << " + " << b << " = " << a + b << std::endl;
    }
    return 0;
}