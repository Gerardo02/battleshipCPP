#include<iostream>
#include<string>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
string tableref[11][10];
int num[11]={0};
string table1[11][10];
int num1[11]={0};
string table2[11][10];
int num2[11]={0};
string pos1[10];
string pos2[10];
string hola[11][10];
int adios=0;
int arreglo[10]={adios++};	
char letras[20]={'A','B','C','D','E','F','G','H','I','J','a','b','c','d','e','f','g','h','i','j'};
char letras2[20]={'A','B','C','D','E','F','G','H','I','J','a','b','c','d','e','f','g','h','i','j'};
char x1;
char tiro;
char disparo;
int disparos;
int tiros;
int repuesto,repuesto2,repuesto3;
int x;
int y;
int xd;
int yd;
int tiro2;
int tiro3;
int conta=0;
int conta2=0;
int conta3=0;
char xd1;
void felicidades();
void linea();
void linea2();
void linea3();
void linea4();
void ifs();
void ifs2();
void ifs3();
void ifs4();
void ify();
void ify2();
void iferror();
void iferror2();
void imprimiref();
void tableros1();
void imprimir1();
void tableros2();
void imprimir2();
void posiciones();
void jugador1();
void jugador2();
void inicio();
void tableros();
void cuadro();
int menu;
void gotoxy(int z,int q)
{  
	HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = z;
    dwPos.Y= q;
    SetConsoleCursorPosition(hcon,dwPos);
}
int main()
{	
	do
	{
		gotoxy(50,0);
		cout<<"BATTLESHIP"<<endl<<endl;
		cuadro();
		gotoxy(2,3);
		cout<<"1: Nuevo Juego"<<endl;
		gotoxy(2,4);
		cout<<"2: Salir"<<endl;
		gotoxy(2,5);
		cin>>menu;
		system("cls");
		switch(menu)
		{
			case 1:
				jugador1();
				jugador2();
				inicio();
				break;
			case 2:
				break;
			default:
				break;
		}
	}while(menu<2);
	return 0;
}
void jugador1()				
{
	tableros1();
	tableros();
	imprimiref();
	cout<<"Jugador 1: "<<endl;
	cout<<"Barco de 5:"<<endl;
	cout<<"Elija las posiciones"<<endl;
	cin>>x1>>y;
	repuesto3=y;
	repuesto=y;
	ifs();
	repuesto2=x;
	ify();
  	if(y>=1 || y<=10)
    {	
    	table1[y][x]="O";
    	tableref[y][x]="O";
    }
	for(int i=0;i<4;i++)
	{  
		repuesto2++;
		repuesto++;
  		cin>>x1>>y;
  		ifs();
  		ify();
  		if(y!=repuesto3)
  		{
  			linea();
  			if(y>=1 || y<=10)
    		{	
    			table1[y][x]="O";
    			tableref[y][x]="O";
    		}
  		}else if(y==repuesto3)
  		{
  			linea2();
  			if(y>=1 || y<=10)
    		{	
    			table1[y][x]="O";
    			tableref[y][x]="O";
    		}
  		}
    }
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    x=0;
    y=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 4:"<<endl;
    cout<< "Elija las posiciones" <<endl; 
	cin>>x1>>y;
	repuesto3=y;
	repuesto=y;
	ifs();
	repuesto2=x;
	ify();
	if(table1[y][x]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>x1>>y;
			repuesto3=y;
			repuesto=y;
			ifs();
			repuesto2=x;
			ify();
		}while(table1[y][x]=="O");
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<3;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}else if(table1[y][x]!="O")
	{
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<3;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    x=0;
    y=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 3:"<<endl;
    cout<< "Elija las posiciones" <<endl;
	cin>>x1>>y;
	repuesto3=y;
	repuesto=y;
	ifs();
	repuesto2=x;
	ify();
  	if(table1[y][x]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>x1>>y;
			repuesto3=y;
			repuesto=y;
			ifs();
			repuesto2=x;
			ify();
		}while(table1[y][x]=="O");
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}else if(table1[y][x]!="O")
	{
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    x=0;
    y=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 3:"<<endl;
    cout<< "Elija las posiciones" <<endl;
	cin>>x1>>y;
	repuesto3=y;
	repuesto=y;
	ifs();
	repuesto2=x;
	ify();
  	if(table1[y][x]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>x1>>y;
			repuesto3=y;
			repuesto=y;
			ifs();
			repuesto2=x;
			ify();
		}while(table1[y][x]=="O");
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}else if(table1[y][x]!="O")
	{
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    x=0;
    y=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 2:"<<endl;
    cout<< "Elija las posiciones" <<endl;
	cin>>x1>>y;
	repuesto3=y;
	repuesto=y;
	ifs();
	repuesto2=x;
	ify();
  	if(table1[y][x]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>x1>>y;
			repuesto3=y;
			repuesto=y;
			ifs();
			repuesto2=x;
			ify();
		}while(table1[y][x]!="O");
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<1;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}else if(table1[y][x]!="O")
	{
		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
		for(int i=0;i<1;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>x1>>y;
  			ifs();
  			ify();
  			if(y!=repuesto3)
  			{
  				linea();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}else if(y==repuesto3)
  			{
  				linea2();
  				if(y>=1 || y<=10)
    			{	
    				table1[y][x]="O";
    				tableref[y][x]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    x=0;
    y=0;
    system("cls");
	imprimir1();
	cout<<endl;
	cout<<"Tus barcos"<<endl;
	system("pause");
	system("cls");
}
void jugador2()				
{
	tableros2();
	tableros();
	imprimiref();
	cout<<"Jugador 2:"<<endl;
	cout<<"Barco de 5:"<<endl;
	cout<<"Elija las posiciones del barco" <<endl;
	cin>>xd1>>yd;
	repuesto3=yd;
	repuesto=yd;
	ifs2();
	repuesto2=xd;
	ify2();
  	if(yd>=1 || yd<=10)
    {	
    	table2[yd][xd]="O";
    	tableref[yd][xd]="O";
    }
	for(int i=0;i<4;i++)
	{  
		repuesto2++;
		repuesto++;
  		cin>>xd1>>yd;
  		ifs2();
  		ify2();
  		if(yd!=repuesto3)
  		{
  			linea3();
  			if(yd>=1 || yd<=10)
    		{	
    			table2[yd][xd]="O";
    			tableref[yd][xd]="O";
    		}
  		}else if(yd==repuesto3)
  		{
  			linea4();
  			if(yd>=1 || yd<=10)
    		{	
    			table2[yd][xd]="O";
    			tableref[yd][xd]="O";
    		}
  		}
    }
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    xd=0;
    yd=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 4:"<<endl;
    cout<< "Elija las posiciones del barco" <<endl;
	cin>>xd1>>yd;
	repuesto3=yd;
	repuesto=yd;
	ifs2();
	repuesto2=xd;
	ify2();
  	if(table2[yd][xd]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>xd1>>yd;
			repuesto3=yd;
			repuesto=yd;
			ifs2();
			repuesto2=xd;
			ify2();
		}while(table2[yd][xd]=="O");
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<3;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}else if(table2[yd][xd]!="O")
	{
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<3;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    xd=0;
    yd=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 3:"<<endl;
    cout<< "Elija las posiciones del barco" <<endl;
	cin>>xd1>>yd;
	repuesto3=yd;
	repuesto=yd;
	ifs2();
	repuesto2=xd;
	ify2();
  	if(table2[yd][xd]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>xd1>>yd;
			repuesto3=yd;
			repuesto=yd;
			ifs2();
			repuesto2=xd;
			ify2();
		}while(table2[yd][xd]=="O");
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}else if(table2[yd][xd]!="O")
	{
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    xd=0;
    yd=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 3:"<<endl;
    cout<< "Elija las posiciones del barco" <<endl;
	cin>>xd1>>yd;
	repuesto3=yd;
	repuesto=yd;
	ifs2();
	repuesto2=xd;
	ify2();
  	if(table2[yd][xd]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>xd1>>yd;
			repuesto3=yd;
			repuesto=yd;
			ifs2();
			repuesto2=xd;
			ify2();
		}while(table2[yd][xd]=="O");
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}else if(table2[yd][xd]!="O")
	{
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<2;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    xd=0;
    yd=0;
    system("cls");
    imprimiref();
    cout<<"Barco de 2:"<<endl;
    cout<< "Elija las posiciones del barco" <<endl;
	cin>>xd1>>yd;
	repuesto3=yd;
	repuesto=yd;
	ifs2();
	repuesto2=xd;
	ify2();
  	if(table2[yd][xd]=="O")
	{
		repuesto=0;
    	repuesto2=0;
    	repuesto3=0;
		do
		{
			cout<<"Ya ha sido ocupada esa posicion"<<endl;
			cout<<"Elige otra: "<<endl;
			cin>>xd1>>yd;
			repuesto3=yd;
			repuesto=yd;
			ifs2();
			repuesto2=xd;
			ify2();
		}while(table2[yd][xd]=="O");
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<1;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
    	}
	}else if(table2[yd][xd]!="O")
	{
		if(yd>=1 || yd<=10)
    	{	
    		table2[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
		for(int i=0;i<1;i++)
		{	  
			repuesto2++;
			repuesto++;
  			cin>>xd1>>yd;
  			ifs2();
  			ify2();
  			if(yd!=repuesto3)
  			{
  				linea3();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}else if(yd==repuesto3)
  			{
  				linea4();
  				if(yd>=1 || yd<=10)
    			{	
    				table2[yd][xd]="O";
    				tableref[yd][xd]="O";
    			}
  			}
  		
    	}
	}
    repuesto=0;
    repuesto2=0;
    repuesto3=0;
    xd=0;
    yd=0;
    system("cls");
    imprimir2();
    cout<<endl;
    cout<<"Tus barcos"<<endl;
	system("pause");
	system("cls");
}
void inicio()
{
	while((conta!=17) && (conta2!=17) && (conta3!=100))
	{
		imprimir1();
		cout<<"Jugador 1"<<endl;
		cout<<"Dispara a la posicion: "<<endl;
		cin>>tiro>>tiro2;
		ifs3();
		iferror();
		if(table2[tiro2][tiros]=="X")
		{
			do
			{
				tiro2=0;
				tiros=0;
				cout<<"Ya le diste a ese barco"<<endl;
				cout<<"Dispara a otra posicion: "<<endl;
				cin>>tiro>>tiro2;
				ifs3();
				iferror();	
			}while(table2[tiro2][tiros]=="X");
			if(table2[tiro2][tiros]=="O")
			{
				conta++;
				table2[tiro2][tiros]="X";
				system("cls");
				cout<<"Le diste!!"<<endl;
				cout<<"Jugador 2 preparate"<<endl;
				system("pause");
				system("cls");
			}else if(table2[tiro2][tiros]!="O")
			{
				table2[tiro2][tiros]="x";
				system("cls");
				cout<<"Fallaste"<<endl;
				cout<<"Jugador 2 preparate"<<endl;
				system("pause");
				system("cls");
			}	
		}else if(table2[tiro2][tiros]!="X")
		{
			if(table2[tiro2][tiros]=="O")
			{
				conta++;
				table2[tiro2][tiros]="X";
				system("cls");
				cout<<"Le diste!!"<<endl;
				cout<<"Jugador 2 preparate"<<endl;
				system("pause");
				system("cls");
			}else if(table2[tiro2][tiros]!="O")
			{
				table2[tiro2][tiros]="x";
				system("cls");
				cout<<"Fallaste"<<endl;
				cout<<"Jugador 2 preparate"<<endl;
				system("pause");
				system("cls");
			}
		}
		imprimir2();
		cout<<"Jugador 2"<<endl;
		cout<<"Dispara a la posicion: "<<endl;
		cin>>disparo>>tiro3;
		ifs4();
		iferror2();
		if(table1[tiro3][disparos]=="X")
		{
			do
			{
				cout<<"Ya le diste a ese barco"<<endl;
				cout<<"Dispara a otra posicion: "<<endl;
				cin>>disparo>>tiro3;
				ifs4();
				iferror2();	
			}while(table1[tiro3][disparos]=="X");
			if(table1[tiro3][disparos]=="O")
			{
				conta2++;
				table1[tiro3][disparos]="X";
				system("cls");
				cout<<"Le diste!!"<<endl;
				cout<<"Jugador 1 preparate"<<endl;
				system("pause");
				system("cls");
			}else if(table1[tiro3][disparos]!="O")
			{
				table1[tiro3][disparos]="x";
				system("cls");
				cout<<"Fallaste"<<endl;
				cout<<"Jugador 1 preparate"<<endl;
				system("pause");
				system("cls");
			}	
		}else if(table1[tiro3][disparos]!="X")
		{
			if(table1[tiro3][disparos]=="O")
			{
				conta2++;
				table1[tiro3][disparos]="X";
				system("cls");
				cout<<"Le diste!!"<<endl;
				cout<<"Jugador 1 preparate"<<endl;
				system("pause");
				system("cls");
			}else if(table1[tiro3][disparos]!="O")
			{
				table1[tiro3][disparos]="x";
				system("cls");
				cout<<"Fallaste"<<endl;
				cout<<"Jugador 1 preparate"<<endl;
				system("pause");
				system("cls");
			}
		}
		conta3++;
	}
	if(conta==17)
	{
		felicidades();
		cout<<"Gano jugador 1"<<endl;
		system("pause");
		system("cls");
	}else if(conta2==17)
	{
		felicidades();
		cout<<"Gano Jugador 2"<<endl;
		system("pause");
		system("cls");
	}else if(conta3==100)
	{
		cout<<"Empate"<<endl;
	}
}
void tableros()
{
	int a=-3;
	int b=0;
	for(int i=0;i<11;i++)
	{
		num[i]=b++;
		for(int f=0;f<10;f++)
		{
			tableref[i][f]="*";
			tableref[0][f]=a++;
		}
	}
}
void imprimiref()
{
	for(int i=0;i<11;i++)
	{
		cout<<endl;
		cout<<"\t\t"<<num[i]<<"\t";
		for(int f=0;f<10;f++)
		{
			cout<<tableref[i][f]<<"\t";
		}
		cout<<endl;
	}	
}
void tableros1()
{
	int c=-3;
	int d=0;
	for(int i=0;i<11;i++)
	{
		num1[i]=d++;
		for(int f=0;f<10;f++)
		{
			table1[i][f]=" ";
			table1[0][f]=c++;
		}
	}
}
void imprimir1()
{
	for(int i=0;i<11;i++)
	{
		cout<<endl;
		cout<<"\t\t"<<num1[i]<<"\t";
		for(int f=0;f<10;f++)
		{
			cout<<table1[i][f]<<"\t";
		}
		cout<<endl;
	}
}
void tableros2()
{
	int e=-3;
	int g=0;
	for(int i=0;i<11;i++)
	{
		num2[i]=g++;
		for(int f=0;f<10;f++)
		{
			table2[i][f]=" ";
			table2[0][f]=e++;
		}
	}
}
void imprimir2()
{
	for(int i=0;i<11;i++)
	{
		cout<<endl;
		cout<<"\t\t"<<num2[i]<<"\t";
		for(int f=0;f<10;f++)
		{
			cout<<table2[i][f]<<"\t";
		}
		cout<<endl;
	}
}
void ifs() //jugador 1
{
	if(x1=='A'||x1=='a')
    {
    	x=0;
    }
    else if(x1=='B'||x1=='b')
    {
    	x=1;
    }
    else if(x1=='C'||x1=='c')
    {
    	x=2;
    }
    else if(x1=='D'||x1=='d')
    {
    	x=3;
    }
    else if(x1=='E'||x1=='e')
    {
    	x=4;
    }
    else if(x1=='F'||x1=='f')
    {
    	x=5;
    }
    else if(x1=='G'||x1=='g')
    {
    	x=6;
    }
    else if(x1=='H'||x1=='h')
    {
    	x=7;
    }
    else if(x1=='I'||x1=='i')
    {
    	x=8;
    }
    else if(x1=='J'||x1=='j')
    {
    	x=9;
    }
    else
    {
    	cout<<"Error de posicion"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>x1>>y;	
		ifs();
  		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
    }
}
void linea()
{
	if(y!=repuesto)
	{
		cout<<"Pon las posiciones seguidas por favor"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>x1>>y;	
		ifs();
	}
}
void linea2()
{
	if(x!=repuesto2)
	{
		cout<<"Pon las posiciones seguidas por favor"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>x1>>y;	
		ifs();
	}
}
void linea3()
{
	if(yd!=repuesto)
	{
		cout<<"Pon las posiciones seguidas por favor"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>xd1>>yd;	
		ifs2();
	}
}
void linea4()
{
	if(xd!=repuesto2)
	{
		cout<<"Pon las posiciones seguidas por favor"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>xd1>>yd;	
		ifs2();
	}
}

void ify()
{
	if(y<1 || y>10)
    {
    	cout<<"Error de posicion"<<endl;
    	cout<<"Vuelve a escribirla"<<endl;
    	cin>>x1>>y;	
		ifs();
  		if(y>=1 || y<=10)
    	{	
    		table1[y][x]="O";
    		tableref[y][x]="O";
    	}
    }
}
void ifs2()	//jugador 2
{
	if(xd1=='A'||xd1=='a')
    {
    	xd=0;
    }
    else if(xd1=='B'||xd1=='b')
    {
    	xd=1;
    }
    else if(xd1=='C'||xd1=='c')
    {
    	xd=2;
    }
    else if(xd1=='D'||xd1=='d')
    {
    	xd=3;
    }
    else if(xd1=='E'||xd1=='e')
    {
    	xd=4;
    }
    else if(xd1=='F'||xd1=='f')
    {
    	xd=5;
    }
    else if(xd1=='G'||xd1=='g')
    {
    	xd=6;
    }
    else if(xd1=='H'||xd1=='h')
    {
    	xd=7;
    }
    else if(xd1=='I'||xd1=='i')
    {
    	xd=8;
    }
    else if(xd1=='J'||xd1=='j')
    {
    	xd=9;
    }
    else
    {
    	cout<<"Error de posicion"<<endl;
    	cout<<"vuelve a escribirla"<<endl;
    	cin>>xd1>>yd;	
		ifs2();
  		if(yd>=1 || yd<=10)
    	{	
    		table1[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
    }
}
void ify2()
{
	if(yd<1 || yd>10)
	{
		cout<<"Error de posicion"<<endl;
    	cout<<"vuelve a escribirla"<<endl;
    	cin>>xd1>>yd;	
		ifs2();
  		if(yd>=1 || yd<=10)
    	{	
    		table1[yd][xd]="O";
    		tableref[yd][xd]="O";
    	}
	}
}
void ifs3()
{
	if(tiro=='A'||tiro=='a')
	{
		tiros=0;
	}
	else if(tiro=='B'||tiro=='b')
	{
		tiros=1;
	}
	else if(tiro=='C'||tiro=='c')
	{
		tiros=2;
	}
	else if(tiro=='D'||tiro=='d')
	{
		tiros=3;
	}
	else if(tiro=='E'||tiro=='e')
	{
		tiros=4;
	}
	else if(tiro=='F'||tiro=='f')
	{
		tiros=5;
	}
	else if(tiro=='G'||tiro=='g')
	{
		tiros=6;
	}
	else if(tiro=='H'||tiro=='h')
	{
		tiros=7;
	}
	else if(tiro=='I'||tiro=='i')
	{
		tiros=8;
	}
	else if(tiro=='J'||tiro=='j')
	{
		tiros=9;
		
	}
	else
	{
		cout<<"Hiciste algo mal"<<endl;
    	cout<<"Vuelve a disparar"<<endl;
    	cin>>tiro>>tiro2;
    	ifs3();
	}
}
void iferror()
{
	if(tiro2<1 || tiro2>10)
	{
		cout<<"Hiciste algo mal"<<endl;
    	cout<<"Vuelve a disparar"<<endl;
    	cin>>tiro>>tiro2;
    	ifs3();
	}
}
void ifs4()
{
	if(disparo=='A'||disparo=='a')
	{
		disparos=0;
	}
	else if(disparo=='B'||disparo=='b')
	{
		disparos=1;
	}
	else if(disparo=='C'||disparo=='c')
	{
		disparos=2;
	}
	else if(disparo=='D'||disparo=='d')
	{
		disparos=3;
	}
	else if(disparo=='E'||disparo=='e')
	{
		disparos=4;
	}
	else if(disparo=='F'||disparo=='f')
	{
		disparos=5;
	}
	else if(disparo=='G'||disparo=='g')
	{
		disparos=6;
	}
	else if(disparo=='H'||disparo=='h')
	{
		disparos=7;
	}
	else if(disparo=='I'||disparo=='i')
	{
		disparos=8;
	}
	else if(disparo=='J'||disparo=='j')
	{
		disparos=9;
	}
	else 
	{
		cout<<"Hiciste algo mal"<<endl;
    	cout<<"Vuelve a disparar"<<endl;
    	cin>>disparo>>tiro3;	
		ifs4();
	}
}
void iferror2()
{
	if(tiro3<1 || tiro3>10)
	{
		cout<<"Hiciste algo mal"<<endl;
    	cout<<"Vuelve a disparar"<<endl;
    	cin>>disparo>>tiro3;	
		ifs4();
	}
}
void cuadro()
{
	gotoxy(0,3);
	{
		cout<<"|";
	}
	gotoxy(0,4);
	{
		cout<<"|";
	}
	gotoxy(0,5);
	{
		cout<<"|";
	}
	gotoxy(1,5);
	{
		cout<<"____________________";
	}
	gotoxy(21,5);
	{
		cout<<"|";
	}
	gotoxy(21,4);
	{
		cout<<"|";
	}
	gotoxy(21,3);
	{
		cout<<"|";
	}
}
void felicidades()
{
	//F
	gotoxy(11,10);
	{
		cout<<"______"<<endl;
	}
	gotoxy(10,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(10,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(10,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(10,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(10,15);
	{
		cout<<"|"<<endl;
	}
	gotoxy(11,13);
	{
		cout<<"----"<<endl;
	}
	//F
	//E
	gotoxy(21,10);
	{
		cout<<"______"<<endl;
	}
	gotoxy(20,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(20,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(20,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(20,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(20,15);
	{
		cout<<"|"<<endl;
	}
	gotoxy(21,15);
	{
		cout<<"______"<<endl;
	}
	gotoxy(21,13);
	{
		cout<<"----"<<endl;
	}
	//E
	//L
	gotoxy(30,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(30,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(30,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(30,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(30,15);
	{
		cout<<"|"<<endl;
	}
	gotoxy(31,15);
	{
		cout<<"______"<<endl;
	}
	//L
	//I
	gotoxy(40,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(40,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(40,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(40,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(40,15);
	{
		cout<<"|"<<endl;
	}
	//I
	//C
	gotoxy(45,10);
	{
		cout<<"______"<<endl;
	}
	gotoxy(44,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(44,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(44,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(44,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(44,15);
	{
		cout<<"|"<<endl;
	}
	gotoxy(45,15);
	{
		cout<<"______"<<endl;
	}
	//C
	//I
	gotoxy(54,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(54,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(54,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(54,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(54,15);
	{
		cout<<"|"<<endl;
	}
	//I
	//D
	gotoxy(58,11);
	{
		cout<<"|"<<endl;
	}
	gotoxy(58,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(58,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(58,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(58,15);
	{
		cout<<"|"<<endl;
	}
	gotoxy(59,10);
	{
		cout<<"_____"<<endl;
	}
	gotoxy(64,11);
	{
		cout<<"\\";
	}
	gotoxy(64,12);
	{
		cout<<"|"<<endl;
	}
	gotoxy(64,13);
	{
		cout<<"|"<<endl;
	}
	gotoxy(64,14);
	{
		cout<<"|"<<endl;
	}
	gotoxy(64,15);
	{
		cout<<"/"<<endl;
	}
	gotoxy(59,15);
	{
		cout<<"_____"<<endl;
	}
	//D
	//A
	gotoxy(68,11);
	{
		cout<<"|";
	}
	gotoxy(68,12);
	{
		cout<<"|";
	}
	gotoxy(68,13);
	{
		cout<<"|";
	}
	gotoxy(69,13);
	{
		cout<<"-----";
	}
	gotoxy(68,14);
	{
		cout<<"|";
	}
	gotoxy(68,15);
	{
		cout<<"|";
	}
	gotoxy(69,10);
	{
		cout<<"_____"<<endl;
	}
	gotoxy(74,11);
	{
		cout<<"|";
	}
	gotoxy(74,12);
	{
		cout<<"|";
	}
	gotoxy(74,13);
	{
		cout<<"|";
	}
	gotoxy(74,14);
	{
		cout<<"|";
	}
	gotoxy(74,15);
	{
		cout<<"|";
	}
	//A
	//D
	gotoxy(78,11);
	{
		cout<<"|";
	}
	gotoxy(78,12);
	{
		cout<<"|";
	}
	gotoxy(78,13);
	{
		cout<<"|";
	}
	gotoxy(78,14);
	{
		cout<<"|";
	}
	gotoxy(78,15);
	{
		cout<<"|";
	}
	gotoxy(79,10);
	{
		cout<<"_____"<<endl;
	}
	gotoxy(84,11);
	{
		cout<<"\\";
	}
	gotoxy(84,12);
	{
		cout<<"|";
	}
	gotoxy(84,13);
	{
		cout<<"|";
	}
	gotoxy(84,14);
	{
		cout<<"|";
	}
	gotoxy(84,15);
	{
		cout<<"/";
	}
	gotoxy(79,15);
	{
		cout<<"_____"<<endl;
	}
	//D
	//E
	gotoxy(88,11);
	{
		cout<<"|";
	}
	gotoxy(88,12);
	{
		cout<<"|";
	}
	gotoxy(88,13);
	{
		cout<<"|";
	}
	gotoxy(89,13);
	{
		cout<<"----";
	}
	gotoxy(88,14);
	{
		cout<<"|";
	}
	gotoxy(88,15);
	{
		cout<<"|";
	}
	gotoxy(89,10);
	{
		cout<<"______"<<endl;
	}
	gotoxy(89,15);
	{
		cout<<"______"<<endl;
	}
	//E
	//S
	gotoxy(98,11);
	{
		cout<<"|";
	}
	gotoxy(98,12);
	{
		cout<<"|";
	}
	gotoxy(99,10);
	{
		cout<<"______"<<endl;
	}
	gotoxy(99,12);
	{
		cout<<"______"<<endl;
	}
	gotoxy(105,13);
	{
		cout<<"|";
	}
	gotoxy(105,14);
	{
		cout<<"|";
	}
	gotoxy(105,15);
	{
		cout<<"|";
	}
	gotoxy(99,15);
	{
		cout<<"______"<<endl;
	}
	//S	
}
