#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int desks = (a + 1) / 2 + (b + 1) / 2 + (c + 1) / 2;
    
    cout << desks << endl;
    // put your code here
    return 0;
}