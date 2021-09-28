// да се състави програма, която въвежда в масив средноаритметичните температури за 1 месец. Да се преброят дните с темература равна на предварително дадена.
#include<iostream>
using namespace std;
int main()
{
    int i,br=0;
    int A[30];
    for(i=0;i<=29;i++){
        cout<<"Input temperature of every day";
        cin>>A[i];
        cout<<A[i]<<'\n';
    }

    for(i=0;i<=29;i++){
    if(A[i]==25){
        br++;
    }
    }
    cout<<br;
}
