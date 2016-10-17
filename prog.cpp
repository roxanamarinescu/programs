#include<iostream>
#include<conio.h>

using namespace std;

struct adresa{
 char nume_oras[15], strada[25];
 int cod_oras, numar;
}adresa;

struct numar_de_telefon{
 int prefix;
 long numar_efectiv;
}numar_de_telefon;

struct student
{
    char nume[20], prenume[20], facultate[3];
    struct adresa adresaStudent;
    struct numar_de_telefon telefon;
    int varsta, note[10], medie_promovare, nr_de_absente_examene;
};


void citire(struct student studenti[], int n)
{
    for(int i=0;i<n;i++)
  {
    cout<<"nume= ";cin>>studenti[i].nume;
    cout<<"prenume= ";cin>>studenti[i].prenume;
    cout<<"adresa= ";cin>>studenti[i].adresaStudent.nume_oras>>studenti[i].adresaStudent.cod_oras>>studenti[i].adresaStudent.strada>>studenti[i].adresaStudent.numar;
    cout<<"nr telefon= ";cin>>studenti[i].telefon.prefix>>studenti[i].telefon.numar_efectiv;
    cout<<"varsta= "; cin>>studenti[i].varsta;
    cout<<"note= ";
    for(int j = 0; j < 10; j++){
        cout<<"Nota"<<j<<": ";
        cin>>studenti[i].note[j];
    }
    cout<<"media de promovare= "; cin>>studenti[i].medie_promovare;
    cout<<"numar absente= "; cin>>studenti[i].nr_de_absente_examene;
    cout<<endl;
  }
}

void afisare(struct student studenti[], int n)
{
    for(int i=0;i<n;i++)
  {
    cout<<"nume= "<<studenti[i].nume<<endl;
    cout<<"prenume= "<<studenti[i].prenume<<endl;
    cout<<"adresa= "<<studenti[i].adresaStudent.nume_oras<<" "<<studenti[i].adresaStudent.cod_oras<<" "<<studenti[i].adresaStudent.strada<<" "<<studenti[i].adresaStudent.numar<<endl;
    cout<<"nr telefon= "<<studenti[i].telefon.prefix<<" "<<studenti[i].telefon.numar_efectiv<<endl;
    cout<<"varsta= "<<studenti[i].varsta<<endl;
    for(int j = 0; j < 10; j++){
        cout<<"Nota"<<j<<": ";
        cout<<studenti[i].note[j];
    }
    cout<<"media de promovare= "<<studenti[i].medie_promovare<<endl;
    cout<<"numar absente= "<<studenti[i].nr_de_absente_examene<<endl;
  }
}

int main()
{
    int n;
    cout<<"n="; cin>>n;
    struct student studenti[20];
    citire(studenti, n);
    afisare(studenti,n);
    return 0;
}
