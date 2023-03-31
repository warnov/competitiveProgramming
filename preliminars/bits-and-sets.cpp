#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int x=(1<<1)|(1<<3)|(1<<4)|(1<<8); //Representing the set {1,3,4,8}
    //A binary that has 1 in the positions of the elements of the set: 000000000000000000000010011010
    //To get this, we just "or" 10, 1000, 10000, 100000000
    int y=(1<<3)|(1<<6)|(1<<8)|(1<<9);
    //Representing the set {3,6,8,9}
    
    //Now we are going to make the union of the sets through the "or" operator between the binary representations of the sets
    int z=x|y;
    //Let's print the cardinality of the union
    cout<<__builtin_popcount(z)<<endl;

    //The following code goes through the subsets of {0,1,...,n-1}
    int n=4;
    for(int i=0;i<(1<<n);i++){
        //This is the binary representation of the set
        cout<<bitset<32>(i)<<endl;}

    //The following code goes through the subsets of a set x
    x=5;
    int b=0;
    do{
        //This is the binary representation of the set
        cout<<bitset<32>(b)<<endl;             
    }while(b=(b-x)&x);    
}