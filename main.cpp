#include <iostream>

using namespace std;

bool primo(int);
bool anio(int);
int nprimo(int);

int main(){
    bool a=primo(11);
    cout<<a<<endl;
    bool c=anio(2012);
    cout<<c<<endl;
    int b= nprimo(7);
    cout<<b<<endl;
    return 0;

}
bool primo(int x){
    bool c=true;
    int n=1;
    while((c==true||n<x)&&x!=1){
            n=n+1;
            if(x%n==0){
                c=false;
                //cout<<"no es primo"<<endl;
                //return 0;
                return c;
            }
            else
                //cout<<"es primo"<<endl;
                //return 0;
                return c;
    }
    //cout<<"no es primo"<<endl;
    //return 0;
    }

bool anio(int y){
    if((y%4)==0){
        if((y%100)!=0 || (y%400)==0){
            //cout<<"El anio es B"<<endl;
            return true;
                                          }
                    }
    else{
            return false;
        //cout<<"No es B"<< endl;
    }
    //return 0;

}

int nprimo(int n){
    int primo;
    while(n!=0){
        int c;
        for(int i=2;n!=0;i++){
                c=0;
            for(int j=1;j<=i;j++){
                if (i%j==0){
                    c++;
                }}
            if(c<3){
                n--;
                primo=i;}

        }

    }
    return primo;}

