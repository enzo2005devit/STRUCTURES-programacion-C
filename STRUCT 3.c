#include <stdio.h>

 struct estudiantes
{
  
int dni;
   
int cantidad;
   
float notas[10];
 
};

int i;

int x;

float cuenta = 0;

float promedio;

struct estudiantes estudiante[5];

 
int
main ()
{
  
 
 
for (i = 0; i < 5; i++)
    {
      
printf ("Ingrese el dni del estudiante %d: ", i + 1);
      
scanf ("%d", &estudiante[i].dni);
      
 
printf ("Ingrese cantidad de calificaciones: ");
      
scanf ("%d", &estudiante[i].cantidad);
      
 
printf ("Ingrese calificaciones del estudiante:", i + 1);
      
for (x = 0; x < 10; x++)
	{
	  
if (x < estudiante[i].cantidad)
	    {
	      
scanf ("%f", &estudiante[i].notas[x]);
	    
}
	  
else
{
	      
estudiante[i].notas[x] = -1;
	    
}
	
}
    
}
  
 
 
for (i = 0; i < 5; i++)
    {
      
 
for (x = 0; x < estudiante[i].cantidad; x++)
	{
	  
cuenta += estudiante[i].notas[x];
	
}
      
if (estudiante[i].cantidad == 0)
	
promedio = 0;
      
      else
	
promedio = cuenta / estudiante[i].cantidad;
      
 
printf ("dni: %d\tPromedio: %.2f\n", estudiante[i].dni, promedio);
    
}

}