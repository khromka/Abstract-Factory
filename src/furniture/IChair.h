#pragma once
#include <string>

class IChair {
public:
    virtual ~IChair() = default;
    virtual std::string sitOn() const = 0;
};
