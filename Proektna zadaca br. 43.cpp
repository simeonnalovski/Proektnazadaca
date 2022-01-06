// Simeon Nalovski INKI813
#include <iostream>
#include<cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	int red,a,b;
	char kolona;
	cout<<"Vnesi go poleto na koe se naoga kralicata"<<endl;
	cin>>kolona>>red;
	while(red<1 || red>8 || kolona < (int) 'A' || kolona > (int) 'H' ) // proverka na tocnost
	{
		cout <<" Poleto e nadvor od tablata, vnesi povrotno"<<endl;
		cin>>kolona>>red;
	}
	cout<<"Kralicata mozi od pole "<<kolona<<red<<" na slednite polinja: "<<endl;
	for(a=1;a<red;a++) // pravoliniski dvizenja od levo kon poleto
	{
		cout<<" "<<kolona<<a<<" ";
		EXIT_SUCCESS;
	}
	for(a=8;a>red;a--) // pravoliniski dvizenja od desno kon poleto
	{
		cout<<" "<<kolona<<a<<" ";
		EXIT_SUCCESS;
	}
	for(b=65; b<(int)kolona; (int) b++) // pravoliniski dvizenja od dolu kon koleto
	{
		cout<<" "<<(char)b<<red<<" ";
		EXIT_SUCCESS;
	}
	for(b=72; b>(int) kolona; (int) b--) // pravoliniski dvizenja od gore kon poleto
	{
		cout<<" "<<(char)b<<red<<" ";
		EXIT_SUCCESS;
}
for(a=red+1,b=(int)kolona+1; a<=8 && b<=72;a++,b++) // dijagonalni dvizenja od gorna desna dijagonala
	{
		cout<<" "<<(char)b<<a<<" ";
		EXIT_SUCCESS;
	}
	for(a=red-1,b=(int)kolona+1; a>=1 && b<=72;a--,b++) // dijagonalni dvizenja od gorna leva dijagonala
	{
		cout<<" "<<(char)b<<a<<" ";
		EXIT_SUCCESS;
	}
	for(a=red+1,b=(int)kolona-1; a<=8 && b>=65;a++,b--) // dijagonalni dvizenja od dolna desna dijagonala
	{
		cout<<" "<<(char)b<<a<<" ";
		EXIT_SUCCESS;
	}
	for(a=red-1,b=(int)kolona-1; a>=1 && b>=65; a--,b--) //dijagonalni dvizenja od dolna leva dijagonala
	{
		cout<<" "<<(char)b<<a<<" ";
		EXIT_SUCCESS;
	}
return 0;	
}
