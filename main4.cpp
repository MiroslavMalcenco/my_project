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
    int masiv[5]={1, 2, 3, 4, 5};
    int p;
    p= masiv[0];
    for (int i=1; i<5; i++){
        p = proizvedenie(p, masiv[i]);
    }
    cout <<p;
    return 0;
}