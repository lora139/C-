#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int min=M3[0];
    int max=M3[0];
    int M1[10];
    int M2[10];
    int M3[10];


    for(i=0;i<=9;i++){
        cout<<"Input elements of the array m1!";
        cin>>M1[i];
        cout<<M1[i]<<'\n';
    }

    for(i=0;i<=9;i++){
    cout<<"Input elements of the array m2!";
        cin>>M2[i];
        cout<<M2[i]<<'\n';
    }

    for(i=0;i<=9;i++){
    M3[i]=M1[i]+M2[i];
    cout<<"M3= "<<M3[i]<<'\n';
    }

    for(i=0;i<=9;i++){
        if(M3[i]<min){
            min=M3[i];
        }
        if(M3[i]>max){
            max= M3[i];
        }
        cout<<"Max= "<<max<<"Min= "<<min<<'\n';
    }

    return 0;

}
