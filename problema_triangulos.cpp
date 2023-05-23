#include<stdio.h>
#include<conio.h>

//triángulo mirando hacia abajo
void abajo(int bas, int color)
{
    int x, esp;
    esp=26;
    for(x=bas;x>=1;x-=1)
    {
		textcolor(color);
        do
		{
			for(x=1;x<=esp;x+=1)
	        	printf(" ");
	        esp+=1;
			for(x=1;x<=bas;x+=1)
				printf("* ");
			bas-=1;
			printf("\n");
        }
        while(esp+bas==1);
    }  
    getchar();
    return;
}

//triángulo mirando hacia arriba
void arriba(int bas, int color)
{
    int x, z, esp;
    z=1;
    esp=26;
    textcolor(color);
    do
    {
		for(x=1;x<=esp;x+=1)
 	        printf(" ");
	    esp-=1;
		for(x=1;x<=z;x+=1)
            printf("* ");
        z=z+1;
        printf("\n");
    }
    while(z!=bas+1);
    getchar();
    return;
}

//rombo: triángulo doble
void rombo(int bas, int color)
{
	int x, z, esp;
    z=1;
    esp=28;
    textcolor(color);
	do
    {
		for(x=1;x<=esp;x+=1)
	        	printf(" ");
	    esp-=1;
		for(x=1;x<=z;x+=1)
            printf("* ");
        z=z+1;
        printf("\n");
    }
    while(z!=bas+1);
    esp=30-bas;
    bas=bas-1;
    for(x=bas;x>=1;x-=1)
    {
		do
		{
			for(x=1;x<=esp;x+=1)
	        	printf(" ");
	        esp+=1;
			for(x=1;x<=bas;x+=1)
				printf("* ");
			bas-=1;
			printf("\n");
        }
        while(esp+bas==1);
    }  
    getchar();
    return;
}

int main()
{
	int opc, base, col;
	printf("MEN%c DE COLORES:\n", 233);
	printf("1. Azul\n");
	printf("2. Verde\n");
	printf("3. Turquesa\n");
	printf("4. Rojo\");
	printf("5. Rosa\n");
	printf("6. Dorado\n");
	printf("7. Gris Claro\n");
	printf("8. Gris Oscuro\n");
	printf("9. Azul brillante\");
	printf("10. Verde brillante\n");
	printf("11. Turquesa brillante\n");
	printf("12. Rojo brillante\n");
	printf("13. Rosa brillante\n");
	printf("14. Amarillo\n");
	printf("15. Blanco\n\n");

	while(opc!=4)
	{
		base=3;
		opc=1;
		col=15;
		textcolor(7);
	    printf("1. Tri%cngulo c%cspide hacia arriba\n2. Tri%cngulo c%cspide hacia abajo\n3. Rombo\n4. Salir\n", 160, 163, 160, 163);
        do
	    {
            if(opc<1||opc>3)
	        	printf("Opci%cn no disponible. ", 162);
			printf("Elige una opci%cn: ", 162);
	        scanf("%i", &opc);
	    }
	    while(opc<1||opc>4);
	    
	    if(opc!=4)
	    {
            do
	        {
                 if(col<1||col>15)
                    printf("Color no disponible. ");
                 printf("Elige un color: ");
                 scanf("%i", &col);
            }
            while(col<1||col>15);
            do
		    {
	              if(base<1||base>25)
	        	     printf("Valor inv%clido. ", 160);
                  printf("Valor de la base: ");
		          scanf("%i", &base);
            }
		    while(base<1||base>25);
        }    
		if(opc!=4)
	    	if(opc==1)
	    		arriba(base,col);
			else
				if(opc==2)
					abajo(base,col);
				else
					rombo(base,col);
		getchar();
	}
    fflush(stdin);
    return 0;	
}
