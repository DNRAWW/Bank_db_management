#ifndef __PROVIDER_FACTORY_H_INCLUDED__
#define __PROVIDER_FACTORY_H_INCLUDED__

#include "../provider/provider.hpp"

// Returns a provider for managment class to work with.
// Needs to be here so that we easily can change
// which provider we are going to use.

template <class T>
Provider<T>* providerFactory();

#endif