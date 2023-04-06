#include <iostream>
using namespace std;
class Time
{
private:
    int sec,min , hour;

public:
    Time(){
    hour=min=sec=0;
    }
  friend int operator>>(istream &input, Time &T)
    {
        cout<<"\n enter the hours"<<endl;
        input>>T.hour;
        cout<<"\n enter the mins"<<endl;
        input>>T.min;
        cout<<"\n enter the sec"<<endl;
        input>>T.sec;

        T.min= T.min/60+T.sec;
        T.sec%=60;
        T.hour=T.hour+ T.min/60;
        T.min%=60;
        if(T.hour>=25)
          return 1;
        else
          return 0;
    }

    friend void operator<<(ostream &output,Time &T)
    {
         output<<"\n hours  :" << T.hour;
         output<<"\n min :"<< T.min;
         output<<"\n sec :"<< T.sec;
    }

    int operator==(Time T)
    {
        int Tot= hour*3600 +min*60+sec;
        int Tot2= T.hour*3600 +T.min*60+T.sec;
        if(Tot==Tot2)
           return 1;
        else  
           return 0;
    }
};
int main()
{
    Time T1, T2;
    cout<<"enter the first number : \n";
    if(cin>>T1)
    {
        cout<<"invalid time \n";
        return 0;
    }
    cout<<"first time"<<T1;
    cout<<"enter the second number : \n";
    if(cin>>T2)
    {
        cout<<"invalid time \n";
        return 0;
    }
    cout<<"second time"<<T2;
    if(T1==T2)
    {
        cout<<"\n both time are same"<<endl;
    }
    else{
        cout<<"\n both are different"<<endl;
    }
    return 0;
}
