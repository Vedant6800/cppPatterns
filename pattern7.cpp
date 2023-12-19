#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter value";
    cin>>c;

    int i=1;
    while(i<=c){
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}