#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned int m, n, p;
    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> n;
        
        if(n > 31) {
            cout << "Value of more than 31\n";
        } else {
            p = 1;
            while(n--) p *= 2;
            cout << p << "\n";
        }
    }
}