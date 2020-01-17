#include <iostream>
#include<string.h>
using namespace std;
int limit_caracter (char c)
{ if (c =='a')
 return 122;
if (c=='A')
return 90;
else
return 127;
}
int deb_caracter (char c )
{
if (c=='a')
return 97;
if (c=='A')
return 65;
else
return 0;
}
string  cesar_crypt(int decallage, string  msg)
{
int i;
char c;
string  crypt;

for(i=0; i < msg.length()+1 ; i++)
{
	c = msg[i];
	int ask =(int)c+decallage ;
	while(ask>limit_caracter(c))
	{
	 decallage = decallage - (limit_caracter(c) - (int)c);

	ask = (int)deb_caracter(c) + decallage ;
}
	crypt[i] = (char)ask ;
}

return crypt;
}
string  dcesar_crypt(int decallage, string  msg)
{
int i;
char c;
string crypt;
for(i=0; i < msg.length() +1; i++)
{
	c = msg[i];
	int ask =(int)c-decallage ;
	while(ask <97)
	{
	 decallage =  decallage - ((int)c -deb_caracter(c));

	ask = (limit_caracter (c)+1)- decallage ;
    }
	crypt[i] = (char)ask ;

}
return crypt;
}
int main()
{
    int num,check,i ;
    string message ;
    cout<<"if you want to cipher press 1 if you want to decipher press 2 \n";
    cin>>check;

  	string  msg;
	int n;
    cout<<"enter the message without spaces\n";
    cin>>msg;
    cout<<"enter the number of shifts \n";
    cin>>n;
    if (check==1)
 {
	string  crypt =cesar_crypt(n,msg);
	cout<<"msg crypte : ";

	for(int i=0; i < msg.length()+1 ; i++)
	{
	cout<<crypt[i];
	}
}
 else
{
        string  crypt =dcesar_crypt(n,msg);
        cout<<"msg  dcrypte :  ";
        for(int i=0; i < msg.length() +1; i++)
        {
            cout<<crypt[i];
        }
}
return 0 ;
}
