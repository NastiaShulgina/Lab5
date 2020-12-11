#include "Clothing.h"

class Wardrobe {
public:
    string name;
    Clothing *Array[4];

    Wardrobe() = default;

    Wardrobe(string theName);

    void goOut();

    ~Wardrobe();
};
