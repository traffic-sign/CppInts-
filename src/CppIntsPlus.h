//this doesnt work what so ever but I figured I should upload it anyway!
//the special types in ctsdlib only go up to 128 bits so we start our types at 256 bits



#ifndef CPPINTSPLUS_H
#define CPPINTSPLUS_H

#include <iostream>
#include <string>

inline std::string addStrings(std::string string1, std::string string2) //this is the ugliest function I've ever written but it works and it doesnt need to be to fast
{
    int string1Len = 0;
    int string2Len = 0;
    for (int i = 0; i < string1.size(); i++)
    {
        string1Len++;
    }
    for (int i = 0; i < string2.size(); i++)
    {
        string2Len++;        
    }
    
}

struct int256_t
{
    int DATA[8] = {0,0,0,0,0,0,0,0};
    public:
    inline int256_t operator+(const int256_t other)
    {
        for (int i = 0; i < 8; i++)
        {
        }
    }
};
inline std::ostream& operator<<(std::ostream& os, int256_t integar)
{
    std::string stringedInt;
    for (int i = 0; i < 8; i++)
    {
        for (int ii = 0; ii < 8; ii++)
        {
            char bit = (getBit(integar.DATA[i], ii)) ? '1' : '0'; //would just cast but it refuses to work for some reason that I don't care enough to figure out

            stringedInt.push_back(bit);
        }
        stringedInt.push_back(' ');
    }
    
    os << stringedInt;
    return os;
}

struct int512_t
{
    std::byte DATA[64];
    
};

struct int1024_t
{
    std::byte DATA[128];
    
};

#endif
#ifdef CPPINTSPLUS_IMP




#endif
