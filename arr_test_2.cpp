//Даден е масив А, съдържащ 5 произволни числа. Нпишете програма, която намира сумата от елементи на масива
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    int A[5];
    for(i=0;i<=4;i++){
        cout<<"Input elements of the array!";
        cin>>A[i];
        cout<<A[i]<<'\n';
    }

    for(i=0;i<=4;i++){
        sum+=A[i];
        }
        cout<<"Sum e:"<<sum;


    return 0;

}
