#include <iostream>
#include "FlagSet.h"

enum class TestEnum : uint64_t
{
    One,
    Two,
    Three,
    Four,
    Five,
    _eCount = 5
};

using FL = FlagSet< TestEnum >;

int main(int, char**) {

    FL flags;
    flags = TestEnum::Two;
    flags |= TestEnum::Three | TestEnum::Five;

    std::cout << flags.to_string() << std::endl;

    return 0;
}
