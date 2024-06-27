#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i=10000; i>=1; i/=10){
        int star = num / i;
        while(star--) cout << "*";
        cout << "\n";
        num %= i;
    }
}