#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i=0;
    while(i<n){
        int j=1;
        while (j<n){
            cout<<i+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}