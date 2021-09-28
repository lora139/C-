// Да се отпечатат всички цели трицифрени числа, сумата от цифрите на които е равна на k, където к се въвежда от клавиатурата.
#include <iostream>

using namespace std;
int main(){
    int i,a,b,c,k;
    int sum=0;
    cout<<"Input k: ";
    cin>>k;

    for(i=100;i<=999;i++){
        a=i%10;
        b=i/100;
        c=i%100/10;
        sum=a;
        sum+=b;
        sum+=c;
    if(sum==k){
         cout<<i<<" ";
    }
    }
    return 0;
}
