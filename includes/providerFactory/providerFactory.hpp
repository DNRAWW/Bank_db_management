#ifndef __PROVIDER_FACTORY_H_INCLUDED__
#define __PROVIDER_FACTORY_H_INCLUDED__

#include "../provider/provider.hpp"

// It returns a provider for managment class to work with.
// It needs to be here so that we easily can change
// which provider we are going to use use.

Provider* providerFactory();

#endif