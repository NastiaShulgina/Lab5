#pragma once

#include <tuple>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Clothing {
public:
    string description;
    string name;
    string location;
    string colour;
    int clothSize;
    enum type {
        SHIRT, JEANS, JACKET, SHOES
    } clothType;


    Clothing() = default;

    Clothing(string theDescription, string theName, string theLocation, string theColour, int theClothSize,
             type theClothType);

    bool isBig();

    ~Clothing();
};