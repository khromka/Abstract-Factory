#include <iostream>
#include "factory/ModernFurnitureFactory.h"
#include "factory/VictorianFurnitureFactory.h"

void clientCode(const IFurnitureFactory& factory) {
    auto chair = factory.createChair();
    auto sofa = factory.createSofa();
    std::cout << chair->sitOn() << "\n";
    std::cout << sofa->lieOn() << "\n";
}

int main() {
    ModernFurnitureFactory modernFactory;
    VictorianFurnitureFactory victorianFactory;

    std::cout << "Modern set:\n";
    clientCode(modernFactory);

    std::cout << "\nVictorian set:\n";
    clientCode(victorianFactory);

    return 0;
}
