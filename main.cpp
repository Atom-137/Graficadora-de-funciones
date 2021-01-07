#include <iostream>
#include <math.h>
#include <winbgim.h> 
#include <conio.h>

#define espacio 20
#define PI 3.14159265359
using namespace std;


void ecuacionLineal(){
	float a,b,c,x,resul;
	cout << "NOTA: LAS FRACCIONES NO ESTAN PERMITIDAS, SI DESEA RESOLVER UNA ECUACIÓN CON FRACCIONES"<<endl;
	cout << "DEBERA USAR DECIMALES" << endl;
	cout << "Ingrese el valor para a (en la formula ax+b=0)" << endl;
	cin >>a;
	cout << "Ingrese el valor para b (en la formula ax+b=0 )" << endl;
	cin >> b;
	cout << "Ingrese el valor para c (en la formula ax+b=0 donde c es un numero real mayor,menor o igual a 0)" << endl;
	cin >> c;
	//cuando la ecuacion ya esta igualada a 0
	if ((c==0)&(a<0)){
		x = (-b)/a;
	} 
	if ((c==0)&(a>0)){
		x = b/(-a);
	}
	
	//cuando la ecuacion no esta igualada a 0
	//donde b y c son positivos	
	if ((c>0)&(b>0)){

		x= (c+(-b))/(a);
	}
	
	// b es negativo y c es positivo
	if ((c>0)&(b<0)){
		 
			x=(-b-(-c)) /(a);
	}
	// c es negativo
	if ((c<0)&(b>0)){
		
		x= (c+(-b))/(a);
	}
	//b y c son negativos
	if ((b<0) &(c<0))	{
		
		x= (-(b+(-c)))/a;
	}
	//a ,b y c son negativos
	if ((b<0) &(c<0)&(a<0))	{
		
		x= (-(b+(-c)))/a;
	}
	
	cout << "El valor para x es: "<<x<< endl;
	resul = (a*x)+b;
	cout << "La igualdad es: " << endl;
	cout << resul<< " = "<< c << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
			
	
	
}

void ecuacionCuadratica(){
	float a,b,c,x1,x2,determinante,imaginario1,imaginario2;
	cout << "NOTA: LAS FRACCIONES NO ESTAN PERMITIDAS, SI DESEA RESOLVER UNA ECUACIÓN CON FRACCIONES"<<endl;
	cout <<"RESOLUCION DE ECAUCIONES CUADRÁTICAS "<< endl;
	cout <<"Fórmula ax2+bx+c=0" << endl;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor para b: " << endl;
	cin>> b;
	cout << "Ingres el valor para c: " << endl;
	cin >> c;
	
	determinante = (b*b)-(4*a*c);
	
	if (determinante > 0){
		//pow para calcular raiz cuadrada
		
		x1 = (-b+(pow(determinante,0.5)))/ (2*a);
		x2 = (-b-(pow(determinante,0.5)))/ (2*a);
		cout << "El valor para x1 es: " << x1 << endl;
		cout << "El vlor para x2 es: " << x2 << endl;
		
	}
	
	if (determinante == 0){
		
		x1= (-b)/ (2*a);
		x2=x1;
		cout << "El valor para x1 es: " << x1 << endl;
		cout << "El vlor para x2 es: " << x2 << endl;
		
	}
		if (determinante < 0){
		
		x1= (-b)/ (2*a);
		x2= (-b)/ (2*a);
		determinante = (-1)*determinante;
		imaginario1= (pow(determinante,0.5))/ (2*a);
		imaginario2= ((-1)*pow(determinante,0.5))/ (2*a);
		
		
		cout << "El valor para x1 es: " << x1 << " + " << imaginario1 << " i " << endl;
		cout << "El valor para x2 es: " << x2 <<" " << imaginario2 << " i " << endl;
		
	}
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
			
}

void identidadesTrigonometricas(){
	
	
float ad,op,hip,res;
int opc;
float angulo;
	

cout<<"Bienvenido "<< endl;

cout <<"Ingrese cual es el valor que desea calcular: "<< endl;
cout<<"1.Adyacente\n2.Opuesto\n3.Hipotenusa\n";
cin>>opc;

if(opc==1){
		cout<<"Ingrese el Angulo con el que se trabajara:"<< endl;
		cin>>angulo;
		cout<<"Ingrese el valor de la hipotenusa(si es desconocido coloque 0)"<<endl;;
		cin>>hip;
		
		if(hip!=0){
			res=hip*(cos(angulo*PI/180));
			
		} else{
			cout<<"Ingrese el valor del opuesto"<< endl;
			cin>>op;
			res= atan(op)*180/PI;
		}
			
		cout<<"El valor del cateto adyacente es : "<<res<<endl;
	
}else if( opc==2){
		cout<<"Ingrese el Angulo con el que se trabajara:"<< endl;
		cin>>angulo;
		cout<<"Ingrese el lado adyacente(si es desconocido coloque 0)"<<endl;
		cin>>ad;

		if(ad!=0){
			res= ad*(atan(angulo)*180/PI);
			
			
		} else{
			cout<<"Ingrese el valor de la hipotenusa"<<endl;
			cin>>hip;
			res=hip*(sin(angulo*PI/180));
		}
			
		cout<<"El valor del cateto opuesto es: "<<res<<endl;
	
	}else if( opc==3){
		cout<<"Ingrese el Angulo con el que se trabajara:"<< endl;
		cin>>angulo;
		cout<<"Ingrese el  valor del cateto opuesto(si es desconocido ingese 0)"<<endl;
		cin>>op;
		
	
		if(op!=0){
			res= op/(sin(angulo*PI/180));
			
		} else {
			cout<<"Ingrese el cateto adyacente"<<endl;
			cin>>ad;
			res= ad/(cos(angulo*PI/180));
		}
			
		cout<<"El valor de la hipotenusa es: "<<res<<endl;
	
	}
	else {
		cout << "Esta opcion no es valida." << endl;
	}
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
			
}

void planoCartesiano(){
	
	//Dibujar plano cartesiano
	//Lineas en el eje y

	int color = 7;
	for (int j = espacio; j <=680; j+=espacio){
		if (j==360){
			setcolor(14);
			line(j,espacio,j,680); //linea del centro vertical
		}
		else {
			
			setcolor(color);
			line(j,espacio,j,680); 
		}

	}

 	//lineas en el eje x
	for (int i = espacio; i <=680; i+=espacio){
		if (i == 360){
			setcolor(14);
			line(espacio,i,680,i);//lina del centro horizontal
		}
		else{
			setcolor(color);
			line(espacio,i,680,i);
		}
		
	}

	//getch();//pausa

}

void funcionLineal(){
	float valorx, x, indep, inicio;
	
	cout<< "Grafica de funciones lineales f(x)= " << endl;
	cout << "Ingrese el valor que acompaña a la x en la funcion: " << endl;
	cin >> valorx;
	cout << "Ingrese el valor para el termino independiente: " << endl;
	cin >> indep;
	x = 0;
	inicio = (valorx*x)+(indep);
	initwindow(720,720);
	setcolor(3);
	
	if (inicio >0){
		
		line (espacio,(680-(inicio*espacio)),(680-(inicio*espacio)),espacio);//funcion lineal -1
	}
	else if (inicio <0){
		line ((espacio+((-inicio)*espacio)),680,680,espacio+((-inicio)*espacio));//funcion lineal +1
		
	}
	else {
		
		line (espacio,680,680,espacio);//funcion lineal
	}

	
	planoCartesiano();
	
	getch(); //pausa
	closegraph();
	

}

void funcionCuadratica(){
	
    
    int color = 3;
   	float valorx =0,independiente=0;
 
	cout << "Graficadora de funciones cuadráticas" << endl;
	cout <<"f(x)=x^2+a"<< endl;
	cout << "Ingrese el valor que acompaña a x^2" << endl;
	cin>> valorx;
	cout << "Ingrese el valor independiente: " << endl;
	cin >>independiente;

	initwindow(720,720);
	
	float puntoFinal= 360-(independiente*20);//mover ejej y 360 punto 0
	float x=260+((valorx+1)*20);	//mover eje x
	for(float y =15; y<=puntoFinal;y++){
		//cruza linea
		
		if(y>=(puntoFinal-100)){
				putpixel(x,y,color);
				x+=0.1;
			if(y>=(puntoFinal-50)){
				putpixel(x,y,color);
				x+=0.9;
			
		}	
	
		}
		
		//dibujarlinea
	    putpixel(x,y,color);
		x+=0.07;
		
	}
	

	float x2=420+((valorx+1)*20); //mover eje x
	for (float y = 20; y <=puntoFinal;y++){
		
		//cruza linea
		
		if(y>=(puntoFinal-100)){
				putpixel(x2,y,color);
				x2-=0.09;
			if(y>=(puntoFinal-50)){
				putpixel(x2,y,color);
				x2-=0.9;
			
		}	
	
		}
		
		//dibujarlinea
		putpixel(x2,y,color);
		x2-=0.07;

	}
	planoCartesiano();
	getch();
	
	closegraph();
}



void dibuarTriangulo(){

	float hipotenusa=0, adyacente=0, opuesto=0;
	cout << "Grafica de un triangulo rectangulo" << endl;
	cout <<"Ingrese el valor de la hipotenusa" << endl;
	cin >> hipotenusa;
	cout << "Ingrese el valor del adyacente" << endl;
	cin >> adyacente;
	cout <<"Ingrese el valor del opuesto"<< endl;
	cin >> opuesto;
	cout << "El triangulo rectangulo es: " << endl;

	initwindow(720,720);
	
	line(200,200,200,(opuesto*50));//linea opuesto
	line(200,200,(hipotenusa*50),(opuesto*50));//linea hipotenusa
	line(200,(opuesto*50),(hipotenusa*50),(opuesto*50))	; //linea adyacente

	getch();
	closegraph();
	
}


//Principal

int main(){
	
	string usuario= " ";
	int opcion=0;
	
	cout <<"   BIENVENIDO    " << endl;
	cout <<"¿Cual es tu nombre ?"<< endl;
	cin >> usuario;
	cout <<usuario << " ¿Que deseas hacer?"<< endl;
do {
	cout << "MENU" << endl;
	cout << "1.  Resolver ecuaciones lineales de una incógnita" << endl;
	cout << "2.  Resolver ecuaciones Cuadráticas" << endl;
	cout << "3.  Graficar funciones lineales" << endl;
	cout << "4.  Graficar funciones cuadráticas" <<endl;
	cout << "5.  Encontrar valores trigonométricos a partir de un triángulo rectángulo" << endl;
	cout << "6.  Graficar funciones trigonométricas" << endl;
	cout << "7.  SALIR" << endl;
	cin >> opcion;	
	
	if (opcion == 1){
		ecuacionLineal();
		opcion = 1;
	}
	else if (opcion==2){
		ecuacionCuadratica();
	
		opcion=2;
	}
	else if (opcion==3){
		funcionLineal();
	
		opcion=3;
	}
	else if (opcion==4){
		funcionCuadratica();
	
		opcion=4;
	}
	else if (opcion==5){
		identidadesTrigonometricas();
	
		opcion=5;
	}
	else if (opcion==6){
		dibuarTriangulo();
		
		opcion=6;
	}
	else {
		cout << usuario<< " vuelve pronto."<< endl;
		opcion=7;
	}
}while(opcion<7);

	
	
	return 0;
}
