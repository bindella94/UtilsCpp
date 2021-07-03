#include <iostream>
#include <string>
#include "bitwise.h"

int  main(){
    std::string p="2";
    BitWise a(p,0);
    for(uint8_t i=0 ;i<4;++i){
    printf("%x,",a.getSingleBit(false,i));
    }
     std::cout<<"\n";
        for(uint8_t i=0 ;i<4;++i){
    printf("%x,",a.getSingleBit(false,i));
    }
    std::cout<<"\n";
    for(uint8_t i=0 ;i<4;++i){
    printf("%x,",a.getDoubleBits(i));
    }
    std::cout<<"\n";
    printf("%x,",a.getFourBits(false));
     std::cout<<"\n";  
    printf("%x,",a.getFourBits(true));
    std::cout<<"\n";  
    printf("%x,",a.getEntireByte());
    std::cout<<"\n";  
    return 0;
}