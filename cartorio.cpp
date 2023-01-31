#include <stdio.h> //biblioteca de comunicação com usuario
#include <stdlib.h> // biblioteca de alocação de espaço de memoria
#include <locale.h> //biblioteca de alocação de espaço de memoria
#include <string.h> // biblioteca que cuida de string

int registro()  //função para cadastrar usuarios

{
	//inicio da criação de variaveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final de criação de variaveis
	
	printf("Informe o CPF para cadastro: ");
	scanf("%s", cpf); // %s usado para salvar strings
	
	strcpy(arquivo, cpf);// é quem copia o valor da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // w significa escrever
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // a significa alterar
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome para cadastro: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome para cadastro: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo do cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}
int consulta()
{
	setlocale(LC_ALL, "PORTUGUESE"); // definir a ligua
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // r significa read

	
	if(file == NULL)
 {
		printf("NÃO FOI POSSÍVEL LOCALIZAR O ARQUIVO.\n");
			
}
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas são as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
		fclose(file);
	
	}
		system("pause");
	
}
int excluir()
{
	char cpf[40];
	
	printf("Informe o CPF a ser excluido: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
			printf("O cpf indicado não foi encontrado. \n" );
			system("pause");
	}
}



int main ()
{
	int opcao=0; // definir varial
	int	x=1;
	
	
	for(x=1;x=10;)
	{
	
		system("cls"); // limpar a tela
	setlocale(LC_ALL, "PORTUGUESE"); // definir a ligua


		printf("\t\t ### Cartório Fantasia ### \n\n" ); //inicio do menu
		printf("Escolha uma das opções abaixo:\n\n");
		printf("\t1 - Registro de Nomes \n");
		printf("\t2 - Consulta de Nomes \n");
		printf("\t3 - Exclusão de Nomes \n\n"); 
		printf("\t4 - Sair do sistema \n\n");
		printf("Opção: ");// fim do menu
	
		scanf("%d", &opcao); //armazenamento de escolha
		
		system("cls");
		
		
		
		switch(opcao)
		{
			case 1:
				registro(); // chamada de funções
				break;
			
			case 2:
				consulta();
				break;
			
			case 3:
				excluir();
				break;
				
			case 4:
			printf("obrigado por utilizar o sistema Ebac");	
			return 0;
			break;
			
			default:
				printf("Esta opção não existe \n");
				system("pause");
				break;
		}
	
}
		} // fim de seleção
		

	
	
