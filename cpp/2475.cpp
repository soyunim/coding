#include <iostream>

using namespace std;

int main(){
    int n, sum=0;
    for(int i=0; i<5; i++){
        cin >> n;
        sum+=n*n;
    }
    sum%=10;
    cout<<sum;
}