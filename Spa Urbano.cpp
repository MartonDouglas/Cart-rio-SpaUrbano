#include <stdio.h> //Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de textos por regi�o
#include <string.h> //Biblioteca responsavel por cuidar das string

int registro()
{
	char arquivo[11];
	char cpf[11];
	char nome[11];
	char nascimento[11];
	char telefone[11];
	
	printf("\tVoc� escolheu a op��o 1\n\n");
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das string
	
	FILE *file; // Cria o arquivo
	file = fopen(arquivo, "w"); // Cria o arquivo
	fprintf(file,cpf); //Salva o valor da vari�vel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	
	printf("Deigite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	
	printf("Digite a sua data de nascimento:");
	scanf("%s",nascimento);
	
	file = fopen(arquivo, "a");
	fprintf(file,nascimento);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	
	printf("Digite o seu telefone de contato:");
	scanf("%s",telefone);
	
	file = fopen(arquivo, "a");
	fprintf(file,telefone);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	
	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	char cpf[11];
	char conteudo[11];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, ele n�o foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nInforma��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[11];
	
	printf("Digite o cpf do usu�rio a ser deletado!.\n");
	scanf("%s", cpf);
	
	remove(cpf);
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema! Deletado com sucesso.\n");
		system("pause");
	}
	
}

int main()
{
	int opcao=0; //Definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
		printf("	Ol�! Bem vindo ao Spa Urbano!\n\n"); //In�cio do menu
		printf("Para continuar, escolha a op��o desejada no menu: \n\n");
		printf("\t1 - Registrar novo cliente\n");
		printf("\t2 - Consultar clientes cadastrados\n");
		printf("\t3 - Deletar clientes do cadastro\n\n");
		printf("Op��o:"); //Final do menu
		
		
		scanf("%d", &opcao); //Armazenando a escolha do usu�rio, que s�o: Registrar, Consultar e Deletar
	
		system("cls"); //Comando para o pc limpar a tela
		
	switch(opcao) //In�cio da sele��o
	{
	
		case 1:
        registro();
        break;
        
        case 2:
        consulta();
        break;
          
        case 3:
        deletar();
        break;
          
        default:
        printf("\tEsta op��o n�o est� dispin�vel!\n\n");
        printf("\tVolte ao menu e escolha a op��o correta.\n\n");
        system("pause");
        break;
          
     } //Fim da sele��o
		
	} 
	
	}
