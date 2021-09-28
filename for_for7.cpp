// Да се отпечатат всички цели  числа в интервала [m ; n], които са кратни на 5. Числовите стойности за  m и n се въвеждатот клавиатурата. Да се направят нужните проверки на входните данни.
#include <iostream>

using namespace std;
int main(){
    int n,m,i;
    cout<<"Input m and n!"<<'\n';
    cout<<"m= ";
    cin>>m;
    cout<<"n= ";
    cin>>n;

    for(i=m;i<=n;i++) {
            if(i%5==0){
            cout<<i<<" ";
    }
    }
    return 0;
    }

