#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    
    cout << num/1000 << "\n";
    cout << num%1000/100 << "\n";
    cout << num%100/10 << "\n";
    cout << num%10 << "\n";
}