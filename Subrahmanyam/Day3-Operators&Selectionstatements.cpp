#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, res,ch;
    
    cout<<"Enter two numbers: \n";
    cin>>x>>y;

    cout<<"=======Calculator======="<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Even/odd check"<<endl;

    cout<<"Enter your choice: ";
    cin>>ch;
    cout<<"\n";

    switch(ch){
        case 1: res = x+y;
                cout<<"Result of x+y is : "<<res<<"\n";
                break;
        case 2: res = x-y;
                cout<<"Result of x-y is : "<<res<<"\n";
                break;
        case 3: res = x*y;
                cout<<"Result of x*y is : "<<res<<"\n";
                break;
        case 4: res = x/y;
                cout<<"Result of x/y is : "<<res<<"\n";
                break;
        case 5: if(int(x)%2==0)
                    cout<<x<<" is even\n";
                else   
                    cout<<x<<" is odd\n";
                if(int(y)%2==0)
                    cout<<y<<" is even\n";
                else   
                    cout<<y<<" is odd\n";
                break;
        default: cout<<"Wrong Choice....\n";
                 break;
    }
}
