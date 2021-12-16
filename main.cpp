#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
void catalogue();
int main()
{

    cout << "<================================WELCOME TO SHOPPING MART ========================================>"
         << "\n"
         << "                                 Enter your Choice\n\n"
         <<"1.Browse Catalogue\n2.Login\n3.Register\n4.Exit";
         int choice;
         cin>>choice;
         switch(choice)
         {
             case 1:catalogue();
                    break;
             case 2:login();
                    break;
             case 3:regiser();
                    break;
             case 4:exit();
                    break;       

                    
         }
}

void catalogue()
{
    cout<<""

}