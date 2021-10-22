//Find grades according student marks

#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter marks of 3 subjects";
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg = total/3.0;
    if(avg>=60)
        cout<<"A"<<endl;
        
        else if(avg>=35 && avg<60)
            cout<<"B"<<endl;
        else
            cout<<"C"<<endl;
        return 0;

}