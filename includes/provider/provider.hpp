#ifndef __PROVIDER_H_INCLUDED__
#define __PROVIDER_H_INCLUDED__

#include "../repository/repository.hpp"

template <class T>
class Provider {
    public:
        virtual void connect() = 0;
        virtual void disconnect() = 0;
        virtual Repository<T>* getRepository() = 0;
        
    protected:
        Repository<T>* repository;
};

#endif