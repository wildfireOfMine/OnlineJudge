#include <iostream>

// 621 - Secret Research - Iván - Visual Code Studio

using namespace std;

int main(){
    
    int loop = 0;
    string digit = "";
    cin >> loop;
    for (int i = 0; i<loop; i++) {
        cin >> digit;
        if (digit == "1" || digit == "4" || digit == "78") {
            cout << "+" << endl;
        } else if (digit.at(digit.length()-2) == '3' && digit.at(digit.length()-1) == '5') {
            cout << "-" << endl;
        } else if (digit.at(0) == '1' && digit.at(1) == '9' && digit.at(2) == '0') {
            cout << "?" << endl;
        } else {
            cout << "*" << endl;
        }

    }
    return 0;
}
