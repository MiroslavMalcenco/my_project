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
    int masiv[2]={1, 2};
    cout << proizvedenie(masiv[0] , masiv [1]) << endl;
    return 0;
}