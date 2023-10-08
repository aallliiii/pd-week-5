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