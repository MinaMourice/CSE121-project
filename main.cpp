// arrays example
#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;

int func1(int x)       //x for month y for dd
{  int y=0;

return y ;
}

string setx (string x) //detect "," in CourseExam string () & in student
{
std::string::size_type pos = x.find_first_of(",");
string firstName = x.substr(0, pos);
return firstName ;
}
string sety (string x) //detect "," in CourseExam string () & in student
{
std::string::size_type pos2 = x.find_first_of(",");
string firstName = x.erase(0, pos2+1);
std::string::size_type pos3 = x.find(",");
string secondName = x.substr(0 , pos3) ;
return secondName ;
}
string setz (string x) //detect "," in CourseExam string () & in student
{
std::string::size_type pos2 = x.find_last_of(",");
string thirdName = x.erase(pos2 , 20) ;
std::string::size_type pos3 = x.find_last_of(",");
string secondName = x.erase(0 , pos3+1) ;
return secondName ;
}
string setk (string x) //detect "," in CourseExam string () & in student
{
std::string::size_type pos2 = x.find_last_of(",");
string thirdName = x.substr(pos2+1) ;
return thirdName ;
}
int setyear (string x){}
int setmonth (string x){}
int setday (string x) {}


int main()
{
string temp1 , temp2 , temp3 ; int year[100] , month[100] , day[100] ;


string CE , S;
getline(cin , CE) ;
getline(cin , S) ;
string op ;
getline (cin , op ) ;
CE.erase(0,15);CE.erase(CE.length() -1); // cut CE
S.erase(0,10);S.erase(S.length()-1); // Cut S
string d , Code[100] , Name[100] , Date[100] ,  Location[100] ;
string str ;


//Course Exams
int x = 1; //no.of CE
for(int i = 0 ; i<=2000;i++){ // Find Semicolum
if(CE[i]== ';')
{
x++ ;
}
else if (CE[i] == ']')
break ;
}

for(int i = 0 ; i<=x ; i++){
std::string::size_type pos = CE.find_first_of(";");
d  = CE.substr(0, pos);
Code[i] = setx(d) ;
Name[i] = sety(d) ;
Date[i] = setz(d) ;
Location[i] = setk(d) ;

std::string::size_type pos1 = Date[i].find_first_of("/");
std::string::size_type pos2 = Date[i].find_last_of("/");

temp1  = Date[i].substr(0,pos1) ;
day[i]= atof (temp1 .c_str()) ;
temp2  = Date[i].substr(pos1+1,pos2) ;
month[i] = atof (temp2. c_str()) ;
temp3  = Date[i].substr(pos2+1,4);
year[i] = atof (temp3 . c_str()) ;


CE.erase(0 , pos+1) ;

}
//Start date
int index , index2;
int  minm=month[0] ;

for(int i =0 ; i<=x ; i++ ){
if(month[i]<=minm) {minm=month[i]; index2 = i ;}
}
int   mind=day[index2] ;
for(int i =0 ; i<=x ; i++ ){
if(month[i]==minm) { if(day[i]<=mind){mind=day[i] ; index=i;} }
}



//End date
    int index3 , index4;
int  maxm=month[0] ;

for(int i =0 ; i<=x ; i++ ){
if(month[i]>=maxm) {maxm=month[i]; index3 = i ;}
}
int   maxd=day[index3] ;
for(int i =0 ; i<=x ; i++ ){
if(month[i]==maxm) { if(day[i]>=maxd){maxd=day[i] ; index4=i;} }
}



//location
   string LocationA = "HallA" , LocationB = "HallB" ,LocationC = "HallC",LocationD = "HallD",Location1 = "Hall1",Location2 = "Hall2",Location3 = "Hall3",Location4 = "Hall4";
int  hA=0 , hB=0 , hC=0 , hD=0 , h1=0 , h2=0 , h3=0 , h4=0 , hT;

for(int i = 0 ; i<=x ; i++) {
if(LocationA == Location[i]){
hA++ ;
if(hA==2  ) hA =hA-1 ;
 else if(hA==3  ) hA =hA-2 ;
}
else if(LocationB == Location[i]){
hB++ ;
if(hB==2  ) hB =hB-1 ;
 else if(hB==3  ) hB =hB-2 ;
}
else  if(LocationC == Location[i]){
hC++ ;
if(hC==2  ) hC =hC-1 ;
else if(hC==3  ) hC =hC-2 ;
 }
else if(LocationD == Location[i]){
hD++ ;
if(hD==2  ) hD =hD-1 ;
else if(hD==3  ) hD =hD-2 ;
 }
else if(Location1 == Location[i]){
h1++ ;
if(h1==2  ) h1 =h1-1 ;
else if(h1==3  ) h1 =h1-2 ;
 }
else if(Location2 == Location[i]){
h2++ ;
if(h2==2  ) h2 =h2-1 ;
 else if(h2==3  ) h2 =h2-2 ;
 }
else if(Location3 == Location[i]){
h3++ ;
if(h3==2  ) h3 =h3-1 ;
else if(h3==3  ) h3 =h3-2 ;
}
else if(Location4 == Location[i]){
h4++ ;
if(h4==2  ) h4 =h4-1 ;
else if(h4==3  ) h4 =h4-2 ;
}
}
hT = hA + hB + hC + hD + h1 + h2 + h3 + h4 ;






//Students

string e , NameS[100] , CC[100][10] , CCe ,ID[100]   ;
int y =1  ; // no.of S
for(int i = 0 ; i<=1000;i++){ // Find Semicolum
if(S[i]== ';')
{
y++ ;
}
}
int id[100] , mine , maxe , drop[100] ;
for(int i = 0 ; i<=y ; i++){
std::string::size_type pos = S.find_first_of(";");
e  = S.substr(0, pos);
ID[i] = setx(e) ;
NameS[i] = sety(e) ;
CCe = setk(e) ;
id[i] = atof(ID[i].c_str()) ;





S.erase(0 , pos+1) ;
}
//min max
maxe =id[0] , mine = id[0];
for(int i = 0 ; i<=y ; i++){
if(id[i]>maxe){
maxe=id[i] ;
}
else if(id[i]<mine ) {
mine =id[i] ;
}
}


//drop id






while(1) {

if (op == "Number_Students" )
{
cout<<y ;
}
else if (op == "Number_Courses")
{
cout<<x ;
}
else if (op == "Number_Halls")
{
cout<<hT ;
}
else if (op == "Student_ID_Min")
{
cout<<mine;
}
else if (op == "Student_ID_Max")
{
cout<<maxe ;
}
else if (op == "Students_Dropped_IDs")
{
    int diff = maxe - mine - y + 1 ;
  int i =mine+1 , a =0;
for(int k = 0 ; k<=500 ; k++){
for(int j = 0 ; j<=500 ; j++)
{
if (id[j]==i)
    a = 1 ;

}
 if (a==0)
cout<<i<<endl ;

    else if (a = 1)
    a=0 ;
    i++ ;
     if(i == maxe)
    break ;
    }


}



else if (op == "Exams_Start_Date")
{

   cout<<day[index]<<"/"<<month[index]<<"/"<<year[index] ;

}
else if (op == "Exams_End_Date"){

   cout<<day[index4]<<"/"<<month[index4]<<"/"<<year[index4] ;
}

else if (op == "Exams_Period_InDays")
{
int    day1 = day[index] , month1 = month[index] , year1 = year[index] ;
int  day2 = day[index4] , month2 = month[index4] , year2 = month[index4] ;
 int n1=0 , n2=0 ;
/*int diff1 =month - month1 ;
int diff2 = month - month2 ;
int diff3 = abs(diff2 - diff1) ;
int total = diff3 * 30 ;*/

switch(month1)
{
case 1: n1=n1+day1; break;
case 2: n1=n1+31+day1; break;
case 3: n1=n1+59+day1; break;
case 4: n1=n1+90+day1; break;
case 5: n1=n1+120+day1;break;
case 6: n1=n1+151+day1; break;
case 7: n1=n1+181+day1; break;
case 8: n1=n1+212+day1; break;
case 9: n1=n1+243+day1; break;
case 10:n1=n1+273+day1; break;
case 11:n1=n1+304+day1; break;
case 12:n1=n1+334+day1; break;

}
 //
switch(month2)
{
case 1: n2=n2+day2; break;
case 2: n2=n2+31+day2; break;
case 3: n2=n2+59+day2; break;
case 4: n2=n2+90+day2; break;
case 5: n2=n2+120+day2;break;
case 6: n2=n2+151+day2; break;
case 7: n2=n2+181+day2; break;
case 8: n2=n2+212+day2; break;
case 9: n2=n2+243+day2; break;
case 10:n2=n2+273+day2; break;
case 11:n2=n2+304+day2; break;
case 12:n2=n2+334+day2; break;
}
int diff1 = abs(n1-n2);

    cout<<diff1+1 ;

}
else if (op== "Quit")
{

break ;
}
return 0 ;

}
}


