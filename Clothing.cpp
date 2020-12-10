#include "Clothing.h"

Clothing::Clothing(string theDescription, string theName, string theLocation, string theColour, int theClothSize,
                   type theClothType) {
    description = theDescription;
    name = theName;
    location = theLocation;
    colour = theColour;
    clothSize = theClothSize;
    clothType = theClothType;
    cout << description << " " << colour << " " << name << ", Size: " << clothSize << ", Type: " << clothType
         << ", Bought in: " << location << endl;
}

bool Clothing::isBig() {
    return this->clothSize >= 36;
}

Clothing::~Clothing() = default;

