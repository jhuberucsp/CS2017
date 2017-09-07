#include <iostream>

using namespace std;

int sum(int);
int fibonacci(int);
int factor(long int);
int main()
{
    //cout << "Hello world!" << endl;
    int a=sum(1000);
    cout<<a<<endl;
    int b=fibonacci(4000000);
    cout<<b<<endl;
    int c=factor(21);
    cout<<c<<endl;

    return 0;
}
int sum(int x){
    int suma=0;
    for(int i=0;i<x;i++){
        if(i%3==0||i%5==0){
            suma=suma+i;
        }
    }
    return suma;}
int fibonacci(int n){/*
    if(n==0||n==1){
        return 1;
    }
    else
        return (fibonacci(n-1)+fibonacci(n-2));*/
    int suma=0;
    int p=1;
    int s=2;
    while(p<n){
            if (p%2==0){
                suma=suma+p;
            }
            int temp=p;
            p=s;
            s=temp+s;

            //cout<<p<<"    "<<s<<endl;

    }
    return suma;
    }
int factor(long int a){
    int primo;
    int n=a;
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
                primo=i;
                if (a%primo==0){
                    cout<<i<<endl;
                    //primo=i;
                }}

        }

    }
    return primo;}
