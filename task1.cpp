# include <iostream>
# include <string>
std :: string meters (float length, float width, float height);
std :: string kilometers (float length, float width, float height);
std :: string millimeters (float length, float width, float height);
using namespace std;
main ()
{
    float length;
    float width;
    float height;
    string condition;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit(millimeters, centimeters, meters, kilometers): ";
    cin>>condition;
    if (condition=="meters")
    {
        cout<<"The volume of the pyramid is: "<<meters(length,width,height)<<" cubic meters";
    }
    if (condition=="kilometers")
    {
        cout<<"The volume of the pyramid is: "<<kilometers(length,width,height)<<" cubic meters";
    }
    if (condition=="millimeters")
    {
        cout<<"The volume of the pyramid is: "<<millimeters(length,width,height)<<" cubic meters";
    }

}
std :: string meters (float length, float width, float height)
{
    float answer;
    string sanswer;
    answer=(length*width*height)/3;
    sanswer=to_string(answer);
    return sanswer;
}
std :: string kilometers (float length, float width, float height)
{
    float answer;
    string sanswer;
    answer=((length*width*height)/3)/1000;
    sanswer=to_string(answer);
    return sanswer;
}
std :: string millimeters (float length, float width, float height)
{
    float answer;
    string sanswer;
    answer=((length*width*height)/3)*1000;
    sanswer=to_string(answer);
    return sanswer;
}
