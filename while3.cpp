#include <iostream>

using namespace std;

int main(){
    int n, i=0;
    cout << "Enter n:";
    cin >> n;

    while(i<n){
        if(i%2==0 && i>=0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}
