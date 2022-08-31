#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long a,b;
        cin >>a>>b; //a mathematicians b programmers
        if(a==1 || b==1)cout <<1<<endl;
        else if(a<b) //a=2 b=5
        {
            if((a*4)>(a+b))cout << (a+b)/4<<endl;
            else cout <<a<<endl;
        }
        else if(a==b){
            cout<<(a+b)/4<<endl;
        }
        else {
            if((b*4)>(a+b))cout << (a+b)/4<<endl;
            else cout <<b<<endl;

        }

    }
 return 0;
}
