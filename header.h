#pragma once 
#include <iostream>
using namespace std;


class Question{

public:
string question1,question2,question3,question4,question5;
char Answer[5];
char answer[5];

public:
Question(){
Answer[0]='A';
Answer[1]='C';
Answer[2]='C';
Answer[3]='A';
Answer[4]='A';

answer[0]='a';
answer[1]='c';
answer[2]='c';
answer[3]='a';
answer[4]='a';

}
void GetQuestion1();
void GetQuestion2();
void GetQuestion3();
void GetQuestion4();
void GetQuestion5();
int AnswerCheck(char *x);

}; 