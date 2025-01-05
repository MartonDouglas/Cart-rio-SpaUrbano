#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de textos por região
#include <string.h> //Biblioteca responsavel por cuidar das string

int registro()
{
	char arquivo[11];
	char cpf[11];
	char nome[11];
	char nascimento[11];
	char telefone[11];
	
	printf("\tVocê escolheu a opção 1\n\n");
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das string
	
	FILE *file; // Cria o arquivo
	file = fopen(arquivo, "w"); // Cria o arquivo
	fprintf(file,cpf); //Salva o valor da variável
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
		printf("Não foi possivel abrir o arquivo, ele não foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nInformações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[11];
	
	printf("Digite o cpf do usuário a ser deletado!.\n");
	scanf("%s", cpf);
	
	remove(cpf);
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema! Deletado com sucesso.\n");
		system("pause");
	}
	
}

int main()
{
	int opcao=0; //Definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
		printf("	Olá! Bem vindo ao Spa Urbano!\n\n"); //Início do menu
		printf("Para continuar, escolha a opção desejada no menu: \n\n");
		printf("\t1 - Registrar novo cliente\n");
		printf("\t2 - Consultar clientes cadastrados\n");
		printf("\t3 - Deletar clientes do cadastro\n\n");
		printf("Opção:"); //Final do menu
		
		
		scanf("%d", &opcao); //Armazenando a escolha do usuário, que são: Registrar, Consultar e Deletar
	
		system("cls"); //Comando para o pc limpar a tela
		
	switch(opcao) //Início da seleção
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
        printf("\tEsta opção não está dispinível!\n\n");
        printf("\tVolte ao menu e escolha a opção correta.\n\n");
        system("pause");
        break;
          
     } //Fim da seleção
		
	} 
	
	}
