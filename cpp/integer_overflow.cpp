#include <iostream>
#include <climits>

int main() {
    int a = INT_MAX;
    int b = a + 1; // Vulnerable: integer overflow
    std::cout << b << std::endl;
    return 0;
}
