#include <iostream>
//да се въведе от клавиатурата цяло число nи да се отпечата следната верижна дроб:
//Където 𝑛∈[5;100]
//Да се отпечата и всеки от елементите на верижната дроб.
using namespace std;
int main(){
    int n;
    double sum=0,a=0;
    cout<<"Type n=";
    cin>>n;

    if(n>=5&&n<=100){

    for(int i=1;i<=n;i++){
            a=(double)i/((i+1)*(i+2));
            cout<<"a = "<<a<<" "<<'\n';

            sum+=(double)i/((i+1)*(i+2));
    }
    cout<<sum<<endl;
    }else{
        cout<<"Bye";
    }
    return 0;
}
