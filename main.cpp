#include "Clothing.h"
#include "Wardrobe.h"

int main() {
    Wardrobe *myWardrobe = new Wardrobe("My wardrobe");
    myWardrobe->goOut();

    return 0;
}
