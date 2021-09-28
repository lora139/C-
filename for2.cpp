#include <iostream>
// Въведете  стартова заплата и прослужени години за работник.
// Да се изчисли заплатата на работника в момента като всяка година заплатата е увеличавана с 10%.
using namespace std;
int main(){

    int z,y;
    cout<<"z= ";
    cin>>z;
    cout<<"y= ";
    cin>>y;

    for(int i=1;i<=y;i++){
        z+=0.1*z;
    }
    cout<<z<<endl;
    return 0;
}
