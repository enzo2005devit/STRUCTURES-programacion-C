#include <stdio.h>
int i;

struct estudiantes_t
{
  
int numero_dni;
   
float nota_1er;
   
float nota_2do;
 
};

 
float promedio;

struct estudiantes_t estudiante[5];

int
main ()
{
  
 
for (i = 0; i < 5; i++)
    {
      
printf ("Ingrese el dni del estudiante %d: ", i + 1);
      
scanf ("%d", &estudiante[i].numero_dni);
      
 
printf ("Ingrese la primer nota del estudiante %d: ", i + 1);
      
scanf ("%f", &estudiante[i].nota_1er);
      
 
printf ("Ingrese la segunda nota del estudiante %d: ", i + 1);
      
scanf ("%f", &estudiante[i].nota_2do);
    
}
  
 
 
for (i = 0; i < 5; i++)
    {
      
 
promedio = (estudiante[i].nota_1er + estudiante[i].nota_2do) / 2;
      
 
printf ("D.N.I.: %d\tPromedio: %.2f\n", estudiante[i].numero_dni,
		 promedio);
    
}

}
