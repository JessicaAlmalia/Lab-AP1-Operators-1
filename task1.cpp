#include<iostream>

using namespace std;
int main(){
    int number,a,b,c,d;
    cout<<"Enter a 4 digit number:"<<endl;
    cin>>number;
    a=number+8;
    b=a/3;
    c=b%5;
    d=c*5;
    cout<<"The Final result is: "<<d<<endl;

    return 0;
}
