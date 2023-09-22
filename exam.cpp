#include <iostream>
#include <fstream>
#include <string>
#include "header.h"
#include "question.cpp"



using namespace std;

void CheckStudent(string,string *,int);
string EnterInformation();
int StudentAnswerr();

int main() {


cout<<"********* (Welcome the Exam) *********"<<endl<<endl;
cout<<"First of enter your information please.."<< endl;

fstream file;

file.open("StudentList.txt",ios::app);

file.close();

file<<"John"<<" "<< "12"<<" "<<"john2121";

fstream file2;
file.open("StudentList.txt",ios::in);
string satir;
string student[100];

int i=0;
while(getline(file,satir)) {
student[i]=satir;
i++;
}

file2.close();

string satir2=EnterInformation();

CheckStudent(satir2,student,i);

int a=StudentAnswerr();

cout<<"Exam Done!"<<endl<<endl;

cout<<"true:"<<a<<" "<<"false:"<<5-a<<" "<<"point(100):"<<20*a<<endl;

return 0;

}
   


void CheckStudent(string satir2,string *ptr,int x) {
bool find=false;
for(int j=0;j<x;j++) {

    if(satir2==ptr[j]){
        cout<<"Sucess login"<<endl;
        cout<<endl;
        find=true;
    }
   
}
 if(!find) {
    cout<<"Please try again"<<endl;
        satir2=EnterInformation();
        CheckStudent(satir2,ptr,x);
    }



}



int StudentAnswerr(){
Question questions,answerline;
char StudentAnswer[5];

questions.GetQuestion1();
cin>>StudentAnswer[0];
cout<<endl;

questions.GetQuestion2();
cin>>StudentAnswer[1];
cout<<endl;

questions.GetQuestion3();
cin>>StudentAnswer[2];
cout<<endl;

questions.GetQuestion4();
cin>>StudentAnswer[3];
cout<<endl;

questions.GetQuestion5();
cin>>StudentAnswer[4];
cout<<endl;

int a=answerline.AnswerCheck(StudentAnswer);

return a;
}

string EnterInformation() {
string name,number,password,satir,satir2;

cout<<"Enter your name?"<<endl;
cin>>name;
cout<<"Enter your school number"<<endl;
cin>>number;
cout<<"Enter your password"<<endl;
cin>>password;

satir2=name+" "+number+" "+password;
return satir2;
}


