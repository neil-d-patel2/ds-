// To change the C++ version, I had to go into intellisense, have a .vscode
// folder
// have a tasks.json folder, and then set it to C++17

// clang++ -std=c++17 main.cpp -o main && ./main:     and compile with these
// flags

// I just did simply: alias g++='clang++ -std=c++17'
// open calcure as well when starting

#include <iostream>

void find_cpp_version() {
  // This macro is defined by the compiler to indicate the C++ version
#if defined(_MSVC_LANG)
  long standard = _MSVC_LANG;
#else
  long standard = __cplusplus;
#endif

  // Map the version code to a human-readable name
  if (standard == 199711L)
    std::cout << "C++98/C++03" << std::endl;
  else if (standard == 201103L)
    std::cout << "C++11" << std::endl;
  else if (standard == 201402L)
    std::cout << "C++14" << std::endl;
  else if (standard == 201703L)
    std::cout << "C++17" << std::endl;
  else if (standard == 202002L)
    std::cout << "C++20" << std::endl;
  else if (standard > 202002L)
    std::cout << "C++23 or later" << std::endl;
  else
    std::cout << "Unknown or older C++ standard" << std::endl;
}

int main() {
  char ch;
  std::cout << "if you want to see the current version, click type C" std::cin
            << ch;

  if (ch == 'C') {
    find_cpp_version();
  }
  return 0;
}
