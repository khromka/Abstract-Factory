#pragma once
#include "IChair.h"

class ModernChair : public IChair {
public:
    std::string sitOn() const override { return "Sitting on a modern chair"; }
};
