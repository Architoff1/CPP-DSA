#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr={1,2,3,4};
    
    size_t count = arr.size();

    arr.resize(count *2);

    for(int i=0;i<count;i++){
        arr[count+i]=arr[i];
    }
    for(const int &x : arr){
        cout << x <<" ";
    }
    cout<<endl;

    return 0;
}