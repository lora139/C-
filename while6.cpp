#include <iostream>
using namespace std;
int main(){
    int i=1;
    int mult=1;
    while(i!=0){
        cout << "Enter i:";
        cin >> i;
        mult*=i;
    }
    cout << mult << endl;
    return 0;

}
