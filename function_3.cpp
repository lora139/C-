
#include <iostream>
using namespace std;

void pr_it(int i); //прототип на функция

int main(){
int i=5;
pr_it(i);          // предаване на стойността за i

return 0;

}

void pr_it(int i){
cout<<"print i= "<<i<<endl;

}
