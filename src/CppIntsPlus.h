//the special types in ctsdlib only go up to 128 bits so we start our types at 256 bits



#ifndef CPPINTSPLUS_H
#define CPPINTSPLUS_H

struct int256_t
{
    std::byte DATA[8*32];

};

struct int512_t
{
    std::byte DATA[8*64];
    
};

struct int1024_t
{
    std::byte DATA[8*128];
    
};

#endif


#ifdef CPPINTSPLUS_IMP



#endif