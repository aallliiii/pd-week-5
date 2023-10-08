# include <iostream>
using namespace std;

int value1 = 10;
int value2 = 20;

int sum() 
{
value1=40;
return value1+value2;
}
main ()
{
    int x = value1;
    value1=100;
    x=20;
    value2=sum();
    cout<<value1<<" "<<value2;
}

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



#include <iostream>
#include <string>
float calculate(char type, float price);
using namespace std;

main()
{
    float price;
    char type;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    cout << "The final price of the vehicle of type " << type << " after adding the tax is: $" << calculate(type, price);
}
float calculate(char type, float price)
{
    float tax;
    float total;
    if (type == 'M')
    {
        tax = price * 6 / 100;
    }
    if (type == 'E')
    {
        tax = price * 8 / 100;
    }
    if (type == 'S')
    {
        tax = price * 10 / 100;
    }
    if (type == 'V')
    {
        tax = price * 12 / 100;
    }
    if (type == 'T')
    {
        tax = price * 15 / 100;
    }
    total=tax+price;
    return total;
}



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


# include <iostream>
# include <string>
# include <conio.h>
void header ();
void menu();
void memberRegistration ();
void employeeRegistration ();
float billing ();
void facility_management ();
using namespace std;
main ()
{
    int a;
    header();
    menu();
    cin>>a;
    cout<<endl<<endl;
    if (a==1)
    {
        memberRegistration ();
    }
    if (a==2)
    {
        employeeRegistration ();
    }
    if (a==3)
    {
     cout<<"Your bill is : Rs"<<billing ();   
    }
    if (a==4)
    {
      facility_management ();   
    }
    getch();
    if (a==5)
    {

    }
    getch();
}

void header ()
{
    cout<<"  #####  #     #  #     #            #     #    ###     #    #    ###       #####   ######   #      #  ######   #     #  #######            ###   #     #    ###   #######  ######    #      #   #     # "<<endl;
    cout<<"##        #   #   # # # #            # # # #   #   #    # #  #   #   #    ##        #        # #  # #  #        # #   #     #              #       #   #    #         #     #         # #  # #    #   # "<<endl;
    cout<<"##   ###   # #    #  #  #            #  #  #  # ### #   #  # #  # ### #   ##   ###  ######   #  ##  #  ######   #  #  #     #              # #      # #      # #      #     ######    #  #   #     # #"<<endl;
    cout<<"##   # #    #     #     #            #     # #       #  #    # #       #  ##   # #  #        #      #  #        #   # #     #                  #     #          #     #     #         #      #      #"<<endl;
    cout<<" ##### #    #     #     #            #     # #       #  #    # #       #   ##### #  ######   #      #  ######   #     #     #               # #      #       # #      #     ######    #      #      #"<<endl;
}
void menu()
{
    cout<<endl<<endl<<"Press 1 for new member registration    "<<endl;
    cout<<"Press 2 for new employee registration  "<<endl;
    cout<<"Press 3 for billing and payment        "<<endl;
    cout<<"Press 4 for facility management        "<<endl;
    cout<<"Press 5 to exit                        "<<endl;
    cout<<"Press the required key to continue...     "<<endl;
}

void memberRegistration ()
{
    string name;
    int age;
    float height;
    float weight;
    cout<<"Enter your name   : ";
    cin>>name;
    cout<<"Enter your age    : ";
    cin>>age;
    cout<<"Enter your height : ";
    cin>>height;
    cout<<"Enter you weight  : ";
    cin>>weight;
}
void employeeRegistration ()
{
    string name;
    int age;
    int working_experience;
    cout<<"Enter you name                        : ";
    cin>>name;
    cout<<"Enter your age                        : ";
    cin>>age;
    cout<<"Enter your previous working experience: ";
    cin>>working_experience;
}
float billing ()
{
    int months;
    string stud;
    int total;
    cout<<"Are you a student (Yes/No): ";
    cin>>stud;
    cout<<"Enter the number of months: ";
    cin>>months;
    if (stud=="Yes")
    {
        total=months*1500;
    }
    if (stud=="No")
    {
        total=months*2500;
    }
    
    return total;
}
void facility_management ()
{
    int fixed;
    int broken;
    int enter;
    string machine_name;
    cout<<"Press 1 if machine is broken      "<<endl;
    cout<<"Press 2 if machine is not broken  "<<endl;
    cin>>enter;
    if (enter==1)
    {
        cout<<"Enter the machine name: ";
        cin>>machine_name;
        broken=broken+1;
    }
    if (enter==2)
    {
        cout<<"Enter the machine name: ";
        cin>>machine_name;
        fixed=fixed+1;
    }
}




# include <iostream>
# include <conio.h>
# include <windows.h>
char getCharAtxy(short int x, short int y);
void header();
void enemy1();
void erase_enemy1();
void enemy2();
void erase_enemy2();
void move_enemy1();
void player();
void moveplayerleft();
void moveplayerright();
void moveEnemy2();
void moveEnemy3 ();
void erase_enemy3();
void enemy3 ();
void gotoxy(int x, int y);
int eX=2; 
int eY=1;
int x = 40;
int y = 2;
int pX=2;
int pY=29;
int a = 2;
int b = 2;
using namespace std;
main ()
{
    header();
    enemy1();
    enemy2();
    enemy3();

    
    player();
    while (true)
    {   if (GetAsyncKeyState(VK_LEFT))
    {
        moveplayerleft();
    }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveplayerright();
        }
        move_enemy1();
        moveEnemy2();
        moveEnemy3();
        
        Sleep(50);
    }
    getch();

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void header ()
{
    cout<<"###################################################################################################"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"#                                                                                                 #"<<endl;
    cout<<"###################################################################################################"<<endl;
}
void enemy1 ()
{
    gotoxy(eX,eY);
cout << "(~~~) (~~~)";
gotoxy(eX,eY+1);
cout << "|=| | | |=|";
gotoxy(eX,eY+2);
cout << "|=| | | |=|";
gotoxy(eX,eY+3);
cout << "   \\   / ";
gotoxy(eX,eY+4);
cout << "    \\ / ";
}
void erase_enemy1()
{
gotoxy(eX,eY);
cout << "           ";
gotoxy(eX,eY+1);
cout << "           ";
gotoxy(eX,eY+2);
cout << "           ";
gotoxy(eX,eY+3);
cout << "           ";
gotoxy(eX,eY+4);
cout << "           ";
}
void move_enemy1()
{
  erase_enemy1();   
  eX=eX+1;
  if (eX==87)
  {
    eX=2;
  }
  enemy1();
}
void enemy2 ()
{   
        
    gotoxy(x,y);
cout << "(~~~) (~~~)";
gotoxy(x,y+1);
cout << "|=| | | |=|";
gotoxy(x,y+2);
cout << "|=| | | |=|";
gotoxy(x,y+3);
cout << "   \\   / ";
gotoxy(x,y+4);
cout << "    \\ / ";
}
void erase_enemy2()
{ 
gotoxy(x,y);
cout << "           ";
gotoxy(x,y+1);
cout << "           ";
gotoxy(x,y+2);
cout << "           ";
gotoxy(x,y+3);
cout << "           ";
gotoxy(x,y+4);
cout << "           ";
}
void player ()
{
    
gotoxy(pX,pY);
cout<<"      /\\      "<<endl;
gotoxy(pX,pY+1);
cout<<"   __/~~\\__   "<<endl;
gotoxy(pX,pY+2);
cout<<" /   |  |   \\ "<<endl;
gotoxy(pX,pY+3);
cout<<"=====.  .===== "<<endl;
gotoxy(pX,pY+4);
cout<<"     ||||      "<<endl;

}
void erase_player ()
{ gotoxy(pX,pY);
    cout<<"               "<<endl;
    gotoxy(pX,pY+1);
    cout<<"               "<<endl;
    gotoxy(pX,pY+2);
    cout<<"               "<<endl;
    gotoxy(pX,pY+3);
    cout<<"               "<<endl;
    gotoxy(pX,pY+4);
    cout<<"               "<<endl;
}
void moveplayerleft()
{   if(getCharAtxy(pX-1,pY) == ' '){
    erase_player();
    pX=pX-1;
    player();
}
}
void moveplayerright()
{   if(getCharAtxy(90, pY) == ' ')
{
    erase_player();
    pX=pX+1;
    player();
}
}
char getCharAtxy(short int x, short int y)
{                 
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void moveEnemy2()
{   
    erase_enemy2();
    y=y+1;
    if(y==30)
    {
        y=2;
    }
    enemy2();
}
void enemy3 ()
{   
        
    gotoxy(a,b);
cout << "(~~~) (~~~)";
gotoxy(a,b+1);
cout << "|=| | | |=|";
gotoxy(a,b+2);
cout << "|=| | | |=|";
gotoxy(a,b+3);
cout << "   \\   / ";
gotoxy(a,b+4);
cout << "    \\ / ";
}
void erase_enemy3()
{
gotoxy(a,b);
cout << "           ";
gotoxy(a,b+1);
cout << "           ";
gotoxy(a,b+2);
cout << "           ";
gotoxy(a,b+3);
cout << "           ";
gotoxy(a,b+4);
cout << "           ";
}
void moveEnemy3 ()
{
    erase_enemy3();
    a=a+3;
    b=b+1;
    if(a>87||b>29)
    {
        a=2;
        b=2;
    }
    
    enemy3();
}