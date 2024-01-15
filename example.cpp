#include <iostream>
using namespace std;

int main() {

    int  a= 1;
    for(int i = 0; i < 5; i++) {
        for(int k=1; k<= 5-i;k++)
            cout <<"  ";

        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                a= 1;
            else
                a = a*(i-j+1)/j;

            cout << a << "   ";
        }
        cout << endl;
    }

    return 0;
}
