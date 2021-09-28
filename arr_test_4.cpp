// напишете програма, която намира макс. от елементите в масив.
#include<iostream>
using namespace std;
int main()
{
    int i,max;
    int A[8];
    max = А[0];
    for(i=0;i<=7;i++){
        cout<<"Input elements of the array!";
        cin>>A[i];
        cout<<A[i]<<'\n';
    }

    for(i=0;i<=7;i++){
    if(A[i]>max){
            max= A[i];
        }
        cout<<"Max= "<<max;
    }
}
