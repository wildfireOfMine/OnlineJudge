#include <iostream>
#include <string>

// 11332 - Summing Digits - Iván - Visual Code Studio

using namespace std;

int main(){
    
    string digit = "";
    cin >> digit;
    while (digit != "0") {
        if (digit.length() == 1) {
            cout << digit << endl;
        } else {
            int total;
            while (digit.length() > 1) {
                total = 0;
                for (int i = 0; i<digit.length(); i++) {
                    total += digit.at(i)-48;
                }
                digit = to_string(total);
            }
            cout << total << endl;
        }
        cin >> digit;
    }
    return 0;
}
