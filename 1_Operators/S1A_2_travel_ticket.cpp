#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<setw(34)<<setfill('#')<<""<<endl;
    cout<<"United Airlines Flight 7611"<<endl;
    cout<<"On time departs in 3 hours 8 mins"<<endl;
    cout<<"JFK0"<<setfill('-')<<setw(15)<<"> PEK"<<endl;
    cout<<"Departs New York, today"<<endl;
    cout<<setfill('-')<<setw(34)<<""<<endl;
    cout<<setfill(' ');
    cout<<setw(18)<<left<<"Time"<<setw(10)<<left<<"Terminal"<<setw(6)<<left<<"Gate"<<endl;
    cout<<setw(18)<<left<<"3:50 PM"<<setw(10)<<left<<"1"<<setw(6)<<left<<"-"<<endl;
    cout<<"Arrives Beijing, today"<<endl;
    cout<<setfill('-')<<setw(34)<<""<<endl;
    cout<<setw(' ');
    cout<<setw(18)<<left<<"Scheduled 6:20 PM"<<setw(10)<<left<<"Terminal"<<setw(6)<<left<<"Gate"<<endl;
    cout<<setw(18)<<left<<"5:53 PM"<<setw(10)<<left<<"3"<<setw(6)<<left<<"-"<<endl;
    cout<<setw(34)<<setfill('#')<<""<<endl;
}