#include "../../includes/providerFactory/providerFactory.hpp"
#include "../../includes/provider/MockProvider.hpp"

Provider* providerFactory() {
    return new MockProvider();
}