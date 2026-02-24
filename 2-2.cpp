#include <iostream>

template <typename T>
void Swapvalues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    double d1, d2;
    char c1, c2;

    std::cout << "Enter two integers, two doubles, and two characters (separated by spaces): ";
    std::cin >> x >> y >> d1 >> d2 >> c1 >> c2;

    std::cout << "Before swapping:\n";
    std::cout << "Ints: " << x << " " << y << std::endl;
    std::cout << "Doubles: " << d1 << " " << d2 << std::endl;
    std::cout << "Chars: " << c1 << " " << c2 << std::endl;

    Swapvalues(x, y);
    Swapvalues(d1, d2);
    Swapvalues(c1, c2);

    std::cout << "After swapping:\n";
    std::cout << "Ints: " << x << " " << y << std::endl;
    std::cout << "Doubles: " << d1 << " " << d2 << std::endl;
    std::cout << "Chars: " << c1 << " " << c2 << std::endl;

    return 0;
}
