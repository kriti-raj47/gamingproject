#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num = (rand()%100)+1;
     
    cout<<"**************NUMBER GUESSING GAME*********************"<<endl;
    do{
        cout<<"enter a guess no. between the (1-100):";
        cin>>guess;
        tries++;
         
         if(guess>num){
            cout<<"too high"<<endl;
         }
         else if(guess<num){
            cout<<"two low"<<endl;
         }
         else{
            cout<<"congratulations!!!"<<endl;
            cout<<"you choose the correct no."<<endl;

            cout<<"your tries is:"<<tries<<endl;
         }
}
while(guess!=num); 
cout<<"*********************************************";
return 0;
}