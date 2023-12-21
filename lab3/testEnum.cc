#include<iostream>
#include "enumerator.h"

using std::string;
using std::cout;
using std::endl;

void testPrime11(){
    Enumerator er(11);
    string answer = "CCPPCPCPCCCP";
    if(er.get_prime() == answer){
        cout << "testPrime11 is Correct" << endl;
    }else cout << "testPrime11 is Incorrect" << endl;
}
void testPrime35(){
    Enumerator er(35);
    string answer = "CCPPCPCPCCCPCPCCCPCPCCCPCCCCCPCPCCCC";
    if(er.get_prime() == answer){
        cout << " testPrime35 is Correct" << endl;
    }else cout <<"testPrime35 is Incorrect" << endl;
}

void testLargest(){
    unsigned int prime = 99991;
    Enumerator er(100000);
    cout << er.get_largest_prime() << endl;
    if(er.get_largest_prime() == prime){
        cout << "Success" << endl; 
    }else cout << "Failed" << endl;
}

int main(){
    testPrime11();
    testPrime35();
    testLargest();
}