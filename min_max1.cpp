#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n= ";
cin>>n;
double max,min,chislo;
cout<<"chislo: ";
cin>>chislo;
min=chislo;      // min и max се инициализират
max=chislo;      // с първата въведена стойност
for(int i=1;i<=n-1;i++)
        // satva i for(int i=0;i<=n; i++)
{
cin>>chislo;
     if(chislo>max)
        max=chislo;
    if(chislo<min)
        min=chislo;
}
cout<<"Min= "<<min<<endl;
cout<<"Max= "<<max<<endl;
return 0;
}

