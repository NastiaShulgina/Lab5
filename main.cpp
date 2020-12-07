#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, x, sum = 0;

    Label:
    cout << "Put the numbers A and B so that A < B!" << endl;

    cin >> a;
    cin >> b;


    if (a >= b) {
        Again:
        cout << "A is > or = B." << endl << "Press button C to continue." << endl << "Press button E to stop." << endl;
        string variable;
        cin >> variable;
        if (variable == "C" || variable == "c") {
            goto Label;
        }
        else if (variable == "E" || variable == "e") {
            goto End;
        }
        else {
            cout << "Error. Neither C nor E was put. So, again:" << endl;
            goto Again;
        }
    }
    else if (a < b) {
        x = a + 1;
        if (x == b) {
            cout << "There are no numbers between A and B." << endl;
        }
        else if (x < b) {
            if (x % 2 == 0 && x + 1 == b) {
                cout << "There is only 1 number between A and B and it is even.";
            }
            else {
                do {
                    if (x % 2 == 1) {
                        cout << "" << x << " ";
                        x += 1;
                    } else {
                        x += 1;
                    }
                } while (x < b);
            }
        }
    }
    End:
    return 0;
}