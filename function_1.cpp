
#include <iostream>
using namespace std;
    int i=0;                //декларация и инициализация на глобална променлива

    int sum(int x, int y);      //прототип на функция

    int main(){

    cout<<"print i="<<i<<endl;  //отпечатване на глобалната променлива i
    i++;                        //променяме стойността на i=1

    cout<<"new i="<<i<<endl; // отпечатване на новата стойност за i
    int a=5;
    int b=6;            // локални променливи

    int s=sum(a, b);       //локална променлива s,получаваща резултата от sum(a, b)
    cout<<"print sum="<<s<<endl;


    return 0;
}
