#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int tea_id,ans[10];

    while(cin>>tea_id){
    int count=0;
    for(int i=0;i<5;i++) cin>>ans[i];

    for(int i=0;i<5;i++)
    {
        if(ans[i]==tea_id)
            count++;

    }
    cout<<count<<endl;

    }
    return 0;
}
