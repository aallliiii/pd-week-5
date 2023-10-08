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