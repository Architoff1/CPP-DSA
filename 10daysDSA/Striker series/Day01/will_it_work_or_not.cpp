#include <iostream>

using namespace std;

int main(){
    //Number 
    int a=12;
    float c=1.23;
    char d= 'a';
    bool num = true;
    long long de= 3203023020322034823024375420;

    string name = "Archit";

    //now to print the values we need to have external files which can be included using the header files
    //these header files are different they are libraries which contain pre defined functions
    //which is not part of official C++ language.
    std::cout<<a<<endl<<c<<endl;

    cout<<"Hello coder army\n"<<c<<endl;

    cout<<"\n"<<sizeof(de)<<endl;
    cout<<"\n"<<name<<"\n"<<sizeof(name)<<"\n"<<name.length()<<endl;
    
    return 0;
}