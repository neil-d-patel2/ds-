#include <iostream>
// To change the C++ version, I had to go into intellisense, have a .vscode folder
//have a tasks.json folder, and then set it to C++17

// clang++ -std=c++17 main.cpp -o main && ./main:     and compile with these flags

// I just did simply:     alias g++='clang++ -std=c++17'

int main() {
    long standard = __cplusplus;

    // Map the macro value to the C++ standard name
    if (standard == 199711L) std::cout << "C++98/C++03" << std::endl;
    else if (standard == 201103L) std::cout << "C++11" << std::endl;
    else if (standard == 201402L) std::cout << "C++14" << std::endl;
    else if (standard == 201703L) std::cout << "C++17" << std::endl;
    else if (standard == 202002L) std::cout << "C++20" << std::endl;
    else if (standard > 202002L) std::cout << "C++23 or later (code: " << standard << ")" << std::endl;
    else std::cout << "Pre-C++98 or unknown version (code: " << standard << ")" << std::endl;

    return 0;
}







