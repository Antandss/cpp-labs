#include<iostream>
#include<algorithm>
#include"hns.h"
#include"nameserverinterface.h"
using namespace std; 

HNS::HNS(size_t size) : size(size), hmap(size){}

void HNS::insert(const HostName& host, const IPAddress& ip){
size_t t = hash<string>{}(host) % size;
hmap[t].push_back(make_pair(host, ip));
}
bool HNS::remove(const HostName& host){
    size_t t = hash<string>{}(host) % size;
    auto it = find_if(hmap[t].begin(), hmap[t].end(), [&host](const pair<HostName, IPAddress>& p){return p.first == host;});
    if(it != hmap[t].end()){
        hmap[t].erase(it);
        return true;
    }else return false;
}
IPAddress HNS::lookup(const HostName& host) const{
    size_t t = hash<string>{}(host) % size;
    auto it = find_if(hmap[t].begin(), hmap[t].end(), [&host](const pair<HostName, IPAddress>& p){return p.first == host;});
    if(it != hmap[t].end()){
        return it->second; 
}
else return NON_EXISTING_ADDRESS; 
}