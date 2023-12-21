#ifndef MNS_H
#define MNS_H

#include"nameserverinterface.h"
#include<map>

class MNS : public NameServerInterface{
public:
void insert(const HostName& host, const IPAddress& ip);
bool remove(const HostName& host);
IPAddress lookup(const HostName& host) const;
MNS();
private:
std::map<HostName, IPAddress> mns;

};

#endif
