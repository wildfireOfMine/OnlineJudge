#include <iostream>

// 11799 - Horror Dash - Iván - Visual Code Studio

using namespace std;

int main(){

    int loop = 0;
    cin >> loop;
    for (int i = 1; i<=loop; i++) {
        int subloop = 0;
        cin >> subloop;
        int creature = 0;
        int mostScary = 0;
        for (int j = 0; j<subloop; j++) {
            cin >> creature;
            if (i == 0) {
                mostScary = creature;
            } else if (creature > mostScary) {
                mostScary = creature;
            }
        }
        cout << "Case " << i << ": " << mostScary << endl;
    }
    return 0;
}
