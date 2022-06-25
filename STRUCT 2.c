#include <stdio.h>
#include <string.h>
 struct vuelo
{
  
char cod[30];
   
char partida[30];
   
char llegada[30];
 
};

 
int
main ()
{
  
int i = 0;
  
float promedio;
  
struct vuelo vuelos[4];
  
char ciudad[30];
  
int vuelo_encontrado = 0;
  
 
for (i = 0; i < 4; i++)
    {
      
printf ("Ingrese el codigo del vuelo elegido %d: ", i + 1);
      
scanf ("%s", &vuelos[i].cod);
      
 
printf ("Ingrese ciudad de partida: ");
      
scanf ("%s", &vuelos[i].partida);
      
 
printf ("Ingrese ciudad de llegada: ");
      
scanf ("%s", &vuelos[i].llegada);
    
}
  
 
printf ("Ingrese ciudad para buscar vuelos: ");
  
scanf ("%s", ciudad);
  
 
printf ("Vuelos que parten de %s:\n", ciudad);
  
 
for (i = 0; i < 4; i++)
    {
      
if (strcmp (ciudad, vuelos[i].partida) == 0)
	{
	  
printf ("%s\n", vuelos[i].cod);
	  
vuelo_encontrado = 1;
	
}
    
}
  
 
printf ("Vuelos que llegan a %s:\n", ciudad);
  
 
for (i = 0; i < 4; i++)
    {
      
if (strcmp (ciudad, vuelos[i].llegada) == 0)
	{
	  
printf ("%s\n", vuelos[i].cod);
	  
vuelo_encontrado = 1;
	
}
    
}
  
if (vuelo_encontrado == 0)
    {
      
puts ("NINGUN VUELO ENCONTRADO");
    
}

 
}