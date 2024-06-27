#include <iostream>

using namespace std;

int main(){
    double m, n, h;
    cin >> m >> n >> h;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Trapezoid area:" << (m+n)*h/2 << "\n";
}