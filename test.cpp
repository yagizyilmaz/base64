#include "base64.h"
#include <iostream>

int main(int argc, const char * argv[]) {
    if(argc < 2) {
        std::cout << "No input provided.\n";
        exit(-1); // if no input provided, exit with code -1.
    }
    BASE64 b64;
    std::string en = b64.encode(reinterpret_cast<const unsigned char *> (argv[1]), strlen(argv[1]));

    std::cout << "Encoded: " << en << std::endl;
    std::cout << "Decoded: " <<
        b64.decode(reinterpret_cast<unsigned char*>(const_cast<char*>(en.c_str())), en.length()) << std::endl;

    return 0;
}

