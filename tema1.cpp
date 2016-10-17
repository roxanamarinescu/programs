#include<iostream>
#include<conio.h>
using namespace std;

struct complex{
   float x,y;
};
complex a,b,c;

void afisare(complex d)
{
    if(d.y>0)
        cout<<d.x<<"+"<<d.y<<"i"<<endl;
    else
        cout<<d.x<<d.y<<"i"<<endl;
}
void adunare()
{
    c.x=a.x+b.x;
    c.y=a.y+b.y;
}

void scadere()
{
    c.x=a.x-b.x;
    c.y=a.y-b.y;
}

void inmultire()
{
    c.x=a.x*b.x-a.y*b.y;
    c.y=a.x*b.y+a.y*b.x;
}

void impartire()
{
  c.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
  c.y=(a.y*b.x-a.x*b.y)/(b.x*b.x+b.y*b.y);
}

int main()
{
  cout<<"primul numar este:";cin>>a.x>>a.y;
  cout<<"al doilea numar:";cin>>b.x>>b.y;

  cout<<"a=";
  afisare(a);
  cout<<"b=";
  afisare(b);

  adunare();
  cout<<"suma= "; afisare(c);

  scadere();
  cout<<"diferenta= "; afisare(c);

  inmultire();
  cout<<"produs= "; afisare(c);

  impartire();
  cout<<"impartire= "; afisare(c);


  return 0;
}
