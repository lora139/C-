#include <iostream>
using namespace std;
int main(){
    double c;
    int i,v,b;

    //програма, която дава възможността за избор на дистинация при следните особености:
    // под 18г -> 25% намаление
    // всеки пътник заплаща свръх багаж за по 0,1% от цената за всеки килограм над 50кг.

    cout<<"\n choose destination: ";
    cout<<"\n 1: Paris ";
    cout<<"\n 2: London ";
    cout<<"\n 3: New York ";
    cout<<"\n 4: Dubai ";
    cout<<"\n 5: Spain ";
    cin>>i;

    switch(i){
    case 1: c=800;
        cout<<"Prize is: ";
                cout<<c;
            cout<<"\n Set your ages: ";
                cin>>v;
            if((v<18)&&(v>0)){
                c=c*0.25;
                cout<<c;
            }else{
                c=800;
                cout<<c;
            }

            cout<<"\n input the weight of the luggage:";
                cin>>b;
                if(b>50&&(v<18)){
                    c=c+(0.001*c);
                    cout<<c;
                }else{
                    c=800+(0.001*800);
                }

            break;

    case 2: c=900;
        cout<<"Prize is: ";
                cout<<c;
            cout<<"\n Set your ages: ";
                cin>>v;
            if((v<18)&&(v>0)){
                c=c*0.25;
                cout<<c;
            }else{
                c=900;
                cout<<c;
            }

            cout<<"\n input the weight of the luggage:";
                cin>>b;
                if(b>50){
                    c=c+(0.001*c);
                    cout<<c;
                }

            break;

    case 3: c=1200;
        cout<<"Prize is: ";
                cout<<c;
            cout<<"\n Set your ages: ";
                cin>>v;
            if((v<18)&&(v>0)){
                c=c*0.25;
                cout<<c;
            }else{
                c=1200;
                cout<<c;
            }
            cout<<"\n input the weight of the luggage:";
                cin>>b;
                if(b>50){
                    c=c+(0.001*c);
                    cout<<c;
                }

            break;

    case 4: c=2000;
        cout<<"Prize is: ";
                cout<<c;
            cout<<"\n Set your ages: ";
                cin>>v;
            if((v<18)&&(v>0)){
                c=c*0.25;
                cout<<c;
            }else{
                c=2000;
                cout<<c;
            }

            cout<<"\n input the weight of the luggage:";
                cin>>b;
                if(b>50){
                    c=c+(0.001*c);
                    cout<<c;
                }

            break;

    case 5: c=250;
        cout<<"Prize is: ";
                cout<<c;
            cout<<"\n Set your ages: ";
                cin>>v;
            if((v<18)&&(v>0)){
                c=c*0.25;
                cout<<c;
            }else{
                c=250;
                cout<<c;
            }

            cout<<"\n input the weight of the luggage:";
                cin>>b;
                if(b>50){
                    c=c+(0.001*c);
                    cout<<c;
                }

            break;
    default: cout<<"\n there is no such as destination!";
    }

    return 0;
}
