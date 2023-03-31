#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x;
    cin>>x;
    for (int k = 31; k >= 0; k--){
        //This is a mas of 1 and 0 made with the bit shift operator << that adds k 0's to the right of 1
        if(x&(1<<k)){
            cout<<1;
        }else{
            cout<<0;
        }            
    }
    //This can also be done using the bitset library
    cout<<endl<<"Bitset: "<<bitset<32>(x)<<endl;   
    //Here we explore the gcc's built-in functions
    cout<<__builtin_clz(x)<<endl; 
    cout<<__builtin_ctz(x)<<endl; 
    cout<<__builtin_popcount(x)<<endl;
    cout<<__builtin_parity(x)<<endl; 
}