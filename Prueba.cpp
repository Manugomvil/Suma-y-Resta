#include <cstdlib> 
#include <iostream> 
#include "math.h" 
#include <conio.h> 

using namespace std; 

int main(int argc, char *argv[]) 
{ 

{int a,b,c,aux; 

cout<<"ingrese los tres numeros enteros :"<<endl; 
cout<<"el primero :"; 
cin>>a; 
cout<<"el segundo :"; 
cin>>b; 
cout<<"el tercero :"; 
cin>>c; 
if(a<b) 
{ 
aux=a; 
a=b; 
b=aux; 
} 
if(a<c) 
{ 
aux=a; 
a=c; 
c=aux; 
} 

if(b<c) 
{ 
aux=b; 
b=c; 
c=aux; 

} 
cout<<"los numeros ordenados son :"; 
cout<<a<<" , "<<b<<" , "<<c<<endl; 

system("PAUSE"); 
return EXIT_SUCCESS; 

} 
}
