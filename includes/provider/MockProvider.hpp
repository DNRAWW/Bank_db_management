#ifndef __MOCK_PROVIDER_H_INCLUDED__
#define __MOCK_PROVIDER_H_INCLUDED__

#include "provider.hpp"

template <class T>
class MockProvider : public Provider<T> {
    public:
        MockProvider();
        ~MockProvider();
        void connect();
        void disconnect();
        Repository<T>* getRepository();
};

#endif