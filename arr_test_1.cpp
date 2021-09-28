//даден е масив А, съдържащ 20 произволни числа. Нпишете програма, която намира произведението на елементите на масива А
#include<iostream>
using namespace std;
int main()
{
    int i,br=1;
    int A[20];
    for(i=0;i<=19;i++){
        cout<<"Input elements of the array!";
        cin>>A[i];
        cout<<A[i]<<'\n';
    }

    for(i=0;i<=19;i++){
        br*=A[i];
        }
        cout<<"Proizvedenieto e:"<<br;


    return 0;
}
