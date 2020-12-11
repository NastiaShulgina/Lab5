#include "Wardrobe.h"

Wardrobe::Wardrobe(string theName) {
    name = theName;
    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++) {
        if (i == 0) {
            Clothing *cloth = new Clothing("Nice", "Vans", "Forum Lviv", "White", 36, Clothing::SHIRT);
            Array[i] = cloth;
        }
        if (i == 1) {
            Clothing *cloth = new Clothing("Stylish", "Nike", "Viktoria Gardens", "Rose Gold", 37, Clothing::SHOES);
            Array[i] = cloth;
        }
        if (i == 2) {
            Clothing *cloth = new Clothing("Cool", "Columbia", "Spartak", "Red", 38, Clothing::JACKET);
            Array[i] = cloth;
        }
        if (i == 3) {
            Clothing *cloth = new Clothing("Ripped", "Bershka", "Halytskyy Rynok", "Denim", 35, Clothing::JEANS);
            Array[i] = cloth;
        }

    };
}

void Wardrobe::goOut() {
    int Sum = 0;
    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++) {
        Sum += 1;
    }
    if (Sum >= 3){
        cout << "Ready" << endl;
    }
    else {
        cout << "Not ready!" << endl;
    }
}

Wardrobe::~Wardrobe() = default;
