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
