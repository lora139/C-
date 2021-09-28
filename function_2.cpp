
#include <iostream>
using namespace std;

void get_age();

int main(){
    int age;
    cout<<"Input age = ";
    cin>>age;

    get_age();
    cout<<"function main() age= "<<age<<endl;

    return 0;

}

void get_age(){
    int age;
        cout<<"Input age again: ";
            cin>>age;
        cout<<"function get_age() new age= "<<age<<endl;

}
