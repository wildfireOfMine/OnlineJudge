#include <iostream>

// 11942 - Lumberjack Sequencing - Iván - Visual Code Studio

using namespace std;

int main(){
    
    int loop = 0;
    cin >> loop;
    cout << "Lumberjacks:" << endl;
    for (int i = 0; i<loop; i++) {
        bool upwards = false;
        bool downwards = false;
        int auxLumbers = 0;
        int lumbers = 0;
        int j = 0;
        for (int j = 0; j<10; j++) {
            cin >> lumbers;
            if (j > 0 && !upwards && auxLumbers > lumbers) {
                upwards = true;
            } else if (j > 0 && !downwards && auxLumbers < lumbers) {
                downwards = true;
            }
            auxLumbers = lumbers;
        }
        if (upwards && downwards) {
            cout << "Unordered" << endl;
        } else {
            cout << "Ordered" << endl;
        }
    }
    
    return 0;
}
