#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    
    cout << num%10 << ",";
    cout << num%100/10 << ",";
    cout << num%1000/100 << ",";
    cout << num/1000 << "\n";
}