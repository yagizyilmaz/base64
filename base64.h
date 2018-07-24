#ifndef base64_h
#define base64_h

#include <string>

class BASE64 {
public:
    std::string encode(const unsigned char * t, int len);
    std::string decode(const unsigned char * t, int len);
};

#endif
