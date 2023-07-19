#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    cout<<endl<<endl;
    int user,cpu;
    srand(time(NULL));
    cout<<"\t \t \t \t  Welcome to ROCK, PAPER, SCCISOOR GAME"<<endl<<endl;
    cout<<"\t \t \t \t \t     Press >> 1 to ROCK."<<endl;
    cout<<"\t \t \t \t \t     Press >> 2 to PAPER."<<endl;
    cout<<"\t \t \t \t \t     Press >> 3 to SCISSOR."<<endl;
    start:
    cout<<" Enter:-  ";
    cin>>user;

    cout<<endl;
    //HERE USER SELECTED VALUE WILL BE DISPLAYED.
    if(user==1)
    {
        cout<<"\t You selected:          ROCK."<<endl;
    }

    else if(user==2)
    {
        cout<<"\t You selected:          PAPER."<<endl;
    }

    else if(user==3)
    {
        cout<<"\t You selected:          SCISSOR."<<endl;
    }

    else
    {
        cout<<"\t INVALID NUMBER! :      Select 1 , 2 or 3."<<endl;
    }

    // HERE CPU (COMPUTER) WILL GENERATE RANDOM VALUES.
    cpu=rand()%3+1;

    if(cpu==1)
    {
        cout<<"\t Computer selected:     ROCK."<<endl;
    }
    else if(cpu==2)
    {
        cout<<"\t Computer selected:     PAPER."<<endl;
    }
    else if(cpu==3)
    {
        cout<<"\t Computer selected:     SCISOOR."<<endl;
    }

    cout<<endl;

    //HERE THE RESULT WILL BE PRINTED ON THE SCREEN.
    cout<<"\t Result >>>";
    if(user==1)
    {
        if(cpu==1)
        {
            cout<<"\t It's a TIE."<<endl;
        }
        else if(cpu==2)
        {
            cout<<"\t You LOSE   ||   Computer WIN."<<endl;
        }
        else
        {
            cout<<"\t You Win   ||   Computer LOSE."<<endl;
        }
    }

    else if(user==2)
    {
        if(cpu==1)
        {
            cout<<"\t You Win   ||   Computer LOSE."<<endl;
        }
        else if(cpu==2)
        {
            cout<<"\t It's a TIE."<<endl;
        }
        else if(cpu==3)
        {
            cout<<"\t You LOSE   ||   Computer WIN."<<endl;
        }
    }
    else if(user==3)
    {
        if(cpu==1)
        {
            cout<<"\t You LOSE   ||   Computer WIN."<<endl;
        }
        else if(cpu==2)
        {
            cout<<"\t You WIN   ||   Computer LOSE."<<endl;
        }
        else if(cpu==3)
        {
            cout<<"\t It's a TIE."<<endl;
        }
    }
    else
    {
        cout<<"\t You entered a wrong number -_-* "<<endl;
    }
    goto start;
    cout<<endl;
}
