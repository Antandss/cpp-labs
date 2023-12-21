#include<iostream>
#include "nameserverinterface.h"
#include "umns.h"
using namespace std; 

void UMNS::insert(const HostName& host, const IPAddress& ip){
umns.insert(make_pair(host,ip));
}
bool UMNS::remove(const HostName& host){
    auto it = umns.find(host);
    if(it != umns.end()){
        umns.erase(host);
        return true; 
    }else return false; 

}
IPAddress UMNS::lookup(const HostName& host) const{
    auto it = umns.find(host);
    if(it!= umns.end()){
        return umns.at(it ->first);
    }else return NON_EXISTING_ADDRESS;

}