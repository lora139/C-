#include <iostream>
// Да се напише програма, която извежда на екрана всички естествени числа
//в диапазона [m,n], които са кратни на 5
using namespace std;
int main(){
        int m,n;
        cout<<"m= ";
        cin>>m;
        cout<<"n= ";
        cin>>n;

        for(int i=m;i<=n;i++){
            if(i%5==0)
                cout<<i<<' ';
        }
        return 0;


    }
