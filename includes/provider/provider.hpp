#ifndef __PROVIDER_H_INCLUDED__
#define __PROVIDER_H_INCLUDED__

#include "../repository/repository.hpp"

class Provider {
    public:
        virtual void connect() = 0;
        virtual void disconnect() = 0;
        virtual Repository* getRepository() = 0;
        
    protected:
        Repository* repository;
};

#endif