#include<stdio.h>
#include<graphics.h>
#include<math.h>




int main(){
	float xin, yin, xend, yend, i, dx, dy, step;
	float xn,yn,m;
	int gd=DETECT, gm;  /* Variables para inicializar el modo grafico */
	printf("Ingrese el valor de xin: \n\n"); /* Ingreso de valores */
	scanf("%f",&xin);
	printf("\n\n");
	printf("Ingrese el valor de yin: \n\n");
	scanf("%f",&yin);
	printf("\n\n");
	printf("Ingrese el valor de xend: \n\n");
	scanf("%f",&xend);
	printf("\n\n");
	printf("Ingrese el valor de yend: \n\n");
	scanf("%f",&yend);
	printf("\n\n");
	initgraph(&gd,&gm,"");  /* Se inicializa el modo grafico */
	

	dx = xend - xin; /* Calculo de dx y dy */
	dy = yend - yin;
	
	m = dy/dx; /* Calculo de pendiente */
	
	if (dx > dy)  /* Determinacion de step en funcion de quien es mayor dx o dy */
	 step = dx;
	 else if (dy>dx)
	 step = dy;
	 else if (dy = dx)
	 step = dx;
	 
	
	printf("dx = xend - xin \n\n");
    printf("dx = %.2f - %.2f \n\n ", xend, xin); /* Impresion de resultados */
    printf("dx = %.2f \n\n ", dx);
    printf("\n\n");
    printf("------------------------------------ \n\n");
    printf("dy = yend - yin \n\n");
    printf("dy = %.2f - %.2f \n\n ", yend, yin);
    printf("dy = %.2f ", dy);
    printf("\n\n");
    printf("------------------------------------ \n\n");
    printf("step = %.2f ", step);
    printf("\n\n");
    printf("------------------------------------ \n\n");
    printf("m = dy / dx \n\n");
    printf("m = %.2f / %.2f",dy, dx);
    printf("\n\n");
    printf("m = %.2f", m);
    printf("\n\n");
    printf("------------------------------------ \n\n");
    xn = dx/step; /* Calculo de incrementos en x y y */
    yn = dy/step;
    
    printf("Incremento en x = dx/step \n\n"); /* Impresion de resultados */
    printf("\n\n");
    printf("Incremento en x = %.2f / %.2f",dx,step);
    printf("\n\n");
    printf("Incremento en x = %.2f \n\n",xn);  
    printf("\n\n");
    printf("------------------------------------ \n\n");
    printf("Incremento en y = dy/step \n\n");
    printf("\n\n");
    printf("Incremento en y = %.2f / %.2f",dy,step);
    printf("\n\n");
    printf("Incremento en y = %.2f \n\n",yn);
    printf("\n\n");
    printf("------------------------------------ \n\n");
    
    
    
    
    
   
    printf("X \t\t  Y \t\t X(Round) \t\t Y(Round) \n\n ");   /* Ciclo for para impresion de tabla y creacion de grafico*/
    printf("\n\n");
    
    for(i=1;i<=step;i++){
    	
    	putpixel(xin,yin,LIGHTRED);

    	printf("%.2f \t\t %.2f \t\t %d \t\t %d \n\n",xin, yin, lround(xin), lround(yin));
    	xin = xin + xn;
    	yin = yin + yn;
    	
}


  getch();
    
   

	 
	 
	 
	 
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
