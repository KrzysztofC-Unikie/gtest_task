#include "algorithm.h"

std::string reverseString(std::string str, int end)
{
    int start{};
    while (start < end)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];

        ++start;
        --end;
    }
    return str;
}


