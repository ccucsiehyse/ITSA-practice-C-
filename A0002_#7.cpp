#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m, n, p;
    cin >> m >> n >> p;

    if (m > n && m > p) {
        cout << m << "\n";
    } else if (n > m && n > p) {
        cout << n << "\n";
    } else {
        cout << p << "\n";
    }    
}