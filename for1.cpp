#include <iostream>
// Задача 1: Да се напише програма за намиране на an   (n – естествено число)
using namespace std;
int main(){
int i,a,n,pow=1;
cout<<"n= ";
cin>>n;
cout<<"a= ";
cin>>a;
for(int i=1;i<=n;i++){
    pow*=a;
}
cout<<pow;

return 0;
}
