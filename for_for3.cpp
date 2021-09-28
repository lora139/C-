#include <iostream>
//да се въведе от клавиатурата цяло число n>0 и да се отпечата :1 [] 2 3 [] 3 4 5........n n+1.....2*n-1
using namespace std;
int main(){
    int n;
    int i,j;
    cout<<"Type n= ";
    cin>>n;
    if(n<=0){
            cout<<"Bye";
    }else{
    for(i=1;i<=n;i++){ //цикъл за редовете
        for(j=i;j<2*i;j++){ //цикъл за колоните
            cout<<j<<' ';
        }
        cout<<endl;
    }
    }
    return 0;
    }

