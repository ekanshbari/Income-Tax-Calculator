
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>

using namespace std;

   //==========================Base Class========================//

  
     class iTax
   {
     public:
         char name[50],ads[50],occ[50];
         int ID,age;

     void getdetails(char*a)
       {
        strcpy(occ,a);
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your ID  : "<<endl;
        cin>>ID;
        cout<<"Enter your age : "<<endl;
        cin>>age;
        cout<<"Give your address in detail: "<<endl;
        gets(ads);
       }

    void showdetails()
       {

        cout<<"\n Name       :"<<name;
        cout<<"\n Occupation :"<<occ;
        cout<<"\n ID No.     :"<<ID;
        cout<<"\n Address    :"<<ads;
       }
     };  //end of base class


   //=================================================================//

    class common:public iTax

    {
     public:
       double sal,tax;

     void get()
       {
        cout<<"How much you earn in a year: ";
        cin>>sal;
        if(sal<50000)
          {
           tax=sal*(.03);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>50000)&&(sal<=100000))
          {
           tax=sal*(.07);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
        if((sal>100000)&&(sal<=150000))
          {
           tax=sal*(.10);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>150000)&&(sal<=200000))
          {
           tax=sal*(.15);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
       if((sal>200000)&&(sal<=250000))
          {
           tax=sal*(.20);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if((sal>250000)&&(sal<=300000))
          {
           tax=sal*(.23);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if(sal>300000)
          {
           tax=sal*(.25);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       }


     void showc()
     {
         cout<<"\nSalary  : "<<sal<<" tk. in a year";
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";

     }

   };

   //=========================================================//

   class p0:public iTax
   {

     public:
        double sal,tax;
        void getz()
        {
         cout<<"Enter your salary in a year: ";
         cin>>sal;
         cout<<"You have no income tax.\n";
        }
        void showz()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : 0 tk.";
        }
   };

   //============================================================//

   class p15:public iTax
   {

     public:
         double sal,tax;
        void getfn()
        {
          cout<<"Enter salary in a year: ";
          cin>>sal;
          tax=sal*(.15);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showfn()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";
        }
   };


   //===========================================================//

   class p20:public iTax
   {
     public:
         double sal,tax;
        void getty()
        {
         cout<<"Enter salary in a year: ";
         cin>>sal;
         tax=sal*(.20);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showty()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";
        }
   };

   //==============================================================//

   class p25:public iTax
   {
     public:
         double sal,tax;
        void gettf()
        {
         cout<<"Enter salary in a year: ";
         cin>>sal;
         tax=sal*(.25);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showtf()
        {
         cout<<"\nSalary      : "<<" tk. in a year"<<sal;
         cout<<"\nTax         : "<<tax<<" tk."<<"\n\n";
        }
   };


   //=======================Main Function=======================//

   int main()
   {

    common c[20];
    p0  z[20];
    p15 fn[20];
    p20 ty[20];
    p25 tf[20];
    iTax it;

    int i,j,choice,ID;
    char a[70];

        system("cls");
         do{
                cout<<"\n\t\t\t\t\t\t  INCOME  TAX  CALCULATIONS"<<endl
				    <<"\t\t                               -------------------------------"
                    <<"\n\n\n What do you want to do?\n 1.Asking for IncomeTax view."
                    <<"\n 2.Search\n 3.Exit.\n"
                    <<"\n Make your choice= ";
                 cin>>choice;

       switch(choice)
       {

         case 1:
             cout<<"\nHow many memebers ?  ";
             cin>>j;
             if(j==0)
             cout<<"Please enter a valid number.\n\n";

             for(i=1;i<=j;i++)
         {
               cout<<"\nEnter occupation name: ";
               cin>>a;

             if((stricmp(a,"farmer")==0)||(stricmp(a,"student")==0))
            {
               z[i].getdetails(a);
               z[i].getz();
            }

             else if(stricmp(a,"business")==0)
            {
              ty[i].getdetails(a);
              ty[i].getty();
            }
            else if(stricmp(a,"export")==0)
            {
             tf[i].getdetails(a);
             tf[i].gettf();
            }
           else  if(stricmp(a,"engineer")==0)
            {
              fn[i].getdetails(a);
              fn[i].getfn();
            }
            else
              {
               c[i].getdetails(a);
               c[i].get();
              }
         }
            break;


         case 2: system("cls");
             cout<<"\nGive ur employee ID=";
             cin>>ID;

             if((ID!=c[i].ID)&&(ID!=z[i].ID)&&(ID!=fn[i].ID)&&(ID!=ty[i].ID)&&(ID!=tf[i].ID))
             cout<<"No match found.....\n\n";


              for(i=1;i<=j;i++)

             {
              if(ID==c[i].ID)
                {
                c[i].showdetails();
                c[i].showc();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==z[i].ID)
                {
                z[i].showdetails();
                z[i].showz();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==fn[i].ID)
                {
                fn[i].showdetails();
                fn[i].showfn();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==ty[i].ID)
                {
                ty[i].showdetails();
                ty[i].showty();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==tf[i].ID)
                {
                tf[i].showdetails();
                tf[i].showtf();
                cout<<"Press any key.......\n\n";
                getch();
                }
               } break;




         case 3:
             break;
         default:
             cout<<"\n\a\nWrong choice Try again...";
             cout<<"\nPress any key to return to main menu...";
             getch();
             break;
       }



      }while(choice!=3);
    return 0;
   }

  //=========================End Of Main Function=========================//



