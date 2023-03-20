#include<iostream>

using namespace std;
int main(){
    int second,hour,hour2,minute,detik;
    string jam,menit,detiks;
    cout<<"Masukkan jumlah detik: "<<endl;
    cin>>second;
    hour=second/3600;
    hour2=second%3600;
    minute=hour2/60;
    detik=hour2%60;
    
    if(hour<10&&minute<10&&detik<10){
        cout<<"0"<<hour<<":"<<"0"<<minute<<":"<<"0"<<detik<<endl;}
    
    else if(hour<10&&minute>=10&&detik<10)
    {cout<<"0"<<hour<<":"<<minute<<":"<<"0"<<detik<<endl;}
    
    else if(hour<10&&minute<10&&detik>=10)
    {cout<<"0"<<hour<<":"<<"0"<<minute<<":"<<detik<<endl;}
    
    else if(hour<10&&minute>=10&&detik>=10)
    {cout<<"0"<<hour<<":"<<minute<<":"<<detik<<endl;}
    
    else if(hour>=10&&minute<10&&detik<10)
    {cout<<hour<<":"<<"0"<<minute<<":"<<"0"<<detik<<endl;}
    
    else if(hour>=10&&minute>=10&&detik<10)
    {cout<<hour<<":"<<minute<<":"<<"0"<<detik<<endl;}
    
    else if(hour>=10&&minute<10&&detik>=10)
    {cout<<hour<<":"<<"0"<<minute<<":"<<detik<<endl;}
    
    else if(hour>=10&&minute>=10&&detik>=10)
    {cout<<hour<<":"<<minute<<":"<<detik<<endl;}

}
