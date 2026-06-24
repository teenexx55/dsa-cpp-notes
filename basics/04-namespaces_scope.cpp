#include <iostream>

// a namespace is like a container that groups variables and functions together
// prevents naming conflicts → two variables can have the same name if they're in different namespaces

namespace first {
    int x = 1;  // this x belongs to first
}

namespace second {
    int x = 2;  // this x belongs to second → no conflict with first::x
}

int main() {
    int x = 0;  // this x belongs to main → completely separate from the ones above

    std::cout << first::x << std::endl;   // :: is the scope resolution operator → accesses x from first namespace → 1
    std::cout << second::x << std::endl;  // accesses x from second namespace → 2
    std::cout << x << std::endl;          // accesses x from main → 0

    // Why std:: everywhere?
    // std is a namespace that comes with C++
    // cout, cin, endl all live inside it
    // std::cout → access cout from the std namespace

    return 0;
}