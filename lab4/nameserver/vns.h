#ifndef VNS_H
#define VNS_H

#include<iostream>
#include"nameserverinterface.h"
#include<vector>


class VNS : public NameServerInterface{
    public: 
    void insert(const HostName& host, const IPAddress& IP);
    IPAddress lookup(const HostName& host) const;
    bool remove(const HostName& host);
    private: 
    std::vector<std::pair<HostName, IPAddress>> vns;
};

#endif