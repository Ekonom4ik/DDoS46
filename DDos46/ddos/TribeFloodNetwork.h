#ifndef TRIBEFLOODNETWORK_H_
#define TRIBEFLOODNETWORK_H_

#include <omnetpp.h>
Define_Module(TribeFloodNetwork);
Define_Channel(TribeFloodNetworkChannel);

class TribeFloodNetwork : public cSimpleModule {
public:
    TribeFloodNetwork();
    virtual ~TribeFloodNetwork();

protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage* msg) override;
};


#endif /*TRIBEFLOODNETWORK_H_*/
