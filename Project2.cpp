#include<iostream>
#include<string.h>
using namespace std;
static float pi=3.14;
static float g=9.8;
class input
{
public:
    string password;

    input()
    {
	cout<<"\n******* NOTE : \n \t\tTake care of characters and integers, program is case and datatype sensitive \n\n\n";
        cout<<"\n Enter Your Password .............";
        cin>>password;
        if(password=="2024")
        {
    cout<<"\n C For Conversions ";
    cout<<"\n A For AREAS ";
    cout<<"\n V For VOLUMES ";
    cout<<"\n B For BASIC PROBLEMS SOLVING ";
        }
        else
        {
            cout<<"\n INCORRECT PASSWORD ";
        }
    }
};
class CONVERSIONS
{
public:
    char c,chk;
    int r,l,t,x;
    double cur,Rs,lm,lk,lc,lmm,temp,k,d,f;
    CONVERSIONS()
        {
        do
        {
                 cout<<"\n .......................CONVERSIONS..........................\n\n ";
        cout<<"\n                 Currency Conversion                           ";
        cout<<"\n                 Length Conversion                             ";
        cout<<"\n                 Temprature Conversion                             ";
        cout<<"\n                 Mass Conversion                             ";
        cout<<"\n C For Currency Conversion ";
        cout<<"\n L For Length Conversion  ";
        cout<<"\n T For Temprature Conversion ";
        cout<<"\n M For Mass Conversion   ";
        cout<<" \n Enter Any Character Given Above To Perform Your Desired Conversion  \n ";
        cin>>c;
         if(c=='c' || c=='C')
        {
            cout<<"\n .......................Currency Conversion........................... ";
            cout<<"\n  \n                    * Rupees To Dollars                           ";
            cout<<"\n  \n                    * Dollars To Rupees                         ";
            cout<<"\n  \n                    * Rupees To Riyal                             ";
            cout<<"\n  \n                    * Riyal  To Rupees                         ";
            cout<<"\n  \n                    * Rupees To Darham                             ";
            cout<<"\n  \n                    * Darham  To Rupees                           ";
            cout<<"\n  \n                    * Rupees To Dinar                             ";
            cout<<"\n  \n                    * Dinar  To Rupees                           ";
            cout<<"\n  \n                    * Rupees To Euro                             ";
            cout<<"\n  \n                    * Euro  To Rupees                           ";
            cout<<"\n  \n                    * Rupees To Yuan                             ";
            cout<<"\n  \n                    * Yuan  To Rupees                           ";
            cout<<"\n  \n                     * Yuan  To Rupees                           ";
            cout<<endl<<endl<<endl;
            cout<<"\n    Press 1 For Rupees To Dollars Conversion                           ";
            cout<<"\n    Press 2  For Dollars To Rupees Conversion                          ";
            cout<<"\n    Press 3  For Rupees To Riyal Conversion                              ";
            cout<<"\n    Press 4  For Riyal  To Rupees Conversion                         ";
            cout<<"\n    Press 5  For Rupees To Darham Conversion                             ";
            cout<<"\n    Press 6  For Darham  To Rupees Conversion                           ";
            cout<<"\n    Press 7  For Rupees To Dinar Conversion                             ";
            cout<<"\n    Press 8  For Dinar  To Rupees Conversion                           ";
            cout<<"\n    Press 9  For Rupees To Euro Conversion                            ";
            cout<<"\n    Press 10 For Euro  To Rupees Conversion                          ";
            cout<<"\n    Press 11 For Rupees To Yuan Conversion                            ";
            cout<<"\n    Press 12 For Yuan  To Rupees Conversion                            ";
            cout<<endl;
            cin>>r;
            if(r==1)
                { cout<<"\n                      *Rupees To Dollars                           ";
                cout<<"\n Enter Amount In Rupees Currency \t\t";
                cin>>Rs;
                cur=Rs/226.49;
                cout<<endl<<" Rs "<<Rs<<"="<<cur<<" $";
                }
            else if(r==2)
                {
                    cout<<"\n                      *Dollars To Rupees                         ";
                cout<<"\n Enter Amount In Dollar Currency \t\t";
                cin>>cur;
                Rs=cur*226.49;
                cout<<endl<<cur<<" $"<<"="<<" Rs "<<Rs;
                }
            else if(r==3)
            {
                cout<<"\n                      *Rupees To Riyal                             ";
                 cout<<"\n Enter Amount In Rupees Currency \t\t";
                cin>>Rs;
                cur=Rs/60.27;
                cout<<endl<<" Rs"<<Rs<<" ="<<cur<<" SAR ";
            }
            else if(r==4)
            {
                cout<<"\n                      *Riyal  To Rupees                         ";
                cout<<"\n Enter Amount In Riyal Currency \t\t";
                cin>>Rs;
                cur=Rs*60.27;
                cout<<endl<<Rs<<" SAR"<<" ="<<" Rs"<<cur;
            }
            else  if(r==5)
            {   cout<<"\n                      *Rupees To Darham                             ";
             cout<<"\n Enter Amount In Rupees Currency \t\t";
                cin>>Rs;
                cur=Rs/61.66;
                cout<<endl<<"Rs "<<Rs<<" ="<<cur<<"DH";
            }
            else if(r==6)
            {cout<<"\n                      *Darham  To Rupees                           ";
                cout<<"\n Enter Amount In Darham Currency \t\t";
               cin>>Rs;
               cur=Rs*61.66;
                cout<<endl<<Rs<<"DH"<<" ="<<" Rs"<<cur;
            }
            else if(r==7)
            {  cout<<"\n                      *Rupees To Dinar                             ";
                cout<<"\n Enter Amount In Rupees Currency \t\t";
                cin>>Rs;
               cur=Rs/734.32;
                cout<<endl<<"Rs "<<Rs<<" ="<<cur<<" KD";
            }
            else if(r==8)
            { cout<<"\n                     *Dinar  To Rupees                            ";
            cout<<"\n Enter Amount In Dinar Currency \t\t";
                cin>>Rs;
                cur=Rs*734.32;
                cout<<endl<<Rs<<"KD"<<" ="<<" Rs"<<cur;
            }
            else if(r==9)

            { cout<<"\n                      *Rupees To Euro                             ";
            cout<<"\n Enter Amount In Rupees Currency \t\t";
               cin>>Rs;
                cur=Rs/229.97;
                cout<<endl<<"Rs "<<Rs<<" ="<<cur<<" EUR";
                            }
            else if(r==10)
            {cout<<"\n                      *Euro  To Rupees                           ";
             cout<<"\n Enter Amount In Euro Currency \t\t";
                cin>>Rs;
                cur=Rs*229.97;
                cout<<endl<<Rs<<"EUR "<<" ="<<" Rs"<<cur;
            }
            else  if(r==11)
            { cout<<"\n                      *Rupees To Yuan                             ";
             cout<<"\n Enter Amount In Rupees Currency \t\t";
               cin>>Rs;
                cur=Rs/32.7;
                cout<<endl<<"Rs "<<Rs<<" ="<<cur<<"¥";
            }
            else  if(r==12)
            {
                cout<<"\n                      *Yuan  To Rupees                           ";
                cout<<"\n Enter Amount In Yuan Currency \t\t";
                cin>>Rs;
                cur=Rs*32.7;
                cout<<endl<<Rs<<"¥"<<" ="<<" Rs"<<cur;
            }
            else
                {
                cout<<"\n\n Invalid Number Pressed";
                cout<<endl;
                }
        }
   else if(c=='l' || c=='L')
        {
            cout<<"\n ...................... Length Conversion .......................... ";
            cout<<"\n                      * Kilometer To Meter                           ";
            cout<<"\n                      * Meter To Kilometer                          ";
            cout<<"\n                      * Meter To centimeter                           ";
            cout<<"\n                      * centimeter To Meter                           ";
            cout<<"\n                      * Meter To milimeter                           ";
            cout<<"\n                      * milimeter To Meter                           ";
            cout<<endl<<endl<<endl;
            cout<<"\n  11 for                      Kilometer To Meter Conversion                            ";
            cout<<"\n  22 for                      Meter To Kilometer  Conversion                         ";
            cout<<"\n  33 for                      Meter To centimeter Conversion                          ";
            cout<<"\n  44 for                      centimeter To Meter Conversion                           ";
            cout<<"\n  55 for                      Meter To milimeter Conversion                         ";
            cout<<"\n  66 for                      milimeter To Meter Conversion                          ";
            cout<<"\n Enter Any Number Given Above To Perform Your Desired Conversion ";
            cin>>l;
            if(l==11)
            {
              cout<<"\n                      *Kilometer To Meter                           ";
                cout<<"\n\n Enter Lenth In Kilometers \t";
                cin>>lk;
                lm=lk*1000;
                cout<<" \n Length In Meters : "<<lm;
                cout<<endl<<"\t"<<lk<<" Km ="<<lm<<" m";
            }
            else if(l==22)
            {
                 cout<<"\n                      *Meter To Kilometer                          ";
                 cout<<"\n\n Enter Lenth In Meters \t";
                cin>>lm;
                lk=lm/1000;
                cout<<" \n Length In Kilometers : "<<lk;
                cout<<endl<<"\t"<<lm<<" m ="<<lk<<" Km";
            }
            else if(l==33)
            {
                 cout<<"\n                      *Meter To centimeter                           ";
                 cout<<"\n\n Enter Lenth In Meters \t";
                cin>>lm;
                lc=lm*100;
                cout<<" \n Length In centimeters : "<<lc;
                cout<<endl<<"\t"<<lm<<" m ="<<lc<<" cm";
            }
            else if(l==44)
            {
                cout<<"\n                      *centimeter To Meter                           ";
                cout<<"\n\n Enter Lenth In centimeters \t";
                cin>>lc;
                lm=lc/100;
                cout<<" \n Length In meters : "<<lm;
                cout<<endl<<"\t"<<lc<<" cm ="<<lm<<" m";
            }
            else  if(l==55)
            {
                cout<<"\n                    *Meter To milimeter                          ";
                cout<<"\n\n Enter Lenth In meters \t";
                cin>>lm;
                lmm=lm*1000;
                cout<<" \n Length In milimeters : "<<lmm;
                cout<<endl<<"\t"<<lm<<" m ="<<lmm<<" mm";
            }
            else if(l==66)
            {
                cout<<"\n                      *milimeter To Meter                           ";
                cout<<"\n\n Enter Lenth In milimeters \t";
                cin>>lmm;
                lm=lmm/1000;
                cout<<" \n Length In milimeters : "<<lm;
                cout<<endl<<"\t"<<lmm<<" mm ="<<lm<<" m";
            }
            else
            {
                cout<<"\n Invalid Input ";
            }
        }
   else if(c=='t' || c=='T')
        {
       cout<<"\n .......................Temprature Conversion............................ ";
       cout<<" \n                    * Celcius To Kelvin                            ";
       cout<<" \n                    * Kelvin To Celcius                                  ";
       cout<<" \n                    * Celcius To Farenhite                            ";
       cout<<" \n                    * Farenhite   To Celcius                                  ";
       cout<<" \n                    * Kelvin To Farenhite                            ";
       cout<<" \n                    * Farenhite   To Kelvin                                  ";
       cout<<"\n       Press 1  For Converting Celcius To Kelvin          ";
       cout<<"\n       Press 2  For Converting  Kelvin To Celcius       ";
       cout<<"\n     Press 3  For Converting Celcius To Farenhite         ";
       cout<<"\n       Press 4 For Converting  Farenhite   To Celcius       ";
       cout<<"\n     Press 5 For Converting Kelvin To Farenhite           ";
       cout<<"\n       Press 6 For Converting  Farenhite   To Kelvin       ";
       cin>>t;
        if(t==1)
            {
              cout<<"\n                       Celcius To Kelvin                                  ";
                 cout<<"\n\n Enter Temprature In Celcius scale \t";
                cin>>temp;
                k=temp+273;
                cout<<" \n Temprature In Kelvin  scale : "<<k;
                cout<<endl<<"\t"<<temp<<" C ="<<k<<" K";
            }
            else if(t==2)
            {
                 cout<<"\n                       Kelvin To Celcius                          ";
                 cout<<"\n\n Enter Temprature In Kelvin scale \t";
                cin>>temp;
                d=temp-273;
               cout<<" \n Temprature In Celcius scale : "<<d;
                cout<<endl<<"\t"<<temp<<" K ="<<d<<" C";
            }
            else if(t==3)
            {
                cout<<"\n                      Celcius To Farenhite                           ";
                cout<<"\n\n Enter Temprature In Celcius scale \t";
                cin>>temp;
                f=temp*9/5+32;
                cout<<" \n Temprature In Farenhite scale : "<<f;
                cout<<endl<<"\t"<<temp<<" C ="<<f<<" F";
            }
            else if(t==4)
            {
                cout<<"\n                      Farenhite   To Celcius                             ";
                cout<<"\n\n Enter Temprature In Farenhite scale \t";
                cin>>temp;
                d=(temp-32)*5/9;
                cout<<" \n Temprature In Celcius scale : "<<d;
                cout<<endl<<"\t"<<temp<<" F ="<<d<<" C";
            }
            else  if(t==5)
            {
                cout<<"\n                    Kelvin To Farenhite";
                cout<<"\n\n Enter Temprature In Kelvin scale \t";
                cin>>temp;
                f=9/5*(temp-273)+32;
                cout<<" \n Temprature In Farenhite scale : "<<f;
                cout<<endl<<"\t"<<temp<<" K ="<<f<<" F";
            }
            else if(t==6)
            {
                cout<<"\n                     Farenhite To Kelvin                          ";
                cout<<"\n\n Enter Temprature In  Farenhite scale \t";
                cin>>temp;
                k=(temp-32)*5/9+273;
                cout<<" \n Temprature In  Farenhite scale : "<<k;
                cout<<endl<<"\t"<<temp<<" F="<<k<<" K";
            }
            else
            {
                cout<<"\n Invalid Input ";
            }
        }
        else if(c=='m' || c=='M')
        {
       cout<<"\n ....................... Mass Conversion............................ ";
       cout<<" \n                      * Gram To Kilogram                            ";
       cout<<" \n                      * Kilogram To Gram                         ";
       cout<<"\n     Press 1  For Converting Gram To Kilogram          ";
       cout<<"\n     Press 2  For Converting Kilogram To Gram        ";
       cin>>x;
       if(x==1)
       {
           double g,k;
        cout<<"\n \n Enter Mass In Grams  \n";
        cin>>g;
        k=g/1000;
        cout<<"\n Mass In Kilograms = "<<k;
        cout<<"\n"<<g<<" grams = "<<k<<" kg";
       }
       else if(x==2)
       {
           double G,K;
        cout<<"\n \n Enter Mass In Kilorams  \n";
        cin>>K;
        G=K*1000;
        cout<<"\n Mass In Grams = "<<G;
        cout<<"\n"<<K<<" Kg = "<<G<<"g";
       }
       else
       {
           cout<<" \n Invalid Number Pressed";
       }




        }
        cout<<"\n\n If you want to perform conversion again Press y  ................    ";
        cin>>chk;
        }while(chk=='y' || chk=='Y');
    }

};
class AREAS
{
public:
    char ch;
    int ar;
    float A,R,L,H,base,height,area;
    AREAS()
    {
        do
        {
            cout<<"\n .......................AREAS........................... ";
         cout<<"\n\t\t\t\t*Square \n\t\t\t\t*Rectangle\n\t\t\t\t*Circle\n\t\t\t\t*Triangle";
         cout<<"\n 1 for Square \n 2 for Rectangle \n 3 for Circle \n 4 for Triangle ";
         cin>>ar;
         if(ar==1)
                {
                    cout<<"\n\t\t\t\t*Square";
                    cout<<"\n Enter Length Of One Side Of Square...........";
                    cin>>A;
                    area=A*A;
                    cout<<" \n AREA = "<<area;

                }
        else if(ar==2)
                {
                    cout<<"\n\t\t\t\t*Rectangle";
                    cout<<"\n Enter Length ......";
                    cin>>L;
                    cout<<"\n Enter Height..";
                    cin>>H;
                    area=L*H;
                    cout<<" \n AREA = "<<area;
                }
        else    if(ar==3)
                {
                    cout<<"\n\t\t\t\t*Circle";
                    cout<<"\n Enter Radius Of The Circle......";
                    cin>>R;
                    area=pi*(R*R);
                    cout<<" \n AREA = "<<area;

                }
        else if(ar==4)
        {
                    cout<<"\n\t\t\t\t*Triangle";
                    cout<<"\n Enter Value Of The Base......";
                    cin>>base;
                    cout<<"\n Enter Value Of The Height.......";
                    cin>>height;
                    area=(base*height)/2;
                    cout<<" \n AREA = "<<area;
        }
        else
        {
            cout<<"\n Invalid Option ";
        }

              cout<<"\n If you want to find Area again press y...............";
        cin>>ch;

        }while(ch=='y' || ch=='Y');

    }

};
class  VOLUMES
{

public:
    int vl;
    char tst;
    float vol,len,radius,cu,rc,co,hi;
    VOLUMES()
    {
        do
        {
            cout<<"\n .......................VOLUMES.......................... ";
            cout<<"\n\t\t\t\t*Cylindre \n\t\t\t\t*Cube\n\t\t\t\t*Sphere\n\t\t\t\t*Cone";
            cout<<"\n 1 for Cylindre \n 2 for Cube \n 3 for Sphere \n 4 for cone  \n \t\t\t............";

            cin>>vl;
            if(vl==1)
                {
                cout<<"\n\t\t\t\t*Cylindre";

                    cout<<"\n Enter Value Of The Radius......";
                    cin>>radius;
                    cout<<"\n Enter Value Of The Height  Of The Cylindre.......";
                    cin>>len;
                    vol=2*pi*radius*len;

                    cout<<" \n VOLUME = "<<vol;
                }
           else  if(vl==2)
                {

                cout<<"\n\t\t\t\t*Cube";
                 cout<<"\n Enter Value Of One Side Of The Cube.......";
                    cin>>cu;
                    vol=cu*cu*cu;

                    cout<<" \n VOLUME = "<<vol;
                }
             else    if(vl==3)
                {


                cout<<"\n\t\t\t\t*Sphere";
                cout<<" \n Enter Radius Of The Sphere ........";
                cin>>rc;
                vol=4/3*pi*(rc*rc*rc);
                 cout<<" \n VOLUME = "<<vol;
                }

          else if(vl==4)
                {

                    float co,hi;
                cout<<"\n\t\t\t\t*Cone";
                cout<<" \n Enter Radius Of The Cone ........";
                cin>>co;
                cout<<" \n Enter  Height Of The Cone ........";
                cin>>hi;
                vol=pi*(co*co)*hi/3;
                 cout<<" \n VOLUME = "<<vol;

                }

                else
        {
            cout<<"\n Invalid Option";
        }
        cout<<"\n If you want to find Volume again press y...............";
        cin>>tst;

        }while(tst=='y' || tst=='Y');


    }



};
class BasicPhysics
{
    public:
        char test;
        int form,i,q;
        float time,dis,acc,vel,w,ff,dd,ht,mass,pe,ke,Mo,Pr,frc,AREA,vol, den;
        float e,I,rr,vv,res,ii,vt, V,iii,rrr,Q,II,VV,CC,Vv,Ii,cap,qq,ve,pow,pl,Rr,IIi,force,ac;
    BasicPhysics()
    {

        do
        {
             cout<<"\n .......................BASIC PYSICS............................ ";
            cout<<"\n\t\t\t\t\t  Mechanical Terms ";
            cout<<"\n\t\t\t\t*Velocity \n\t\t\t\t*Accelaration \n\t\t\t\t*Work Done\n\t\t\t\t*Potential Energy";
            cout<<"\n\t\t\t\t*Kinetic Energy \n\t\t\t\t*Momentum\n\t\t\t\t*Pressure\n\t\t\t\t*Density\n\t\t\t\t*Force";

            cout<<"\n\t\t\t\t\t  Electrical Terms ";

            cout<<"\n\t\t\t\t*Current\n\t\t\t\t*Resistance \n\t\t\t\t*Voltage\n\t\t\t\t*Charge";
            cout<<"\n\t\t\t\t*Capacitance \n\t\t\t\t*Power\n\t\t\t\t*Power Loss\n";

            cout<<"\n    Press 1  For Velocity                           ";
            cout<<"\n    Press 2  For Accelaration                       ";
            cout<<"\n    Press 3  For Work Done                          ";
            cout<<"\n    Press 4  For Potential Energy                   ";
            cout<<"\n    Press 5  For Kinetic Energy                     ";
            cout<<"\n    Press 6  For Momentum                           ";
            cout<<"\n    Press 7  For Pressure                           ";
            cout<<"\n    Press 8  For Density                            ";
            cout<<"\n    Press 9  For Current                            ";
            cout<<"\n    Press 10 For Resistance                         ";
            cout<<"\n    Press 11 For Voltage                            ";
            cout<<"\n    Press 12 For Charge                             ";
            cout<<"\n    Press 13 For Capacitance                        ";
            cout<<"\n    Press 14 For Power                              ";
            cout<<"\n    Press 15 For Power Loss                         ";
            cout<<"\n    Press 16 For Force                         ";
            cout<<endl<<"..................";
            cin>>form;

            if(form==1)
            {
                cout<<"\n     *Velocity                           ";
                cout<<"\n Enter Distance ...............";
                cin>>dis;
                cout<<"\n Enter Time ...............";
                cin>>time;
                vel=dis/time;
                cout<<"\n Velocity ="<<vel<<" m/s";

            }
            else if(form==2)
                {
                     cout<<"\n     Accelaration                       ";
                     cout<<"\n Enter Distance ...............";
                     cin>>vel;
                     cout<<"\n Enter Time ...............";
                     cin>>time;
                     acc=vel/time;
                     cout<<"\n  Accelaration="<<acc<<"meter per square second";
                }
            else if(form==3)
            {
                cout<<"\n     Work Done                          ";
                cout<<"\n Enter Fore ...............";
                cin>>ff;
                cout<<"\n Enter Distance ...............";
                cin>>dd;
                w=ff*dd;
                cout<<"\n  Work Done ="<<w<<"newton";
            }
            else if(form==4)
            {
                cout<<"\n    Press 4  For Potential Energy                   ";
                cout<<"\n Enter Mass ...............";
                cin>>mass;
                cout<<"\n Enter Height ...............";
                cin>>ht;
                pe=mass*g*ht;
                cout<<"\n  Potential Energy  ="<<pe<<"joule";
            }
            else if(form==5)
            {
            cout<<"\n    Kinetic Energy                     ";
                 cout<<"\n Enter Mass ...............";
                cin>>mass;
                cout<<"\n Enter Height ...............";
                cin>>ht;
                ke=(1/2)*mass*vel*vel;
                cout<<"\n  Kinetic Energy  ="<<ht<<"joule";
                }


            else if(form==6)
            {
                cout<<"\n       Momentum                           ";
                cout<<"\n Enter Mass ...............";
                cin>>mass;
                cout<<"\n Enter Velocity ...............";
                cin>>vel;
                Mo=mass*vel;
                cout<<"\n  Momentum  ="<<Mo<<"Kg.m/sec";

            }
            else if(form==7)
            {

            cout<<"\n     Pressure                           ";
           cout<<"\n Enter Force ...............";
                cin>>frc;
                cout<<"\n Enter Area ...............";
                cin>>AREA;
                Pr=frc/AREA;
                 cout<<"\n   Pressure  ="<<Pr<<"N/square meter";


      }
            else if(form==8)
            {
                cout<<"\n          Density                            ";
                 cout<<"\n Enter Mass ...............";
                cin>>mass;
                 cout<<"\n Enter Volume  ...............";
                cin>>vol;
                den=mass/vol;
                cout<<"\n  Density   ="<<den<<"Kg/cubic meter";
                }
            else if(form==9)
            {
                cout<<"\n       Current                            ";
                 cout<<"\n     11 For Current from Charge And Time                          ";
                 cout<<"\n     22 For Current from Voltage And Resistance                            ";
                 cin>>i;
                 if(i==11)
                 {
                     cout<<"\n     Current from Charge And Time                          ";
                     cout<<"\n Enter value Of Charge.........";
                     cin>>e;
                    cout<<"\n Enter Time ...............";
                     cin>>time;
                     I=e/time;
                      cout<<"\n  Current   ="<<I<<"Ampere";
                 }
                 else if(i==22)
                    {
                    cout<<"\n      Current from Voltage And Resistance                            ";
                    cout<<"\n Enter value Of Resistance.........";
                    cin>>rr;
                    cout<<"\n Enter Voltage ...............";
                    cin>>vv;
                    I=vv/rr;
                      cout<<"\n  Current   ="<<I<<"Ampere";

                    }
                    else {cout<<"\n Invalid";}
            }
            else if(form==10)
            {
                cout<<"\n     Resistance                         ";
                cout<<"\n Enter Voltage ...............";
                cin>>vt;
                cout<<"\n Enter Current ...............";
                cin>>ii;
                res=vt/ii;
                cout<<"\n Resistance   ="<< res<<"Ohm";



            }
            else if(form==11)
            {
                cout<<"\n    Voltage                            ";
                cout<<"\n Enter Resistance ...............";
                cin>>rrr;
                cout<<"\n Enter Current ...............";
                cin>>iii;
                V=iii*rrr;
                cout<<"\n Voltage   ="<<V<<"Volt";
            }
            else if(form==12)
            {
                 cout<<"\n     Charge                             ";
                 cout<<"\n    Press 55 For Charge From Time And Current                             ";
                 cout<<"\n    Press 66 For Charge From Voltage And Capacitance                               ";
                 cin>>q;
                 if(q==55)
                 {
                      cout<<"\n     Charge From Time And Current                             ";
                  cout<<"\n Enter Time ...............";
                  cin>>time;
                   cout<<"\n Enter Current ...............";
                cin>>II;
                Q=II*time;
                cout<<"\n Charge   ="<<Q<<"Coulomb";
                 }
                 else if(q==66)
                 {
                cout<<"\n     Charge From Voltage And Capacitance                            ";
                cout<<"\n Enter Capacitance  ...............";
                cin>>CC;
                cout<<"\n Enter Voltage ...............";
                cin>>VV;
                Q=CC*VV;
                cout<<"\n Charge   ="<<Q<<"Coulomb";

                 }
                 else{cout<<"\n Invalid";}

            }
            else if(form==13)
            {

                cout<<"\n              Capacitance                        ";
                cout<<"\n Enter Charge  ...............";
                cin>>qq;
                cout<<"\n Enter Voltage ...............";
                cin>>ve;
                cap=qq/ve;
                 cout<<"\n  Capacitance   ="<<cap<<"farad";


            }
            else if(form==14)
            {
                cout<<"\n          Power                              ";


                cout<<"\n Enter Voltage   ...............";
                cin>>Vv;
                cout<<"\n Enter Current ...............";
                cin>>Ii;
                pow=Ii*Vv;
                cout<<"\n  Power   ="<<pow<<"watt";
            }
            else if(form==15)
            {
                 cout<<"\n     Power Loss                         ";
             cout<<"\n Enter Resistance ...............";
                cin>>Rr;
                cout<<"\n Enter Current ...............";
                cin>>IIi;
                pl=IIi*IIi*Rr;
                cout<<"\n  Power Loss  ="<<pl<<"watt";

            }
             else if(form==16)
            {

                cout<<"\n      Force                         ";
                cout<<"\n Enter Value Of Mass..........";
                cin>>mass;
                 cout<<"\n Enter Value Of Accelaration..........";
                cin>>ac;
                force=mass*ac;
                cout<<"\n Force  ="<<force<<"newton";
            }

             else
             {
                 cout<<"\n \t\t\t\t Invalid Option Pressed ";
             }

        cout<<"\n If you want to solve another problem Press y........";
        cin>>test;
        }while(test=='y' || test=='Y');
    }
};

int main()
{
    char ch;
    int back;
  
  do
  {
  	input i1;
  cout<<" \n Enter Any Character Given Above To Solve Your  Problem \n ";
  cin>>ch;
  	if(ch=='c' || ch=='C')
  {
      CONVERSIONS c1;
  }
  else if(ch=='a' || ch=='A')
  {
       AREAS a1;
  }
  else if(ch=='v' || ch=='V')
  {
       VOLUMES v1;
  }
else if(ch=='b' || ch=='B')
  {
       BasicPhysics b1;
  }
  else
  {
      cout<<"\n Invalid Input ";
  }

  	cout<<"\n 1)Back to Home page \n 2)Exit\n......";
  	cin>>back;
  }while(back==1);
  


}




