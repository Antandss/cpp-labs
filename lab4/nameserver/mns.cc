#include<iostream>
#include<map>
#include"mns.h"
#include"nameserverinterface.h"

using namespace std;

MNS::MNS(){}

void MNS::insert(const HostName& host, const IPAddress& ip) {
    mns.insert(make_pair(host,ip));
}
bool MNS::remove(const HostName& host){
    auto it = mns.find(host);
    if(it != mns.end()){
        mns.erase(host);
        return true;
    }else return false;
}
IPAddress MNS::lookup(const HostName& host) const{
auto it = mns.find(host);
    if(it != mns.end()){
        return mns.at(it->first);
    }else return NON_EXISTING_ADDRESS;
}