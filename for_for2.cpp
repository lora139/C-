//да се въведе от клавиатурата цяло число n>0 и да се отпечата
#include <iostream>

using namespace std;
int main(){
    int n;
    int i,j;
    cout<<"Type n: ";
    cin>>n;
if(n<=0){
   cout<<"Bye";
}else{
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<j<<' ';
            }
            cout<<'\n';
        }
}
    return 0;
}
