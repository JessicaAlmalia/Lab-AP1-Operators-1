#include<iostream>

using namespace std;
int main(){
    int number,a,b,c,d,e,f,result;
    cout<<"Enter a 4 digit number: "<<endl;
    cin>>number;
    a=number/1000;
    b=number%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    result=a+c+e+f;
    cout<<"The Final result is: "<<result<<endl;

    return 0; }