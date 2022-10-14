#include<iostream>
using namespace std;
int main()
{
 int year;
 int backlog;
 string branch;
 float percentage;
 cin>>year>>backlog>>branch>>percentage;
 if((year==3)and(backlog==0)and(branch=="cse" or branch=="it" or branch=="ece")and(percentage>=70))
 {
 	cout<<"eligible";
 }
 else
 {
 	cout<<"not eligible";
 }
 return 0;
}
