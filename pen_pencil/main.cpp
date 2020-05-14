#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float j,k,tcount=0,fcount=0,scount=0,fi,si,ti,fp,sp,tp,total,t=0,no=0,a,b,c;
    string ans;
    cout<<"\n";
     cout<<"====================================WELCOME====================================\n";
    do{
    cout<<"\n";
    cout<<"\nENTER THE QUANTITY OF FIRST PRODUCT\n";
    cin>>fi;
     cout<<"ENTER THE PRICE OF FIRST PRODUCT\n";
      cin>>fp;
     cout<<"\nENTER THE QUANTITY OF SECOND PRODUCT\n";
      cin>>si;
      cout<<"ENTER THE PRICE OF SECOND PRODUCT\n";
       cin>>sp;
      cout<<"\nENTER THE QUANTITY OF THIRD PRODUCT\n";
       cin>>ti;
       cout<<"ENTER THE PRICE OF THIRD PRODUCT\n";
        cin>>tp;
        cout<<"\nWHAT IS QUANTITY OF PRODUCT \n";
        cin>>total;
cout<<"\n===============ANSWER=============\n";
for(int i=0;i<=total;i=i+fi)
{
    while(j<=total)
    {
       while(k<=total)
    {

      if((i+j+k)==(fcount*fp)+(scount*sp)+(tcount*tp))
      {
          if((i+j+k)==total)
          {
              t++;
                    a=(i*fp/fi);
             cout<<"\n"<<i<<" FIRST QUANTITY -  RS "<<a<<" RUPEES\n";

                    b=(j*sp/si);
             cout<<"\n"<<j<<" SECOND QUANTITY - RS "<<b<<" RUPEES\n";

                    c=(k*tp/ti);
              cout<<"\n"<<k<<" THIRD QUANTITY  - RS "<<c<<" RUPEES\n";

cout<<(i+j+k)<<"========TOTAL========"<<(a+b+c)<<"=========\n";
             cout<<"========================================================"<<t;
          }

       }
       else
          {
            no++;
          }

      k=k+ti;
      tcount++;
    }k=ti;
    tcount=1;
      j=j+si;
      scount++;
    }j=si;
    scount=1;
fcount++;
}
if(no>=1)
{cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"=======SORRY!_NO_MORE_POSSIBILITIES_FOUND=======";
}
cout<<"\n";
    cout<<"\n";
    cout<<"\n";
cout<<"\nDO YOU WANT CONTINUE{yes}\n";
cin>>ans;
tcount=0;
fcount=0;
scount=0;
t=0;
no=0;
a=0;
b=0;c=0;
    }while(ans=="yes");
    cout<<"=========================PROGRAM_END=========================";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    return 0;


}
