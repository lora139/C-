#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

struct student{
    int num;
    char name[20];
    float grade;
};
using namespace std;
int main(){
    struct student arr[5];
    int i,n;

    cout<<"Number of students: ";
    cin>>n;

    for(i=0;i<n;i++){
        arr[i].num=i+1; // считаме хората не от 0 до 5, а от 1 до 5
        cout<<"Student name: ";
        cin>>arr[i].name;

        cout<<"Student grade: ";
        cin>>arr[i].grade;

        cout<<"num "<<arr[i].num<<endl;
        cout<<"name "<<arr[i].name<<endl;
        cout<<"grade "<<arr[i].grade<<endl;

    }

return 0;

}
