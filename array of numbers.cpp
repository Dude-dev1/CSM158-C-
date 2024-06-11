// code to print 10 by 10 array of numbers
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    for ( int i =  0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
           int cast = i + j * 10;
           cout << setw(3) << cast;
        }
        cout << endl;
    }

    return 0;
}