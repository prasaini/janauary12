//counting vowels and consonants
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int vcount=0,ccount=0,space=0;
	char s[100];
	cin.getline(s,100);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vcount++;
		}
		else if(s[i]==' ')
		{
			space++;
		}
		else
		{
			ccount++;
		}
		
	}
	cout<<"the number of vowels in the given string are "<<vcount<<endl;
		cout<<"the number of consonants in the given string are "<<ccount<<endl;
}
