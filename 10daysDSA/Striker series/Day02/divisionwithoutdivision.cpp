#include <iostream>

using namespace std;

int main(){
    
    int remainder,divident,divisor,quotient=0,ii=0,counter=0;
    
    cout<<"Enter divident: ";
    cin>>divident;

    cout<<"\nEnter divisor: ";
    cin>>divisor;

    for(int i=divident;i>=0;i=i-divisor){
        ii=i;
        counter+=1;
    }

    if(ii>0){
        cout<<"Not divisible, quotient is: "<<counter-1<<"and remainder is: "<<ii<<endl;
    }
    else if(ii==0){
        cout<<"Divisble, quotient is: "<<counter-1<<endl;
    }
    else{
        cout<<"Not divisible, quotient is: "<<counter-1<<"and remainder is: "<<ii+divisor<<endl;
    }
    
    return 0;
}