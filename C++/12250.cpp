#include <iostream>

// 12250 - Language Detection - Iván - Visual Code Studio

using namespace std;

int main(){
    
    string s = "";
    cin >> s;
    int i = 1;
    while (s != "#") {
        cout << "Case " << i << ": ";
        if (s == "HELLO"){
            cout << "ENGLISH" << endl;
        } else if (s == "HOLA"){
            cout << "SPANISH" << endl;
        } else if (s == "HALLO"){
            cout << "GERMAN" << endl;
        } else if (s == "BONJOUR"){
            cout << "FRENCH" << endl;
        } else if (s == "CIAO"){
            cout << "ITALIAN" << endl;
        } else if (s == "ZDRAVSTVUJTE"){
            cout << "RUSSIAN" << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
        cin >> s;
        i++;
    }
    return 0;
}
