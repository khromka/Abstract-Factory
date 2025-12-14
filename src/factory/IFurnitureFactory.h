#pragma once
#include <memory>
#include "../furniture/IChair.h"
#include "../furniture/ISofa.h"

class IFurnitureFactory {
public:
    virtual ~IFurnitureFactory() = default;
    virtual std::unique_ptr<IChair> createChair() const = 0;
    virtual std::unique_ptr<ISofa> createSofa() const = 0;
};
