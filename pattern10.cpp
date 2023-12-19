#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter value";
    cin>>c;

    int i=1;
    while(i<=c){
        int j = i;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}