#include <iostream>
 
using namespace std;

int main(){

    double marks;
    cout << "What marks did you get in your examination\n";
    cin >> marks;

    if (marks > 70){
        cout <<"You had an A";
    }else if ( marks > 60){
        cout <<"You had a B\n";
    }else if (marks > 50){
        cout <<"You had a C\n";
    }else if (marks > 40){
        cout << "You had a D\n";
    }else{
        cout << "You had an F\n";
    }

return 0;
}