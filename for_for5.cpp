// Да се отпечатат всички цели числа в диапазона [100;200], сумата от цифрите на които е равна на 5
#include <iostream>

using namespace std;
int main(){
    int a,b,c,i;
    int sum=0;

    for(i=100;i<=200;i++){
        a=i%10;// edinici(cifra)
        b=i/10;// desetici
        b=b%10;// (cifra)
        c=i/100;//stotici
        c=c%10;// (cifra)

        sum=a+b+c;

        if(sum==5){
            cout<<i<<" ";
        }
    }
    return 0;
}
