#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    cout << m << "+" << n << "=" << m+n << "\n";
    cout << m << "*" << n << "=" << m*n << "\n";
    cout << m << "-" << n << "=" << m-n << "\n";

    if (m % n > 0) {
        cout << m << "/" << n << "=" << m/n << "..." << m%n << "\n";
    } else {
        cout << m << "/" << n << "=" << m/n-1 << "..." << m%n+n << "\n";
    }
    
    
}