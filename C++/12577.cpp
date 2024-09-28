#include <iostream>

// 12577 - Hajj-e-Akbar - Iván - Visual Code Studio

using namespace std;

int main(){
    string chant = "";
    cin >> chant;
    int i = 0;
    while (chant != "*") {
        i++;
        if (chant == "Hajj") {
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        } else if (chant == "Umrah") {
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        }

        cin >> chant;
    }

    return 0;
}
