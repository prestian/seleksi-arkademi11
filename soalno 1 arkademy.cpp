#include <iostream>
#include <conio.h>
#include <windows.h>
void chgcolor(unsigned short color)

{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
}

using namespace std;
main() {
char NamaL[20],Umur[20],Alamat[20],Hobi[20],Status[10],asalSekolah[20],Skill[10];
chgcolor(14);
cout<<"=========== ISI BIODATA ============";
cout<<"\n\n";
chgcolor(15);
cout<<"Nama Lengkap: "; cin.getline(NamaL ,20);
cout<<"Umur: "; cin.getline(Umur, 20);
cout<<"Alamat: "; cin.getline(Alamat, 20);
cout<<"Hobi: "; cin.getline(Hobi, 20);
cout<<"Status: "; cin.getline(Status, 10);
cout<<"asal Sekolah: "; cin.getline(asalSekolah, 20);
cout<<"Skill: "; cin.getline(Skill, 10);

cout<<endl;
chgcolor(14);
cout<<"========== OUTPUT ==============";
cout<<"\n\n";
chgcolor(15);
cout<<"Nama Lengkap: "<<NamaL<<endl;
cout<<"Umur: "<<Umur<<endl;
cout<<"Alamat: "<<Alamat<<endl;
cout<<"Hobi: "<<Hobi<<endl;
cout<<"Status: "<<Status<<endl;
cout<<"asal Sekolah: "<<asalSekolah<<endl;
cout<<"Skill: "<<Skill<<endl;
cout<<"\n\n";
cout<<"Terima Kasih telah mengisi biodata";
getch();
}


