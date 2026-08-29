#include <iostream>
using namespace std;
int summma(int x , int y) {
    
    return x+y;
}
void masiv() {
    int summa =0;
    int iacheiki[5];
    for (int i = 0; i<5; i++) {
        iacheiki [i] = 5;
    }
    for (int i = 0; i<5; i++) {
    summa+= iacheiki [i];
    }
    cout << summa << endl;
}
int main () {
  masiv();  

    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;
    cout << summma(x , y) << endl;
    return 0;
}

