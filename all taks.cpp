# include <iostream>
using namespace std;
main ()
{
int sides;
int angle;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;

angle=(sides-2)*180;

cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<angle<<" degrees";


}




# include <iostream>
using namespace std;
main ()
{
int minute;
int second;
int frame;

cout<<"Number of Minutes: ";
cin>>minute;

cout<<"Frames per Second: ";
cin>>second;

frame=(minute*60)*second;

cout<<"Total Number of Frames: "<<frame;


}


# include <iostream>
using namespace std;
main ()
{
float ivelocity ;
float acce ;
float time ;
float fvelocity;

cout<<"Enter Initial Velocity (m/s): ";
cin>>ivelocity;

cout<<"Enter Acceleration (m/s^2): ";
cin>>acce;

cout<<"Enter Time (s): ";
cin>>time;

fvelocity=acce*time+ivelocity;

cout<<"Final Velocity (m/s): "<<fvelocity;


}

# include <iostream>
using namespace std;
main ()
{
int a ;
float i ;
float p ;

cout<<"Enter Imposter Count: ";
cin>>i;

cout<<"Enter Player Count: ";
cin>>p;

a=100*(i/p);

cout<<"Chance of being an imposter: "<<a<<"%";

 
}


# include <iostream>
using namespace std;
main ()
{
string name;
int tweight;
int days;

cout<<"Enter the Name of the Person: ";
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
cin>>tweight;

days=tweight*15;

cout<<name<<" will need "<<days<<" days to lose "<<tweight<<" kg of weight by following the doctor's suggestions";

}

# include <iostream>
using namespace std;



main ()
{
float pound;
float cost;
float size;
float costpp;
float costps;

cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>pound;

cout<<"Enter the cost of the bag: $";
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>size;

costpp=cost/pound;
costps=cost/size;

cout<<"Cost of fertilizer per pound: "<<"$"<<costpp<<endl;
cout<<"Cost of fertilizing per square foot: "<<"$"<<costps;


}


# include <iostream>
using namespace std;
main ()
{
string name;
int adultp;
int childp;
int adults;
int childs;
float donation;
float total;
float donr;
int remain;

cout<<"Enter the movie name: ";
cin>>name;

cout<<"Enter the adult ticket price: $";
cin>>adultp;

cout<<"Enter the child ticket price: $";
cin>>childp;

cout<<"Enter the number of adult tickets sold: ";
cin>>adults;

cout<<"Enter the number of child tickets sold: ";
cin>>childs;

cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>donation;

total=(adultp*adults)+(childp*childs);

donr=(total/100)*donation;

remain=total-donr;
cout<<endl;

cout<<"Movie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity ("<<donation<<"%): $"<<donr<<endl;
cout<<"Remaining amount after donation: $"<<remain;




 

}




# include <iostream>
using namespace std;
main()
{
float vprice;
float fprice;
int nveg;
int nfru;
float ctotal;
float rtotal;

cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vprice;

cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fprice;

cout<<"Enter total kilograms of vegetables: ";
cin>>nveg;

cout<<"Enter total kilograms of fruits: ";
cin>>nfru;

ctotal=(vprice*nveg)+(fprice*nfru);
rtotal=ctotal/1.94;

cout<<"Total earnings in Rupees (Rps): "<<rtotal;

}



# include <iostream>
using namespace std;
main ()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;

cout<<"Enter a 4-digit number: ";
cin>>a;

b=a%10;
c=a/10;

d=c%10;
e=c/10;

f=e%10;
g=e/10;

h=b+d+f+g;

cout<<"Sum of the individual digits: "<<h;



}


# include <iostream>
using namespace std;
main ()
{
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
int num11;
int num12;
int num13;
int num14;
int num15;
int add;
int mul;
int sub;
int add2;
int final;

cout<<"Number 1: ";
cin>>num1;
cout<<"Number 2: ";
cin>>num2;
cout<<"Number 3: ";
cin>>num3;
cout<<"Number 4: ";
cin>>num4;
cout<<"Number 5: ";
cin>>num5;
cout<<"Number 6: ";
cin>>num6;
cout<<"Number 7: ";
cin>>num7;
cout<<"Number 8: ";
cin>>num8;
cout<<"Number 9: ";
cin>>num9;
cout<<"Number 10: ";
cin>>num10;
cout<<"Number 11: ";
cin>>num11;
cout<<"Number 12: ";
cin>>num12;
cout<<"Number 13: ";
cin>>num13;
cout<<"Number 14: ";
cin>>num14;
cout<<"Number 15: ";
cin>>num15;

add=num1+num2+num3+num4+num5;
mul=num6*num7*num8*num9*num10;
sub=num11-num12-num13-num14-num15;
add2=add+mul;
final=add2-sub;

cout<<"The final result is: "<<final;
}


# include <iostream>
using namespace std;
main ()
{
int age;
int time;
int avg;

cout<<"Enter the person's age: ";
cin>>age;

cout<<"Enter the number of times they've moved: ";
cin>>time;

avg=age/(time+1);

cout<<"Average number of years lived in the same house: "<<avg;
}



# include <iostream>
using namespace std;
main ()
{
int sqmeters;
int width;
int height;
int area;
int walls;

cout<<"Number of square meters you can paint: ";
cin>>sqmeters;

cout<<"Width of the single wall (in meters): ";
cin>>width;

cout<<"Height of the single wall (in meters): ";
cin>>height;

area=height*width;
walls=sqmeters/area;

cout<<"Number of walls you can paint: "<<walls;



}


# include <iostream>
using namespace std;
main ()
{
int num1;
int num2;

cout<<"Number 1: ";
cin>>num1;

num2=num1;

cout<<"Number 2: ";
cin>>num1;

num2=num2+num1;

cout<<"Number 3: ";
cin>>num1;

num2=num2+num1;

cout<<"Number 4: ";
cin>>num1;

num2=num2+num1;

cout<<"Number 5: ";
cin>>num1;

num2=num2+num1;

cout<<"Sum = "<<num2;



}


# include <iostream>
using namespace std;
main ()
{
int a = 0;
int b = 0;


cout<<"Enter your age in years: ";
cin>>a;

b=a*365;
cout<<"Your age in days is approximately "<<b<<" days.";
}

# include <iostream>
using namespace std;
main ()
{
string name;
float b;
float c;
float d;
float e;

cout<<"Enter the student's name: ";
cin>>name;

cout<<"Enter matriculation marks (out of 1100): ";
cin>>b;

cout<<"Enter intermediate marks (out of 550): ";
cin>>c;

cout<<"Enter ECAT marks (out of 400): ";
cin>>d;

e=(b/1100*10)+(c/550*40)+(d/400*50);

cout<<"Aggregate score for "<<name<<" in UET is: "<<e<<"%";


}

# include <iostream>
using namespace std;
main ()
{
float a = 0;
float b = 0;
float c = 0;

cout<<"Enter the charge (Q) in Coulombs: ";
cin>>a;

cout<<"Enter the time (t) in seconds: ";
cin>>b;

c=a/b;

cout<<"The current (I) is: "<<c<<" Amperes";
}


# include <iostream>
using namespace std;
main ()
{
int a = 0;
int b = 0;

cout<<"Enter amount in dollars = ";
cin>>a;

b=a*200;

cout<<"Amount in rupees is "<<b;
 
}


# include <iostream>
using namespace std;
main ()
{
string name;
int a = 0;
int b = 0;
int c = 0;
int d = 0;

cout<<"Enter the name of the cricket team: ";
cin>>name;


cout<<"Enter the number of wins: ";
cin>>a;

cout<<"Enter the number of draws: ";
cin>>b;

cout<<"Enter the number of losses: ";
cin>>c;

d=(a*3)+b;

cout<<name<<" has obtained "<<d<<" points in the Asia Cup tournament.";

}

# include <iostream>
using namespace std;
main ()
{
int a = 0;
int b = 0;
int c = 0;


cout<<"Enter the current world population: ";
cin>>a;


cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>b;


c=a+((b*12)*30);

cout<<"The population in three decades will be: "<<c;

}


# include <iostream>
using namespace std;
main ()
{
float a = 0;
float b = 0;
float c = 0;

cout<<"Enter voltage (in volts): ";
cin>>a;
cout<<"Enter current (in amperes): ";
cin>>b;

c=a*b;

cout<<"The power is "<<c<<" watts.";
}


# include <iostream>
using namespace std;
main ()
{
int a = 0;
int b = 0;
int c = 0;

cout<<"Enter the length of the rectangle: ";
cin>>a;

cout<<"Enter the width of the rectangle: ";
cin>>b;

c=a*b;

cout<<"The area of the rectangle is: "<<c;

}

# include <iostream>
using namespace std;
main ()
{
double a = 0;
double b = 0;

cout<<"Enter the size in megabytes (MB): ";
cin>>a;

b=a*1024*1024*8;

cout<<a<<" MB is equivalent to "<<b<<" bits.";	
}

# include <iostream>
using namespace std;
main () 
{
int a = 0;
float b = 0;
char c ;
string d;

cout<<"Enter your name: ";
cin>>d;
cout<<"Enter your roll number: ";
cin>>a;

cout<<"Enter your aggregate: ";
cin>>b;

cout<<"Enter your section: ";
cin>>c;

cout<<"Student information:"<<endl;
cout<<"Name: "<<d<<endl;
cout<<"Roll number: "<<a<<endl;
cout<<"Aggregate: "<<b<<endl;
cout<<"Section: "<<c;

}

# include <iostream>
using namespace std;
main ()
{
double a = 0;
double b = 0;

cout<<"Enter the number of hours: ";
cin>>a;

b=a*60*60;

cout<<a<<" hours is equivalent to "<<b<<" seconds.";	
}

# include <iostream>
using namespace std;
main ()
{
int lb;
int kg;

cout<<"Enter weight in pounds: ";
cin>>lb;

kg=lb*0.45;

cout<<lb<<" pounds is equal to "<<kg<<" kilograms.";

}


# include <iostream>
# include <string>
using namespace std;
void add (float num1, float num2);
void sub (float num1, float num2);
void div (float num1, float num2);
void mul (float num1, float num2);
main()
{
float num1;
float num2;
char op;

cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter 2nd number: ";
cin>>num2;

cout<<"Enter an operator (+, -, *, /): ";
cin>>op;

if (op == '+')
{
add (num1, num2);
}
if (op=='-')
{
sub (num1, num2);
}
if (op=='*')
{
mul (num1, num2);
}
if (op=='/')
{
div (num1,  num2);
}
}
void add(float num1, float num2)
{
float sum ;
sum=num1 + num2;
cout<<"Addition: "<<sum;
}
void sub(float num1, float num2)
{
float subt ;
subt=num1 - num2;
cout<<"Subtraction: "<<subt;
}
void mul (float num1, float num2)
{
float mult;
mult=num1*num2;
cout<<"Multiplication: "<<mult;
}
void div(float num1, float num2)
{
float divi;
divi=num1/num2;
cout<<"Division: "<<divi;
}





# include <iostream>
# include <string>
using namespace std;
void discount(string day, float price);
main ()
{
float price;
string day;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>price;
discount(day, price);
}
void discount (string day, float price)
{
float disc;
float payable;
if (day=="Sunday")
{
disc=(price/100)*10;
payable=price-disc;
cout<<"Payable Amount: $"<<payable;
}
else
{
cout<<"Payable Amount: $"<<price;
}
}





# include <iostream>
using namespace std;
void evenOrodd (int num1)
{
if(num1%2==0)
{
cout<<"Number "<<num1<<" is even";
}
if(num1%2!=0)
{
cout<<"Number "<<num1<<" is odd";
}
}
main ()
{
int num1;
cout<<"Enter a number: ";
cin>>num1;
evenOrodd (num1);
}


# include <iostream>
using namespace std;
void conversion (float inches);
main ()
{
float inches;
float feet;

cout<<"Enter the measurement in inches: ";
cin>>inches;

conversion(inches);


}

void conversion(float inches)
{
float feet;
feet=inches/12;
cout<<"Equivalent in feet: "<<feet;


}


# include <iostream>
using namespace std;
void fuelu(float distance)
{
float fuel;

fuel=distance*10;
cout<<"Fuel needed: "<<fuel;


}

main()
{
float fuel;
float distance;

cout<<"Enter the distance: ";
cin>>distance;

fuelu(distance);


}

# include <iostream>
using namespace std;
void fuelu(float distance)
{
float fuel;

fuel=distance*10;
if (fuel>=100)
{
cout<<"Fuel needed: "<<fuel;
}
if (fuel<100)
{
cout<<"Fuel needed: 100";
}

}

main()
{
float fuel;
float distance;

cout<<"Enter the distance: ";
cin>>distance;

fuelu(distance);


}

# include <iostream>
# include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void printmove (int x, int y);
main()
{
int x=2;
int y=3;
system("cls");
printmaze ();
while(1)
{
printmove (x,y);
x=x+1;
if (x==20)
x=3;
}
gotoxy(2,10);
}

void printmaze()
{
cout<<"#####################"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#####################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmove(int x ,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(500);
gotoxy(x,y);
cout<<" ";
}



# include <iostream>
using namespace std;
void howManyStickers (int sides);
main ()
{
int sides;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>sides;

howManyStickers(sides);


}

void howManyStickers (int sides)
{
int stickers;

stickers=sides*sides*6;

cout<<"Number of stickers needed: "<<stickers;


}


# include <iostream>
using namespace std;
void passOrfail (int score);
main()
{
int score;
cout<<"Enter your score: ";
cin>>score;
passOrfail (score);
}
void passOrfail(int score)
{
if(score>50)
{
cout<<"Pass";
}
if(score<=50)
{
cout<<"Fail";
}
}

# include <iostream>
# include <windows.h>
using namespace std;
void gotoxy(int x, int y);	
main()
{
cout<<"test";
gotoxy(5,6);
cout<<"My name is Ali";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



# include <iostream>
using namespace std;
void vote (int age);
main ()
{
int age;
cout<<"Enter your age: ";
cin>>age;

vote (age);

}

void vote (int age)
{
if(age>=18)
{
cout<<"You are eligible to vote.";
}
if (age<18)
{
cout<<"You are not eligible to vote.";
}
}



# include <iostream>
# include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void printmove (int x, int y);
main()
{
int x=5;
int y=2;
system("cls");
printmaze ();
while(1)
{
printmove (x,y);
y=y+1;
if (y==8){
y=7;
while(y>2){
printmove (x,y);
y=y-1;
}

}

}
gotoxy(2,10);
}

void printmaze()
{
cout<<"#####################"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#####################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmove(int x ,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(500);
gotoxy(x,y);
cout<<" ";
}

# include <iostream>
# include <windows.h>
void gotoxy(int x, int y);
using namespace std;
main ()
{
system("cls");
gotoxy(100,25);
cout<<"ALI";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
# include <iostream>
void compare (int num1,int num2);
using namespace std;
main ()
{
int num1;
int num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
compare (num1,num2);
}
void compare (int num1, int num2)
{
if (num1==num2)
{
cout<<"true";
}
if (num1!=num2)
{
cout<<"false";
}
}

# include <iostream>
# include <string>
void reverse (std::string value);
using namespace std;
main ()
{
string value;
cout<<"Enter 'true' or 'false': ";
cin>>value;
reverse(value);
}
void reverse (std::string value)
{
if (value=="true")
{
cout<<"false";
}
if (value=="false")
{
cout<<"true";
}
}

# include <iostream>
# include <string>
void discount (std::string country,float ticketPrice);
using namespace std;
main ()
{
string country;
float ticketPrice;
cout<<"Enter the country's name: ";
cin>>country;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketPrice;
discount (country,ticketPrice);
}
void discount (std::string country,float ticketPrice)
{
float discountt;
float finalp;
if (country=="Pakistan")
{
discountt=(ticketPrice/100)*5;
finalp=ticketPrice-discountt;
}
if (country=="Ireland")
{
discountt=(ticketPrice/100)*10;
finalp=ticketPrice-discountt;
}
if (country=="India")
{
discountt=(ticketPrice/100)*20;
finalp=ticketPrice-discountt;
}
if (country=="England")
{
discountt=(ticketPrice/100)*30;
finalp=ticketPrice-discountt;
}
if (country=="Canada")
{
discountt=(ticketPrice/100)*45;
finalp=ticketPrice-discountt;
}
cout<<"Final ticket price after discount: $"<<finalp;
}

# include <iostream>
# include <string>
void discount (std::string country,float ticketPrice);
using namespace std;
main ()
{
string country;
float ticketPrice;
while(true)
{
cout<<"Enter the country's name: ";
cin>>country;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketPrice;
discount (country,ticketPrice);
}
}
void discount (std::string country,float ticketPrice)
{
float discountt;
float finalp;
if (country=="Pakistan")
{
discountt=(ticketPrice/100)*5;
finalp=ticketPrice-discountt;
}
if (country=="Ireland")
{
discountt=(ticketPrice/100)*10;
finalp=ticketPrice-discountt;
}
if (country=="India")
{
discountt=(ticketPrice/100)*20;
finalp=ticketPrice-discountt;
}
if (country=="England")
{
discountt=(ticketPrice/100)*30;
finalp=ticketPrice-discountt;
}
if (country=="Canada")
{
discountt=(ticketPrice/100)*45;
finalp=ticketPrice-discountt;
}
cout<<"Final ticket price after discount: $"<<finalp<<endl;
}

# include <iostream>
void checkSpeed (int speed);
using namespace std;
main ()
{
int speed;
cout<<"Speed: ";
cin>>speed;
checkSpeed(speed);
}
void checkSpeed (int speed)
{
if (speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if (speed<=100)
{
cout<<"Perfect! You're going good.";
}
}

# include <iostream>
void bonus(int position1, int position2);
using namespace std;
main ()
{
int position1;
int position2;

cout<<"Enter your position: ";
cin>>position1;
cout<<"Enter your friend's position: ";
cin>>position2;
bonus (position1,position2);
}
void bonus(int position1, int position2)
{
if (position2-position1>6)
{
cout<<"false";
}
if (position2-position1<=6)
{
cout<<"true";
}
}

# include <iostream>
void longestTime (int hrs, int min);
using namespace std;
main ()
{
int min;
int hrs;
cout<<"Enter the number of hours: ";
cin>>hrs;
cout<<"Enter the number of minutes: ";
cin>>min;
longestTime (hrs,min);
}
void longestTime (int hrs, int min)
{
int converthrs;
converthrs=hrs*60;
if(converthrs<min)
{
cout<<min;
}
if (converthrs>min)
{
cout<<hrs;
}
}

# include <iostream>
void flowerShop(int redRose, int whiteRose, int tulip);
using namespace std;
main ()
{
int roses;
int white_roses;
int tulips;
cout<<"Red Rose: ";
cin>>roses;
cout<<"White Rose: ";
cin>>white_roses;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(roses,white_roses,tulips);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
float rosesp;
float white_rosesp;
float tulipsp;
float total;
float discount;
float finalPrice;
rosesp=2.00*redRose;
white_rosesp=4.10*whiteRose;
tulipsp=2.50*tulip;
total=rosesp+white_rosesp+tulipsp;
if(total>200)
{
discount=(total/100)*20;
finalPrice=total-discount;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<finalPrice;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}

# include <iostream>
void pet (int holidays);
using namespace std;
main ()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet (int holidays)
{
int time;
int workingDays;
int time1;
int hrs;
int mins;
workingDays=365-holidays;
time=(workingDays*63)+(holidays*127);
if (time<30000)
{
time1=30000-time;
hrs=time1/60;
mins=time1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (time>30000)
{
time1=time-30000;
hrs=time1/60;
mins=time1%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}


# include <iostream>
void tpChecker(int people,int tp);
using namespace std;
main ()
{
int people;
int tp;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheet = tp*500;
int usageperday = 57*people;
int totalusage=usageperday*14;
int available = sheet/usageperday;
if (sheet>totalusage)
{
cout<<"Your TP will last "<<available<<" days, no need to panic!";
}
if (sheet<totalusage)
{
cout<<"Your TP will only last "<<available<<" days, buy more!";
}


}


# include <iostream>
# include <conio.h>
# include <string>
std :: string calculateAggregate ();
std :: string compareMarks ();
void header ();
using namespace std;
main ()
{  
    int condition=0;
    header();
    while (condition!=3){
    cout<<endl<<"Press 1 to calculate aggregate."<<endl;
    cout<<"Press 2 to compare marks."<<endl;
    cout<<"Press 3 to exit";
    cin>>condition; 
    if (condition == 1)
    {
        cout<<calculateAggregate();
        getch();
    }
    if (condition==2)
    {
        cout<<compareMarks();
        getch();
    }
    }
    
}

std :: string calculateAggregate ()
{   string name1;
    float matric; 
    float inter;
    float ecat;
    float agg;
    string sagg;
    string answer;
  cout<<"Enter name of the student: ";
  cin>>name1;
  cout<<"Enter the matric marks: ";
  cin>>matric;
  cout<<"Enter the inter marks: ";
  cin>>inter;
  cout<<"Enter the ecat marks: ";
  cin>>ecat;

  agg = (((matric/1100)*30)+((inter/550)*30)+((ecat/400)*40));
  sagg = to_string(agg);
  

  answer += name1 + "'s aggregate is "+sagg;

  return answer;
}

std :: string compareMarks ()
{  string name1; 
    float ecat1; 
    string name2; 
    float ecat2;
    string answer;
    cout<<"Enter the name of student 1: ";
    cin>>name1;
    cout<<"Enter the ecat marks of student 1 : ";
    cin>>ecat1;
    cout<<"Enter the name of student 2: ";
    cin>>name2;
    cout<<"Enter the ecat marks of student 2 : ";
    cin>>ecat2;
    if (ecat1>ecat2)
    {
        answer += "The aggregate of "+name1+" is higher.";
    }
    else {
        answer += "The aggregate of "+name2+" is higher.";
    }

    return answer;

}
void header (){
cout<<"     #  #   #    #  #######  #       #  #######  ####     ###   #######  ########   #       #               ###      ####     #      #  ###   ###    ###   ###    ####    #     #                                                                  "<<endl;
cout<<"     #  #   # #  #     #      #     #   #        #   #   #         #        #        #     #               #   #     #    #   # #  # #   #   #      #       #    #    #   # #   #              "<<endl;
cout<<"     #  #   #  # #     #       #   #    #######  ####    # #       #        #         #   #               #     #    #     #  #  ##  #   #   # #    # #     #    #    #   #   # #         "<<endl;
cout<<"     #  #   #    #     #        # #     #        # #         #     #        #          # #               #########   #    #   #      #   #       #      #   #    #    #   #     #         "<<endl;
cout<<"     ####   #    #  #######      #      #######  #  #     # #   #######     #           #               #         #  ####     #      #  ###   # #    # #   ###    ####    #     #         "<<endl;
cout<<"                                                                                                                                                                                            "<<endl;
cout<<"   #     #    ###     #    #    ###       #####   ######   #      #  ######   #     #  #######            ###   #     #    ###   #######  ######    #      #   #     #                                                                          "<<endl;
cout<<"   # # # #   #   #    # #  #   #   #    ##        #        # #  # #  #        # #   #     #              #       #   #    #         #     #         # #  # #    #   #                               "<<endl;
cout<<"   #  #  #  # ### #   #  # #  # ### #   ##   ###  ######   #  ##  #  ######   #  #  #     #              # #      # #      # #      #     ######    #  #   #     # #                                              "<<endl;
cout<<"   #     # #       #  #    # #       #  ##   # #  #        #      #  #        #   # #     #                  #     #          #     #     #         #      #      #     "<<endl;              
cout<<"   #     # #       #  #    # #       #   ##### #  ######   #      #  ######   #     #     #               # #      #       # #      #     ######    #      #      #     "<<endl;  }




