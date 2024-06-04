#include <iostream>
#include <ctime>

using namespace std;

int main(){

    cout << "Ready to see a random number??\n";
    srand(time(nullptr));
    int random = rand() %  10000000 + 1;
    cout << random;

    return 0;
}