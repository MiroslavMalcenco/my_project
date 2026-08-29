#include <iostream>
using namespace std;
int summma(int x , int y) {
    
    return x+y;
}
int main () {
    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;
    cout << summma(x , y) << endl;
    return 0;
}