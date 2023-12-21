#include<iostream>
#include "enumerator.h"
using std::string;
using std::endl;
using std::cout;

Enumerator::Enumerator(unsigned int m){
    primes = "CC" + string(m - 1, 'P');
    sieve(primes);
}

void Enumerator::sieve(string& primes){
    std::string::size_type pos = primes.find("P");

    while(pos != string::npos){
        string::size_type i = pos + 1; 

    while( i != string::npos){
        if(i % pos == 0)
            primes[i] = 'C';
        i = primes.find("P", i + 1);
    }
pos = primes.find("P", pos + 1 );
    }
}

string Enumerator::get_prime() const{
    return primes;
}


string::size_type Enumerator::get_largest_prime() const{
    return primes.rfind('P');
}