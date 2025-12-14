#pragma once
#include "IChair.h"

class VictorianChair : public IChair {
public:
    std::string sitOn() const override { return "Sitting on a victorian chair"; }
};
