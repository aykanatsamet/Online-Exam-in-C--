#include "header.h"


void Question::GetQuestion1() {
    
    Question::question1="which is animal? \n A)Dog \n B)Table \n C)Rose";
    cout<<Question::question1<< endl;
}

void Question::GetQuestion2() {
    
   Question::question2="which is  not animal? \n A)Dog \n B)Cat \n C)Rose";
    cout<<Question::question2<< endl;
}

void Question::GetQuestion3() {
    
   Question::question3="which is long? \n A)Finger \n B)Toe \n C)Arm";
    cout<<Question::question3<< endl;
}

void Question::GetQuestion4() {
    
    Question::question4="which is short? \n A)Toe \n B)Arm \n C)Finger";
    cout<<Question::question4<< endl;
}

void Question::GetQuestion5() {

 Question::question5="which is 3+3? \n A)6 \n B)2  \n C)12";
    cout<<Question::question5<< endl;
}

int Question::AnswerCheck(char *a) {
int t=0;
for(int i=0;i<5;i++) {

if(a[i]==Question::Answer[i] || a[i]==Question::answer[i]){
t++;
}

}

return t;


}


   














