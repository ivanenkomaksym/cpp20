#include "concepts.h"

#include <iostream>

auto Concepts::concepts() -> void
{
    auto obj = Concepts{};
    
    auto longVal = long{0};
    obj.signedIntsOnly(longVal);
    
    //auto sizetVal = size_t{0};
    //obj.signedIntsOnly(sizetVal);
    // the expression ‘is_signed_v<T> [with T = long unsigned int]’ evaluated to ‘false’
    
    //auto doubleVal = double{.0};
    //obj.signedIntsOnly(doubleVal);
    // the expression ‘is_integral_v<T> [with T = double]’ evaluated to ‘false’
}

template <SignedIntegral T>
auto Concepts::signedIntsOnly(T val) -> void
{
    std::cout << "signedInt: " << val << std::endl;
}
