# include <iostream>
# include <conio.h>
# include <string>
std :: string projectTimeCalculation (int hrs, int days, int workers);
using namespace std;
main ()
{
    int hrs;
    int days;
    int workers;
    cout<<"Enter the needed hours: ";
    cin>>hrs;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    cout<<projectTimeCalculation(hrs, days, workers);
}

std :: string projectTimeCalculation (int hrs, int days, int workers)
{
    float dayst;
    float daysa;
    int hrsa;
    int hrsn;
    string shrsn;
    string answer;
    
    hrsa=((days*0.9)*10)*workers;
    if(hrsa<hrs)
    {
        hrsn=hrs-hrsa;
        
        shrsn=to_string(hrsn);
        answer += "Not enough time! "+shrsn+" hours needed.";
    }
    else{
        hrsn=hrsa-hrs;
        shrsn=to_string(hrsn);
        answer += "Yes!"+shrsn+" hours left.";
    }
    return answer;

}