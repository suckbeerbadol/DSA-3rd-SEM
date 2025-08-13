#include <iostream>
using namespace std;
int a[100], n;
void create()
{cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
}
void display()
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
}
void insert()
{
    int p,v;cin>>p>>v;
    for(int i=n;i>p;i--)
    a[i]=a[i-1];
    a[p]=v;n++;
    }
void del()
{int p;cin>>p;
for(int i=p;i<n-1;i++)
a[i]=a[i+1];n--;
}
void search()
{int v,f=0;cin>>v;
for(int i=0;i<n;i++)
if(a[i]==v)
{cout<<i<<" ";f=1;
}
if(!f)
cout<<"Not found\n";
}
int main()
{int c;
while(cin>>c)
{if(c==1)create();
else if(c==2)display();
else if(c==3)insert();
else if(c==4)del();
else if(c==5)search();
else break;
}
}