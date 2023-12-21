#ifndef __CODING_H
#define __CODING_H
#include<iostream>
using namespace std; 


unsigned char encode(unsigned char c){
return c + 1;
}

unsigned char decode(unsigned char c){
return c - 1;
}


#endif
