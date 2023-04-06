#include <iostream>
using namespace std;

int main()
{
    int n=9;
    for(int i=0; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<" "<<i;
        }
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int j=i; j<=n; j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<" "<<i;
        }
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
    
    return 0;
}