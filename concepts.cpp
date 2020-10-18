#include "concepts.h"

#include <iostream>

auto Concepts::concepts() -> void
{
    std::cout << "======================================" << std::endl;
    std::cout << "============== Concepts ==============" << std::endl;

    auto obj = Concepts{};
    
    auto longVal = long{0};
    obj.signedIntsOnly(longVal);
    
    //auto sizetVal = size_t{0};
    //obj.signedIntsOnly(sizetVal);
    // the expression ‘is_signed_v<T> [with T = long unsigned int]’ evaluated to ‘false’
    
    //auto doubleVal = double{.0};
    //obj.signedIntsOnly(doubleVal);
    // the expression ‘is_integral_v<T> [with T = double]’ evaluated to ‘false’
    
    obj.floatsOnly(3.14);
    //obj.floatsOnly(longVal);
    // the expression ‘is_floating_point_v<_Tp> [with _Tp = long int]’ evaluated to ‘false’
    
    std::cout << "============== Concepts ==============" << std::endl;
    std::cout << "======================================" << std::endl;
}

template <SignedIntegral T>
auto Concepts::signedIntsOnly(T val) -> void
{
    std::cout << "signedInt: " << val << std::endl;
}

auto Concepts::floatsOnly(std::floating_point auto fp) -> void
{
    std::cout << "floatsOnly: " << fp << std::endl;
}
