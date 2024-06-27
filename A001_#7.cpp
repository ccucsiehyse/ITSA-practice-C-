#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if (n == 1) {
        cout<< "    *\n"
            << "   * *\n"
            << "  *   *\n"
            << " *     *\n"
            << "*********\n";
    } else if (n == 2) {
        cout<< "    *\n"
            << "   ***\n"
            << "  *****\n"
            << " *******\n"
            << "*********\n";
    } else {
        cout<< "*********\n"
            << " *******\n"
            << "  *****\n"
            << "   ***\n"
            << "    *\n";
    }
}