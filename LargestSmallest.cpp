#include <iostream>
using namespace std;
int main(){
    int a,b,c,d; 
    cout<<"Enter 4 integers: "; 
    cin>>a>>b>>c>>d;
    int largest=a, smallest=a;
    if(b>largest) 
        largest=b; 
    if(c>largest) 
        largest=c; 
    if(d>largest) 
        largest=d;
    if(b<smallest) 
        smallest=b; 
    if(c<smallest) 
        smallest=c; 
    if(d<smallest) 
        smallest=d;
    cout<<"Largest: "<<largest<<" Smallest: "<<smallest;
    return 0;
}