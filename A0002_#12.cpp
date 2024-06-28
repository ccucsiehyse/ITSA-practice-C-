#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m;
    cin >> m;

    cout << "NT10=" << m/10 << "\n";
    cout << "NT5=" << m%10/5 << "\n";
    cout << "NT1=" << m%5 << "\n";
}