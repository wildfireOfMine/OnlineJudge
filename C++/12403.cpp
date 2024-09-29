#include <iostream>

// 12403 - Save Setu - Iván - Visual Code Studio

using namespace std;

int main(){
    
    int loop = 0;
    cin >> loop;
    string operation = "";
    int sum = 0;
    int donations = 0;
    for (int i = 1; i<=loop; i++) {
        cin >> operation;
        if (operation == "donate") {
            cin >> sum;
            donations += sum;
        } else {
            cout << donations << endl;
        }
    }
    return 0;
}
