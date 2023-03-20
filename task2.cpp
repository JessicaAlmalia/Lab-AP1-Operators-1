#include <iostream>
using namespace std;

int main() {
    int number,angk,angkbaru =0,angk2,hasil=0;;
    cout<<"Enter 6 digits number: "<<endl;
    cin>>number;
    while(number!=0){
        angk= number%10;
        number=number/10;
        if(angk==8){
            angk=0;
        }
        else if(angk==9){
            angk=1;
        }
        else    
            angk=angk+2;
        
        angkbaru=angkbaru*10+angk; 
    }
    
    while(angkbaru!=0){
        angk2=angkbaru%10;
        angkbaru=angkbaru/10;
        hasil = hasil*10+angk2;
    }
    cout<<hasil;
    return 0;
}
