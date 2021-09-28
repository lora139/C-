#include <iostream>
using namespace std;
// разменя стойностите на p и q
void swap(int*x,int*y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
}

int main(){
        int p=2,q=3;
        swap(&p,&q);
        cout<<"p= "<<p<<" "<<"q= "<<q<<endl;

        return 0;
}
