#include <iostream>
#include <string>

using namespace std;

class Clothing {
public:
    string name;
    string description;
    string location;
    string colour;
    int size;
    enum type {
        SHIRT, JEANS, JACKET
    } mytype;

    Clothing(string Xname, string Xdescription, string Xlocation, string Xcolour, int Xsize, int m_type) {
        name = Xname;
        description = Xdescription;
        location = Xlocation;
        colour = Xcolour;
        size = Xsize;
        if (m_type == 0)
            mytype = type::SHIRT;

        else if (m_type == 1)
            mytype = type::JEANS;

        else if (m_type == 2)
            mytype = type::JACKET;

    }

    ~Clothing() {
    }

    /*type Gettype() {
        return mytype;
    }*/
};


class Wardrobe {
public:
    Clothing *arr[3];

    void Sort() {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
            for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); ++j) {
                if (arr[i]->size > arr[j]->size) {
                    Clothing *temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    string goOut(Clothing *cloth) {
        int n = 0;
        int k = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
            if (arr[i]->mytype == arr[k]->mytype)
                cout << "not ready" << endl; n++;
            if (n >= sizeof(arr - 3) / sizeof(arr[0]))
                cout << "Ready" << endl;
            else
                cout << "not ready1" << endl;
        }
        return "asd";
    }

    Wardrobe() {
        string name;
        string description;
        string location;
        string colour;
        int size;
        int m_type;
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
            /*cout << "Input the type of a cloth:";
            cin >> m_type;
            cout << "Input the name of cloth:";
            cin >> name;
            cout << "Input the description:";
            cin >> description;
            cout << "Input the location:";
            cin >> location;
            cout << "Input the colour:";
            cin >> colour;
            cout << "Input the size:";
            cin >> size;*/
            cout << "Input the type of a cloth:" << endl;
            m_type = i;
            cout << "Input the name of cloth:" << endl;
            name = "a+%d";
            cout << "Input the description:" << endl;
            description = "a+%d", i;
            cout << "Input the location:" << endl;
            location = "a+%d", i;
            cout << "Input the colour:" << endl;
            colour = "a+%d", i;
            cout << "Input the size:" << endl;
            size = 3 - i;
            Clothing *cloth = new Clothing(name, description, location, colour, size, m_type);
            arr[i] = cloth;
        }
    }
};

int main() {
    Wardrobe *mywardrobe = new Wardrobe();
    mywardrobe->Sort();
    for (int i = 0; i < 3; i++) {
        cout << mywardrobe->arr[i]->mytype << mywardrobe->arr[i]->name << mywardrobe->arr[i]->size << endl;
    }
    cout << mywardrobe->goOut(reinterpret_cast<Clothing *>(mywardrobe)) << endl;
    return 0;
}