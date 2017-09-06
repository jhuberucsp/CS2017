#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"ingrese numero"<<endl;
    cin>>n;
    int primo;
    while(n!=0){
        int c;
        for(int i=2;;i++){
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
    cout<<primo<<endl;
    return 0;}
