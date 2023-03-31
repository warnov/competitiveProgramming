#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x = 5;
    cout<<"x:\t"<<bitset<32>(x)<<endl;
    cout<<"-x:\t"<<bitset<32>(-x)<<endl;
    int b = 0;
    do {
        // This is the binary representation of the set
        cout << "b:\t"<< b << "\tBit:\t"<<bitset<32>(b)<<endl;
        cout << "b-x:\t"<< b-x << "\tBit:\t"<<bitset<32>(b-x) << endl;
    } while (b = (b - x) & x);
}