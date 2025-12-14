#pragma once
#include "ISofa.h"

class VictorianSofa : public ISofa {
public:
    std::string lieOn() const override { return "Lying on a victorian sofa"; }
};
