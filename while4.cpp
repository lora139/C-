#include <iostream>
using namespace std;
int main(){
    int x,y;
    int i=1;
    cout << "Enter x:";
    cin >> x;

    cout << "Enter y:";
    cin >> y;

    while(pow(x,i)<y){
        cout << pow(x,i) << " ";
        i++;
    }
    return 0;
}
