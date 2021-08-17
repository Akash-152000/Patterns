#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ur,lr;
    ur=(n+1)/2;
    lr=n-ur;
    cout<<"debug"<<ur<<lr<<endl;

    for(int i=1;i<=ur;i++){
        for(int j=1;j<=ur-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            if(j*2-1>=10) cout<<j*2-1<<" ";
            else cout<<j*2-1<<"  ";
        }
        for(int j=i-1;j>=1;j--){
            if(j*2-1>=10) cout<<j*2-1<<" ";
            else cout<<j*2-1<<"  ";
        }
        cout<<endl;
    }
    for(int i=lr;i>=1;i--){
        for(int j=1;j<=ur-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            if(j*2-1>=10) cout<<j*2-1<<" ";
            else cout<<j*2-1<<"  ";
        }
        for(int j=i-1;j>=1;j--){
            if(j*2-1>=10) cout<<j*2-1<<" ";
            else cout<<j*2-1<<"  ";
        }
        cout<<endl;
    }
    return 0;

}