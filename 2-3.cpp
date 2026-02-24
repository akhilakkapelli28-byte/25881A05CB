#include <iostream>
#include <string>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int i1 = 10, i2 = 20;
    float f1 = 1.5f, f2 = 2.5f;
    std::string s1 = "Hello", s2 = "World";

    std::cout << "Before swapping:\n";
    std::cout << "Integers: " << i1 << " " << i2 << std::endl;
    std::cout << "Floats: " << f1 << " " << f2 << std::endl;
    std::cout << "Strings: " << s1 << " " << s2 << std::endl;

    swapValues(i1, i2);
    swapValues(f1, f2);
    swapValues(s1, s2);

    std::cout << "After swapping:\n";
    std::cout << "Integers: " << i1 << " " << i2 << std::endl;
    std::cout << "Floats: " << f1 << " " << f2 << std::endl;
    std::cout << "Strings: " << s1 << " " << s2 << std::endl;

    return 0;
}
