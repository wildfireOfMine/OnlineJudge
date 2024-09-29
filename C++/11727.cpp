#include <iostream>

// 11727 - Cost Cutting - Iván - Visual Code Studio

using namespace std;

int main(){
    
    int loop = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> loop;
    for (int i = 1; i<=loop; i++) {
        cin >> x;
        cin >> y;
        cin >> z;
        cout << "Case " << i << ": ";
        if (x>y && x<z || x<y && x>z) {
            cout << x << endl;
        } else if (y>z && y<x || y<z && y>x) {
            cout << y << endl;
        } else if (z>y && z<x || z<y && z>x) {
            cout << z << endl;
        }
    }
    return 0;
}
