# Abstract-Factory in C++

A clean example of the Abstract Factory pattern with modern C++ (C++17), CMake and tests.

## Why
- Create families of related objects without specifying their concrete classes.
- Ensure consistency across products (e.g., Modern vs Victorian furniture).

## Structure
- src/furniture: Product interfaces and concrete products
- src/factory: Abstract factory and concrete factories
- tests: Lightweight behavior tests

## Build
```bash
cmake -S . -B build
cmake --build build
./build/abstract_factory
