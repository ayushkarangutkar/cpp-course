#include <iostream>
using namespace std;

int main() {

    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=2*i-1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}