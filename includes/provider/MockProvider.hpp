#ifndef __MOCK_PROVIDER_H_INCLUDED__
#define __MOCK_PROVIDER_H_INCLUDED__

#include "provider.hpp"

class MockProvider : public Provider {
    public:
        MockProvider();
        ~MockProvider();
        void connect();
        void disconnect();
        Repository* getRepository();
};

#endif