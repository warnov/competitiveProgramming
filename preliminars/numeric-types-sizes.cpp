#include <iostream>
using namespace std;

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    //       |
    //       +---> Observe that int and long have 8 bytes on 64-bit systems	    
    
    // long long spend 8 bytes on 64-bit systems
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    // __int128_t spend 16 bytes on 64-bit systems
    std::cout << "Size of int128: " << sizeof(__int128_t) << " bytes" << std::endl;
    return 0;
}