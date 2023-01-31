#include <stdio.h> //biblioteca de comunicação com usuario
#include <stdlib.h> // biblioteca de alocação de espaço de memoria
#include <locale.h> //biblioteca de alocação de espaço de memoria
#include <string.h> // biblioteca que cuida de string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	print("Informe o CPF para cadastro: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);// é quem copia o valor da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w");
	fprintf(file, cpf); //salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome para cadastro");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome para cadastro");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo do cadastrado: ");
	scanf("%s, cargo");
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}
int consulta()
{
	printf("você escolheu consulta de nomes \n");
	system("pause");
}
int excluir()
{
	printf("você escolheu exclusão de nomes \n");
	system("pause");
}



int main ()
{
	int opcao=0; // definir varial
	int	x=1;
	
	
	for(x=1;x=10;)
	{
	
		system("cls");
	setlocale(LC_ALL, "PORTUGUESE"); // definir a ligua


		printf("\t\t ### Cartório Fantasia ### \n\n" ); //inicio do menu
		printf("Escolha uma das opções abaixo:\n\n");
		printf("\t1 - Registro de Nomes \n");
		printf("\t2 - Consulta de Nomes \n");
		printf("\t3 - Exclusão de Nomes \n\n"); 
		printf("Opção: ");// fim do menu
	
		scanf("%d", &opcao); //armazenamento de escolha
		
		system("cls");
		
		
		
		switch(opcao)
		{
			case 1:
				registro();
				break;
			
			case 2:
				consulta();
				break;
			
			case 3:
				excluir();
				break;
				
			default:
				printf("Esta opção não existe \n");
				system("pause");
				break;
		}
	
}
		} // fim de seleção
		

	
	
