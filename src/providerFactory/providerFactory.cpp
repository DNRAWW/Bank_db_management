#include "../../includes/providerFactory/providerFactory.hpp"
#include "../../includes/provider/MockProvider.hpp"

template <class T>
Provider<T>* providerFactory() {
	return new MockProvider<T>();
};

// linker error prevention

template Provider<Customer>* providerFactory();