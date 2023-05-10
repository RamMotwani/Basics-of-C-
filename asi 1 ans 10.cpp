#include<iostream>
using namespace std;
int main()
{
    int i,add=0,a[10];
    cout<<"enter 10 elements of an array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<10;i++)
    {
        add=a[i]+add;
    }
    cout<<"total is "<<add;
    return 0;

}
