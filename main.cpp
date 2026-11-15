#include <iostream>

int dodaj(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 2 + 3 = " << dodaj(2, 3) << std::endl;
    auto pomnoz = [](int a, int b){ return a * b; };

    std::cout << "W drugim branchu; 2 * 3 = " << pomnoz(2, 3) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}