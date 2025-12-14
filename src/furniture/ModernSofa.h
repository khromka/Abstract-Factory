#pragma once
#include "ISofa.h"

class ModernSofa : public ISofa {
public:
    std::string lieOn() const override { return "Lying on a modern sofa"; }
};
