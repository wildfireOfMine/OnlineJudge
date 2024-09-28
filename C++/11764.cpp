#include <iostream>

// 11764 - Jumping Mario - Iván - Visual Code Studio

using namespace std;

int main(){
    
    int loop = 0;
    cin >> loop;
    for (int i = 1; i<=loop; i++) {
        int subloop = 0;
        cin >> subloop;
        int ups = 0;
        int downs = 0;
        int left = 0;
        int right = left;
        for (int j = 0; j<subloop; j++) {
            cin >> left;
            if (j > 0) {
                if (left > right) {
                    ups++;
                } else if (right > left) {
                    downs++;
                }
            }
            right = left;
        }
        cout << "Case " << i << ": " << ups << " " << downs << endl;
    }
    return 0;
}
