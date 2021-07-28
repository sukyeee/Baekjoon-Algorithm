//10824
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string A,B,C,D;
    unsigned long X, Y;
    cin >> A >> B >> C >> D;
    
    X = stol(A + B);
    Y = stol(C + D);
    
    cout << X+Y;
    
    return 0;
}
