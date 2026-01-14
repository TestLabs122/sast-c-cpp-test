#include <iostream>

int main() {
    int *ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Vulnerable: use after free
    return 0;
}
