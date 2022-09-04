#pragma once
#include <string>


class Unit {
public:
    Unit() {}
    Unit(std::string name, std::string fraction, int size) : name_(name), fraction_(fraction), size_(size) {}

    void setName(std::string name);

    std::string getName();

    void setFraction(std::string fraction);

    std::string getFraction();

    void setSize(int size);

    int getSize();

    void showMyUnit();

    static void CheckName(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2);
    static void CheckFraction(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2);
    static void CheckSize(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2);
    static void CheckAll(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2);

private:
    std::string name_ = "";
    std::string fraction_ = "";
    int size_ = 0;

};
