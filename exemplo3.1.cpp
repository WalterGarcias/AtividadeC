#include <stdio.h>
#include <string.h>
#include <locale.h>
#define   MAXN 100

typedef struct 
{
	char Norte 		 [100] = {'UNIP', 'ESTACIO', 'UNICSUL', 'ANHAGUERA', 'UNOPAR'};
	char Sul 		 [100]= {'FURG', 'UFPR', 'UFSC', 'UFFS', 'UFSM'};
	char Nordeste	 [100] = {'UFAL', 'IFBA', 'UFBA', 'UFOB', 'UFRB', 'UFC'};
	char Centro_Oeste[100] = {'PUC','UFG','UNB', 'UFMT', 'UFGD', 'UFMS'};
}Regiao;

typedef struct 
{
	char CidNorte 		[50] = {'AMAZONAS', 'PARÁ', 'AMAPA', 'RONDONIA', 'ACRE'};
	char CidSul	  		[80] = {'CURITIBA', 'FLORIANOPOLIS', 'GRMADO', 'BALNEARIO', 'PARANÁ'};
	char CidNordestes   [50] = {'PIIU', 'CERARA', 'PARAIBA', 'ALAGOAS', 'SERGIPE'};
	char CidCentroOeste [80] = {'GOIANIA', 'TRINDADE', 'CUIABA', 'BRASILIA', 'CAMPO GARNDE'};
}Cidades;

typedef struct
{
	int Qtda [5] = {100, 250 , 500, 5840, 5122};
}Quant;

typedef struct
{
	char NomeDiretor[30];
}GrupoFacul;

typedef struct 
{
	Regiao Lista		[MAXN];
	Cidades	ListaCid	[MAXN];
	Quant	ListaQuant	[MAXN];
}Control;

int main(int argc, char *argv)
 {
 	
 	GrupoFacul  faculdade;
 	Control Controle;
 	
 	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
		printf("Digite o nome do Direto: \n");
		gets(faculdade.NomeDiretor);
		
		printf("Digite uma das Regiões a seguir a qual o diretor faz parte: \n 1-Sul \n 2-Norte \n 3-Nordeste \n ou 4-Centro Oeste \n");
		scanf("%d", &num);
		
		if (num == 1)
		{
			printf("Nome do Diretor: %s - REGIÃO: %s \n", faculdade.NomeDiretor,"SUL" );
			printf("%-3s %-14s %-14s %-14s", "#", "NOME", "CIDADE", "QTDE");
			
			for(int i = 0; i < 5; i++)
			{
				printf("\n %d %s %s %d ", i, Controle.Lista[i].Sul, Controle.ListaCid[i].CidSul, Controle.ListaQuant[i].Qtda);
			}
		}
	
	return 0;
}
