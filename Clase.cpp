int main()
{
	int opcion, pin, intento=1;
	float deposito, retiro, saldo=0;
	
	while(intento<=3)
	{
		printf("Ingresa tu PIN: ");
		scanf("%i", &pin);
		if (pin==1204)
		{
			system("cls");
			printf("Acceso autorizado\n\n");
			system("pause");
			system("cls");
			do
			{
    			printf("1.- Depositar");
    			printf("\n2.- Retirar");
    			printf("\n3.- Ver saldo");
   			 	printf("\n4.- Salir");
    			printf("\n\nIngresa la opci%cn aqu%c: ", 162, 161);
    			scanf("%i", &opcion); 
				   /* agregar desde el switch hasta el return 0*/
				switch (opcion)
    			{
        			case 1:
        				system("cls");
    					printf("Ingresa la cantidad a depositar: $");
    					scanf("%f", &deposito);
    					saldo=saldo+deposito;
    					printf("\nDeposito exitoso\n\n");
    					system("pause");
    					system("cls");
    					break;
    	
    				case 2:
    					system("cls");
    					printf("Ingresa la cantidad a retirar: $");
    					scanf("%f", &retiro);
    					if(retiro>saldo)
    					{
    						system("cls");
    						printf("Fondos insuficientes\n\n");
    						system("pause");
    						system("cls");
						}
						else
						{
							saldo=saldo-retiro;
							printf("\nRetiro exitoso\n\n");
    						system("pause");
    						system("cls");
						}
    					break;
    	
    				case 3:
    					system("cls");
    					printf("Tu saldo es de: $%.2f\n\n", saldo);
    					system("pause");
    					system("cls");
    					break;
    	
    				case 4:
    					system("cls");
    					printf("Bai");
    					break;
    	
    				default: 
    					system("cls");
    					printf("Ingresa una opci%cn v%clida\n\n", 162, 160);
    					system("pause");
    					system("cls");
				}	
    		}
			while (opcion !=4);
			return 0;
		}
		else
		{
			system("cls");
			printf("PIN incorrecto, ingresa el PIN nuevamente\n\n");
			intento++;
			system("pause");
			system("cls");
		}
	}
}
