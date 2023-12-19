#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter value";
    cin>>c;

    int i=1;
    while(i<=c){
        int j = 1;
        int count = i;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}