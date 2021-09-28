#include <iostream>
//Да се отпечата таблицата за умножение на числата от 1 до 10
using namespace std;
int main(){
    int i,j;
    int n=10;
    int k=0;;

    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
            k=i*j;
        cout<<i<<'*'<<j<<'='<<k<<'\n';

    }
    }
return 0;
}
