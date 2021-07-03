#include <iostream>
#include <string>



union Byte{
    uint8_t entireByte_;
    struct{
    uint8_t HalfByteRight_  :4; 
    uint8_t HalfByteLeft_   :4; 
    };
    struct{
    uint8_t doubleBits0 :2; 
    uint8_t doubleBits1 :2; 
    uint8_t doubleBits2 :2; 
    uint8_t doubleBits3 :2; 
    };
    struct{
    uint8_t bit0 :1; 
    uint8_t bit1 :1; 
    uint8_t bit2 :1; 
    uint8_t bit3 :1; 
    uint8_t bit4 :1; 
    uint8_t bit5 :1; 
    uint8_t bit6 :1; 
    uint8_t bit7 :1; 
    };

};


class BitWise
{
private:
Byte byte_;


public:
BitWise(std::string s,uint8_t byte);
const bool getSingleBit(bool ott,uint8_t bit);
const uint8_t getDoubleBits(uint8_t index);
const uint8_t getFourBits(bool ott);
const uint8_t& getEntireByte();
};

