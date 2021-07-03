#include "bitwise.h"

BitWise::BitWise(std::string s,uint8_t byte){
    if(s.size()>0){
        if(byte >= 0 || byte<s.size()){
            byte_.entireByte_=static_cast<uint8_t>(s.at(byte));
        }
        else if(byte < 0){
            byte_.entireByte_=static_cast<uint8_t>(s.at(0));
        }
        else{
            byte_.entireByte_=static_cast<uint8_t>(s.at(s.size()-1));
        }
    }
}
const bool BitWise::getSingleBit(bool ott,uint8_t bit){
    bool result=false;
    if(ott==false){
        result= static_cast<bool>( ( byte_.HalfByteRight_ & (1<<bit) ) >> bit );
    }
    else{
        result= static_cast<bool>( ( byte_.HalfByteLeft_ & (1<<bit) ) >> bit );
    }

    return result;
}
const  uint8_t BitWise::getDoubleBits(uint8_t index){
    uint8_t result=0;
    switch(index)
    {
        case(0):
        {
            result=byte_.doubleBits0;
        }
        break;
        case(1):
        {
            result=byte_.doubleBits1;
        }
        break;
        case(2):
        {
            result=byte_.doubleBits2;
        }
        break;
        case(3):
        {
            result=byte_.doubleBits3;
        }
        break;
        default: 
        break;
    }

    return result;
}
const uint8_t BitWise::getFourBits(bool ott){
    uint8_t result=0;
    if(ott==false){
        result = byte_.HalfByteRight_;
    }
    else{
        result = byte_.HalfByteLeft_;
    }


    return result;
}
const uint8_t& BitWise::getEntireByte(){
    return byte_.entireByte_;
}