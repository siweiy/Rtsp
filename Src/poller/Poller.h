#ifndef __POLLER_H_
#define __POLLER_H_

class Poller
{
public:
    virtual ~Poller();
    
    virtual bool addIOEvent() = 0;
    virtual bool updateIOEvent() = 0;
    virtual bool removeIOEvent() = 0;
    virtual void handleEvent() = 0;

protected:
    Poller();
};

#endif