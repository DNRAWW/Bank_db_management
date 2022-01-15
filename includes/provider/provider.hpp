#ifndef __PROVIDER_H_INCLUDED__
#define __PROVIDER_H_INCLUDED__

#include "../repository/repository.hpp"

class Provider {
    public:
        Provider();
        virtual void connect() = 0;
        virtual void disconnect() = 0;
        virtual Repository& getRepository() = 0;


    private:
        Repository &repository;
};

#endif