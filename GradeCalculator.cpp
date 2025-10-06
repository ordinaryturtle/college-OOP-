#include <iostream>
using namespace std;
int main(){
    double m1,m2,m3,m4,m5;
    cout<<"Enter marks of 5 subjects: ";
    cin>>m1>>m2>>m3>>m4>>m5;
    double per=(m1+m2+m3+m4+m5)/5.0;
    cout<<"Percentage: "<<per<<"%\n";
    if(per>=90) cout<<"Grade A (Distinction)";
    else if(per>=75) cout<<"Grade B (First Division)";
    else if(per>=60) cout<<"Grade C (Second Division)";
    else if(per>=40) cout<<"Grade D (Pass)";
    else cout<<"Fail";
    return 0;
}