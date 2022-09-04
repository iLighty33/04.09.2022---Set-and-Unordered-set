#pragma once
#include <iostream>
#include <set>
#include "Unit.h"

void Unit::setName(std::string name) {
	this->name_ = name;
}

std::string Unit::getName() {
    return this->name_;
}

void Unit::setFraction(std::string fraction) {
    this->fraction_ = fraction;
}

std::string Unit::getFraction() {
    return this->fraction_;
}

void Unit::setSize(int size) {
    this->size_ = size;
}

int Unit::getSize() {
    return this->size_;
}

void Unit::showMyUnit() {
    std::cout << name_ << " " << fraction_ << " " << size_ << std::endl;
}

void Unit::CheckName(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2) {

    std::set<Unit*>::iterator i;
    std::set<Unit*>::iterator j;

    for (i = myUnitCollection2.begin(); i != myUnitCollection2.end(); i++)
        for (j = myUnitCollection1.begin(); j != myUnitCollection1.end(); j++)
            if (((*i)->getName() == (*j)->getName()))
                std::cout << "Есть совпадения по имени:" << ((*i)->getName()) << std::endl;
}

void Unit::CheckFraction(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2) {

    std::set<Unit*>::iterator i;
    std::set<Unit*>::iterator j;

    for (i = myUnitCollection2.begin(); i != myUnitCollection2.end(); i++)
        for (j = myUnitCollection1.begin(); j != myUnitCollection1.end(); j++)
            if (((*i)->getFraction() == (*j)->getFraction()))
                std::cout << "Есть совпадения по фракции:" << ((*i)->getFraction()) << std::endl;

}

void Unit::CheckSize(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2) {

    std::set<Unit*>::iterator i;
    std::set<Unit*>::iterator j;

    for (i = myUnitCollection2.begin(); i != myUnitCollection2.end(); i++)
        for (j = myUnitCollection1.begin(); j != myUnitCollection1.end(); j++)
            if (((*i)->getSize() == (*j)->getSize()))
                std::cout << "Есть совпадения по размеру:" << ((*i)->getSize()) << std::endl;
}

void Unit::CheckAll(std::set <Unit*>& myUnitCollection1, std::set <Unit*>& myUnitCollection2) {

    std::set<Unit*>::iterator i;
    std::set<Unit*>::iterator j;

    for (i = myUnitCollection2.begin(); i != myUnitCollection2.end(); i++)
        for (j = myUnitCollection1.begin(); j != myUnitCollection1.end(); j++)
            if (((*i)->getName() == (*j)->getName()) && ((*i)->getFraction() == (*j)->getFraction()) && ((*i)->getSize() == (*j)->getSize()))
                std::cout << "Есть совпадения по всем параметрам:" << ((*i)->getName()) << " " << ((*i)->getFraction()) << " " << ((*i)->getSize()) << std::endl;

}