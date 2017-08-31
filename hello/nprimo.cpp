#include<iostream>
using namespace std;
/* int main(){

     int cont=0;
     int numero,num=2;
     cout<<"ingrese numero"<<endl;
     cin>> numero;
     while(cont!=numero){
        int a=0;
        for(int i=1;i<=num;i++){
                if((num%i)==0){
                    cout<<"NO PRIMO"<<endl;
                    a++;
                }
                if(a>2){
                    break;
                }
                else{
                    cont=cont+1;
                }
        }
        if(a==2){
            cont++;
        }
        num++;
        //cont++;
     }

     cout<<"el primo numero "<<numero<<" es : "<<num--<<endl;



     return 1;
}*/
int main(){
    //int cont=0;
    int numero;
    int num=2;
    cout<<"ingrese numero"<<endl;
    cin>>numero;
    while(numero!=0){
        int c=0;
        int n=0;

        while(c==true||num!=n){
                n++;
                if(num%n==0){
                        c++;}
                }
        if (c<3){
            numero--;}


        num++;

        }


    cout<<num<<endl;
    return 1;}
