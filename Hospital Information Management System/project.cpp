# include <iostream>
#include <fstream>
using namespace std;
void insert (){
ofstream file;
int id;
string fname;
string lname;
string city;
int grade;
    cout<<"Pleas enter student id number, firstname , lastname ,city,grade"<<endl;
    cin>>id>>fname>>lname>>city>>grade;
    ifstream file2;
    file2.open("project.txt");
    int id1;
string fname1;
string lname1;
string city1;
int grade1;
int flage=0;

    while(file2>>id1>>fname1>>lname1>>city1>>grade1){
        if(id==id1){
        flage=1;
        break;
        }
    }
    if(flage==0 && id >0){
         ifstream file3;
    file3.open("project.txt");
    int id2;
string fname2;
string lname2;
string city2;
int grade2;
int idarray[10000];
string fnamearray[10000];
string lnamearray[10000];
string cityarray[10000];
int gradearray[10000];
int chk=0;
int n=0;
   for (int i=0;i<10000;i++){
    if (file3>>id2>>fname2>>lname2>>city2>>grade2){
        if (id2>id && chk==0){
chk=1;
n=i;
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }

        else {
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }
}
}
file.open("project.txt",ios::trunc);
for (int j=0;j<10000;j++){
      if (idarray[j]==0){
    break;
    }
    if (chk==1 && j==n){
     file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
    file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
    else{
 file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
}
if (chk==0){
    file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
}
    }
else if (flage==1){
cout<<"there is allready student with this ID"<<endl;
}
file.close();
}
void read(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
while(file>>id>>fname>>lname>>city>>grade){
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
}
file.close();
}
void searchgrade(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
while(file>>id>>fname>>lname>>city>>grade){
    if (id==0){
    break;
    }
  else if(id!=0){
   if (grade>=75){
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
}
}
}
file.close();
}
void search(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
int n=0;
cout<<"if you want to search by id pleas enter 1"<<endl;
cout<<"if you want to search by first name pleas enter 2"<<endl;
cout<<"if you want to search by last name pleas enter 3"<<endl;
cout<<"if you want to search by city pleas enter 4"<<endl;
cout<<"if you want to search by total grae pleas enter 5"<<endl;
int chk;
cin>>chk;
if(chk==1){
    int srchid;
cout<<"pleas enter the desired id"<<endl;
cin>>srchid;
while(file>>id>>fname>>lname>>city>>grade){
if (id==srchid){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}
else if (chk==2){
  string srchfname;
cout<<"pleas enter the desired name"<<endl;
cin>>srchfname;
while(file>>id>>fname>>lname>>city>>grade){
if (fname==srchfname){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}

else if (chk==3){
   string srchlname;
cout<<"pleas enter the desired name"<<endl;
cin>>srchlname;
while(file>>id>>fname>>lname>>city>>grade){
if (lname==srchlname){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}

}

else if (chk==4){
   string srchcity;
cout<<"pleas enter the desired city"<<endl;
cin>>srchcity;
while(file>>id>>fname>>lname>>city>>grade){
if (city==srchcity){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}

}

else if (chk==5){

   int srchgrade;
cout<<"pleas enter the desired grade"<<endl;
cin>>srchgrade;
while(file>>id>>fname>>lname>>city>>grade){
if (grade==srchgrade){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}

else {

cout<<"incorrect choice"<<endl;
}
file.close();
}
void deletbyid(){
ifstream file;
file.open("project.txt");
int idarray[10000];
string fnamearray[10000];
string lnamearray[10000];
string cityarray[10000];
int gradearray[10000];
int id;
string fname;
string lname;
string city;
int grade;
for (int i=0;i<10000;i++){
    if (file>>id>>fname>>lname>>city>>grade){
idarray[i]=id;
fnamearray[i]=fname;
lnamearray[i]=lname;
cityarray[i]=city;
gradearray[i]=grade;
}
}
ofstream myfile;
int delid;
cout<<"Pleas enter the student id you want to delete his data"<<endl;
cin>>delid;
myfile.open("project.txt",ios::trunc);
for (int j=0;j<10000;j++){
    if (idarray[j]==0){
    break;
    }
  else if(idarray[j]!= delid){
   myfile<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
}
}
file.close();
}
int main() {
    system ("color 1f");
    int chk;
cout<<"                      ******** Welcome in Our control system Project ********     "<<endl<<endl;
cout<<"                      *******************************************************"<<endl;
cout<<"                      * If you want to insert new data pleas enter        1 *"<<endl;
cout<<"                      * If you want to read data pleas enter              2 *"<<endl;
cout<<"                      * to know very good and excellent grade pleas enter 3 *"<<endl;
cout<<"                      * If you want to search data pleas enter            4 *"<<endl;
cout<<"                      * If you want to delete by id pleas enter           5 *"<<endl;
cout<<"                      *******************************************************"<<endl<<endl;
cin>>chk;
if(chk==1){
 char y='y';
   while (y=='y'){
 insert();
 cout<<"do you want to insert again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(chk==2){
 read();
}

else if(chk==3){
 char y='y';
   while (y=='y'){
searchgrade();
 cout<<"do you want to search again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(chk==4){
 char y='y';
   while (y=='y'){
search();
 cout<<"do you want to search again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(chk==5){
 char y='y';
   while (y=='y'){
deletbyid();
 cout<<"do you want to delete again (y:n) ?"<<endl;
 cin>>y;
    }
}
else {
cout<<"sorry pleas enter correcr choice"<<endl;
}

cout<<endl<<"                      ********              By Ali Alzantot          ********     "<<endl<<endl;
    return 0;
}
