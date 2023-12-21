#include<iostream>
#include "vns.h"
#include "nameserverinterface.h"

using std::string;
using std::vector; 
using std::pair;
using std::__unsigned_types;
using std::find_if;
using namespace std;


void VNS::insert(const HostName& host, const IPAddress& IP){
    pair<HostName, IPAddress> p = std::make_pair(host,IP);
    vns.emplace_back(p);
}
IPAddress VNS::lookup(const HostName& host) const{
    auto it = find_if(vns.begin(), vns.end(), [&host](const pair<string, IPAddress>& p){return p.first == host;});
    if(it == vns.end()){
        return NON_EXISTING_ADDRESS;
    }else{
        int index = distance(vns.begin(), it);
        return vns[index].second;
    }
}
bool VNS::remove(const HostName& host){
auto it = find_if(vns.begin(), vns.end(), [host](const pair<string, IPAddress>& p){return p.first == host;});
    if(it == vns.end()){
        return false;
    }else{
        //int index = distance(dns.begin(), it);
        vns.erase(it);
        return true;
    }
}
