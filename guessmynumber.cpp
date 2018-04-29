
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{ cout<<"Welcome to Guess my number!!!\n\n"<<endl;
string name;
cout<<"enter your name!"<<endl;
cin>>name;
cout<<name<<", I have thought of a number between 1 to 50... you have to guess it...\nThe less tries you make to guess it the more points you earn!!\n\n"<<endl;
    int numb;
int count=0;
    srand(static_cast<unsigned int>(time(0)));
    int random=rand();
    int guess=(random%50)+1;
    cout<<"Guess my number!!!"<<endl;
    char ans='y';
do
    {cin>>numb;
        if(numb==guess)
        {cout<<"That's it! you got me! "<<guess<<" is the number."<<endl;}
    else if(numb>guess)
        {cout<<"Too high!!"<<endl;
        count++;
        cout<<"Guess again!"<<endl;}
    else if(numb<guess)
        {cout<<"Too Low!!"<<endl;
        count++;
        cout<<"Guess again!"<<endl;}}while(numb!=guess);
        cout<<"You got it in "<<count<<" tries"<<endl;
        float point;
        point=(100/count)*10;
        cout<<name<<", you scored "<<point<<" points"<<endl;
        cout<<"Thank you for playing my game. Best wishes from Aishy"<<endl;



}
