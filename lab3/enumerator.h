

#ifndef ENUMERATOR_H
#define ENUMERATOR_H
#include<string>
class Enumerator{
public:
Enumerator(unsigned int m);
std::string get_prime() const;
std::string::size_type get_largest_prime() const;
void sieve(std::string& primes);
private: 

std::string primes;
};
#endif