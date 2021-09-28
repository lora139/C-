
#include <iostream>
using namespace std;

void triple_it(int i);

int main(){

    int i;
    for(i=1; i<=10; i++)
    {
        triple_it(i);
    }
return 0;
}

void triple_it(int i){
    static int total=0;
    int ans;
    ans=i*3;
    total+=ans;
    cout<<"Number "<<i<<"*3= "<<ans<<"\t";
    cout<<"total= "<<total<<endl;

}
