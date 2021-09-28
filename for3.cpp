//Да се състави програма за изчисляване на сумата на 5 естествени числа,
// въведени от клавиатурата
#include <iostream>

using namespace std;
int main(){
    int i,a,sum=0;

    cout<<"Type 5 numbers: ";
    for(i=1;i<=5;i++){
        cout<<"a= ";
        cin>>a;
        sum+=a;
    }
    cout<<"The sum is:"<<sum<<"\n";
    return 0;

}
