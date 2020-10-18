#include <concepts>

template <class T>
concept SignedIntegral = std::is_integral_v<T> &&
                         std::is_signed_v<T>;

class Concepts
{
public:
    static auto concepts() -> void;
    
private:
    template <SignedIntegral T> // no SFINAE here!
    auto signedIntsOnly(T val) -> void;
    
    auto floatsOnly(std::floating_point auto fp) -> void;
};
