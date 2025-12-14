#pragma once
#include <string>

class ISofa {
public:
    virtual ~ISofa() = default;
    virtual std::string lieOn() const = 0;
};
