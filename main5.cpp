#include <iostream>
using namespace std;
int summa (int x , int y) {
    return x+y;
}
int main () {
    int p = 0;
    int masiv[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     p= masiv[0];
    for (int i=1; i<10; i++){
        p = summa(p, masiv[i]);
    }
cout << p << endl;
return 0;
}