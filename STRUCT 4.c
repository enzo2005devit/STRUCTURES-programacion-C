#include <stdio.h>
typedef struct
{
  
char nombre_del_cliente[25];
   
int fecha_de_emision[2];
   
int total;
   
int numero_factura;
 
} 
FACTURAS;

 
FACTURAS facturas[10];

int flag = 0;

int monto_maximo = 0;

 
int
main ()
{
  
 
 
 
 
 
for (int i = 0; i < 10; i++)
    
    {
      
 
facturas[i].numero_factura = i + 1;
      
 
printf ("\nIngresar nombre del cliente Numero%d: ", i + 1);
      
scanf ("%s", &facturas[i].nombre_del_cliente[0]);
      
 
 
printf ("Ingresar mes de emision de la factura: ");
      
scanf ("%d", &facturas[i].fecha_de_emision[0]);
      
 
 
printf ("Ingresar el dia de emision de la factura: ");
      
scanf ("%d", &facturas[i].fecha_de_emision[1]);
      
 
 
printf ("Ingresar monto total de la factura: $ ");
      
scanf ("%d", &facturas[i].total);
      
 
 
if (flag < facturas[i].total)
	
	{
	  
 
flag = facturas[i].total;
	
 
}
      
 
if (monto_maximo <= facturas[i].total)
	
	{
	  
monto_maximo = facturas[i].total;
	
}
    
 
}
  
 
printf ("\nEl/los meses que tienen mayor monto son:");
  
 
for (int i = 0; i < 10; i++)
    
    {
      
if (monto_maximo == facturas[i].total)
	
	{
	  
printf ("\nEl mes %d", facturas[i].fecha_de_emision[0]);
	
}
    
}
  
 
 
 
 
printf ("\n\nEl mayor monto de dinero facturado es: $ %d", flag);

 
}