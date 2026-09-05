#include <iostream>
using namespace std;
int proizvedenie (int x , int y) {

    return x*y;
}
void dub () {
    cout << "U lumorie dub Zelenii" << endl;
}
int main () {
    dub();
    int x=0;
    int y=0;
    cin >> x;
    cin >> y;
    cout << proizvedenie(x , y) << endl;
    return 0;
}