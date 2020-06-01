#include<iostream>
#include<conio.h>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
int x,life=5;
string function(string word)
{
	string w,inter;
	inter=word;
	int k=0,i;
	w=word;
	x=w.size();
	for(i=0;i<x;i++)
	{
		if((i==2) || (i==6))
		{
			inter[i]=word[i];
		}
		else	
		{
			inter[i]='_';
		}
	
	}
	return(inter);
	
}
int game(string a0,string gameword,int hint)
{
	string w,failed=a0;
	char j;
	int i,l,total=0;
	w=gameword;
	cout<<w;
	cout<<"\n Let the game begin \n";
	switch(hint)
	{
		case 0:
			cout<<"HINT: EVERY SONG SHOULD BE LIKE THIS: \n";
			break;		
		case 1:
			cout<<"HINT: I FEEL SO UNCOMFORTABLE...MEANS..? \n";
			break;
		case 2:
			cout<<"HINT: MAKES YOU STRONGER AND WISER BUT YOU STILL DONT WANT IT \n";
			break;
		case 3:
			cout<<"HINT: I am empty inside \n";
			break;
		case 4:
			cout<<"HINT: A GAME \n";
			break;
		case 5:
			cout<<"HINT: THIS KIND OF KINGS WERE SURELY BRAVE \n";
			break;												
		case 6:
			cout<<"HINT: EN AND DE PREFIX FIX AND AFTER APPLYING PREFIX ITS AN IT RELATED WORD HOWEVER IT HAS DIFFERENT MEANING \n";
			break;
		case 7:
			cout<<"HINT: 7 OF THEM MADE QUITE A NAME: \n";
			break;
		case 8:
			cout<<"HINT: HOLY SHIT! A BLACK CAT \n";
			break;
		case 9:
			cout<<"HINT: UNICORN IS A ...... CREATURE \n";
			break;
		case 10:
			cout<<"HINT: NOT BASIC BUT SOMETHING EXTRA INCLUDED IN NCCS BILL \n";
			break;														
	}
	while(life!=0)
	{
	cout<<"\nEnter your guess:   ";
	cin>>j;
	int ab=0;
	for(i=0;i<x;i++)
	{
		if(a0[i]==j && w[i]=='_')
		{
			w[i]=j;
			ab++;
		}
	}
	
	if(ab>0)
	{
		cout<<"\n..........superb ...... you are one step closer \n";
		for(int ij=0;ij<x;ij++)
		{
			cout<<w[ij]<<" ";
		}
		cout<<"\t\t\t"<<life<<"\tlives remain\n";

	}
	else
	{
		life--;
		cout<<"\t\nwrong guess: \t\t\t";
		cout<<life<<"lives remain\n";
		for(int ij=0;ij<x;ij++)
		{
			cout<<w[ij]<<" ";
		}
		if(life==0)
		{
			cout<<"\n\nSORRY BROTHER YOU LOOSE";
			cout<<"\n the word was: "<<failed;
			int q,p;
			cout<<"\ntry again ..(0 for no 1 for yes )?";
			cin>>q;
			if(q==0)
			exit(0);
			else
			return 1;
		}
	}
		for(int s=0;s<x;s++)
		{
			if(w[s]!='_')
			{
				total++;
			}
		}
		if(total==x)
		{
			cout<<"\n\nCONGRATULATION YOU WIN BROTHER";
			cout<<"\ntry again ..(0 for no 1 for yes )?";
			int q;
			cin>>q;
			if(q==0)
				exit(0);
			else
			return 1;
			    
		}
		total=0;
}
}
int main()
{
	string a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	string inter1,inter2,inter3;
	int a,b,c,j,k,l;
	l1:
	system("cls");
	life=5;	
	a0="rhythmitic";
	a1="awkward";
	a2="mistake";
	a3="hollow";
	a4="hangman";
	a5="conqueror";
	a6="crypt";
	a7="dwarves";
	a8="superstition";
	a9="mystical";
	a10="miscellaonous";
	srand(time(0));
	cout<<"This is the hangman game"<<endl;
	a=rand();
	b=rand();
	c=rand();
	j=(a*b+c)%11;	
	switch(j)
	{
		case 0:
			inter1=function(a0);
			k=game(a0,inter1,0);
			
			break;
		case 1:
			inter1=function(a1);
			k=game(a1,inter1,1);
			break;
		case 2:
			inter1=function(a2);
			k=game(a2,inter1,2);
			break;
		case 3:
			inter1=function(a3);
			k=game(a3,inter1,3);
			break;
		case 4:
			inter1=function(a4);
			k=game(a4,inter1,4);
			break;
		case 5:
			inter1=function(a5);
			k=game(a5,inter1,5);
			break;
		case 6:
			inter1=function(a6);
			k=game(a6,inter1,6);
			break;
		case 7:
			inter1=function(a7);
			k=game(a7,inter1,7);
			break;
		case 8:
			inter1=function(a8);
			k=game(a8,inter1,8);
			break;
		case 9:
			inter1=function(a9);
			k=game(a9,inter1,9);
			break;
		case 10:
			inter1=function(a10);
			k=game(a10,inter1,10);
			break;
							
	}
	if(k==1)
	goto l1;
	else
	exit(0); 
	getch();
	return 0;
}
