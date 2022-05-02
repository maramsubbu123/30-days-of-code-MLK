#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];

}

for (int i = 0; i < n; i++)
{
    if(a[i]%2==0){
        break;
    }

    if(a[i]<0){
        break;
    }

    if(a[i]>=n){
        break;
    }


    else
    {
        cout<<a[i]<<" ";
    }

}



return 0;
}
