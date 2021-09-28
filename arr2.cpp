#include<iostream>
using namespace std;
int main()
{
    int i,br=0;
    int A[10];
    for(i=0;i<=9;i++){
        cout<<"Input elements of the array!";
        cin>>A[i];
        cout<<A[i]<<'\n';
    }
    for(i=0;i<=9;i++){
    if(A[i]==1){
        br++;
        cout<<br;
    }
    }
}
