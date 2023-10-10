#include<iostream>
using namespace std;
int main()
{
	float score;
	cout<<"Enter score ";							
	cin>>score;																//This and the previous line compels user to input their score
	if(score==90||score>90&&score<100||score==100)
	{cout<<"Your grade is A"<<endl;}
	else if(score>90||score==75&&score<90)
	{cout<<"Your grade is B"<<endl;}
	else if(score>60||score==60&&score<75)
	{cout<<"Your grade is C"<<endl;}
	else if(score>45||score==45&&score<60)
	{cout<<"Your grade is D"<<endl;}
	else
	{cout<<"Your grade is F"<<endl;}				    					//The above if else statements (lines 8-17) are used to grade the score into a certain category 
	
	int num;
	cout<<"enter integer ";
	cin>>num;																//the lines 20-21 take the input of the integer from the user
	if (num%2==0&&num%5==0)
	{cout<<"integer is both even and divisible by 5"<<endl;}
	else 
	{cout<<"integer is not even and divisible by 5";}						//the lines 22-25 check if the number is divisible by 5 and even or not
	
	int year;
	cout<<"enter the year ";												
	cin>>year;																//the lines 28-29 take the input from the user
	if(year%4==0)
	{cout<<"the year is a leap year"<<endl;}
	else
	{cout<<"the year is not a leap year"<<endl;}							//the lines 30-33 check if the year is a leap year or not
		
	float GPA,attendance;
	cout<<"enter GPA ";
	cin>>GPA;
	cout<<"enter attendance % ";
	cin>>attendance;														//the lines 36-39 take the input from the user
	if(GPA>=3.5&&attendance>=80)
	{cout<<"the student is elligible for the scholarship"<<endl;}
	else
	{cout<<"the student isn't eliigible for the scholarship"<<endl;}		//the lines 40-43 check if the student is elligible or not

	int character;
	char a,A,e,E,i,I,o,O,u,U;
	cout<<"enter character ";
	cin>>character;															//the lines 47-48 take the input from the user
	if(character==a||character==e||character==i||character==o||character==u||character==A||character==E||character==I||character==O||character==U)
	{cout<<"the character is a vowel"<<endl;}
	else
	{cout<<"the character is a consonant"<<endl;}							//the lines 49-52 check if the character is a vowel or a consoant
}
