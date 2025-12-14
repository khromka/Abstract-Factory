#pragma once
#include "IFurnitureFactory.h"
#include "../furniture/ModernChair.h"
#include "../furniture/ModernSofa.h"

class ModernFurnitureFactory : public IFurnitureFactory {
public:
    std::unique_ptr<IChair> createChair() const override {
        return std::make_unique<ModernChair>();
    }
    std::unique_ptr<ISofa> createSofa() const override {
        return std::make_unique<ModernSofa>();
    }
};
