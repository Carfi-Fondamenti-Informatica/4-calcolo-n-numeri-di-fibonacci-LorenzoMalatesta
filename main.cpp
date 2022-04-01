#include <iostream>
using namespace std;

int main() {
    int n=0, i, num_0=0, num_1=1, num_2=0;
    cin >> n;
    if (n>=2) {
        for (i=0; i<n; i++) {
            num_2=num_0+num_1;
            cout << num_2 << endl;
            num_1=num_0;
            num_0=num_2;
        }
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
