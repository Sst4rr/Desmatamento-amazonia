/* Grupo: 
Aluno 1: Caio Inecco Pacova
Aluno 2: Thaís Ester de Medeiros Gomes
*/

#include <stdio.h>
#define l 24 
#define c 27


//função para pular tres linhas, só por praticidade
void pularLinha(){
  for(int i=0;i<3;i++){
    printf("\n");
  }
}

/*
Menor ou igual a 50 - preservada 
Acima de 50 - desmatada
*/

int main(void) {

//destaco que nem todas as variáveis foram criadas aqui, algumas estão os códigos de exercício para facilitar
	
  int i,j;
  int  desmatamento[i][j];
  int desJan=0;
  int desFev=0;
  int desMar;
  int area = l*c;



  printf("\narea é = %d",area);

  
	int janeiro[l][c] = {
		{40,40,36,36,40,36,36,40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,40,40,73,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,36,40,40,40,40,40,36,36,40,40,40,36,40,40,40,40,40,40,40,40,36,40,40,40,40},
		{40,40,40,40,40,40,40,36,36,40,36,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,36,40,40,40,40,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,41,40,36,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,36,40,40,40,40,36,36,36,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,36,40,36,40,40,36,40,40,40,40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,36,40,40,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,40,40,40,36,40,40,36,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,36,40,40,36,40,40,40,40,40,36,40,40,40,36,36,36,36,36,36,36,36,36,40,40,40,40},
		{40,36,40,40,40,40,40,40,40,4,36,36,36,36,36,36,36,40,40,40,40,36,36,40,40,40,40},
		{40,36,36,40,40,40,40,40,40,36,36,36,36,36,36,40,40,40,40,40,40,36,36,40,40,40,40},
		{36,36,36,40,40,40,36,40,40,40,36,36,36,36,36,40,40,40,36,36,40,40,36,40,40,40,40},
		{36,36,40,40,40,36,40,40,36,36,40,40,36,36,36,40,40,36,36,36,40,40,36,40,40,40,40},
		{36,36,36,40,40,36,40,40,40,40,36,36,40,40,40,36,36,36,36,36,36,36,36,40,40,40,40},
		{40,36,36,40,40,36,40,40,36,36,36,36,40,40,40,36,36,36,40,40,36,36,40,40,40,40,40},
		{40,40,36,36,40,40,36,36,36,36,36,36,40,40,40,40,36,36,36,40,36,36,40,40,40,40,40},
		{40,40,40,40,40,40,36,36,40,36,36,36,36,36,36,36,36,36,40,40,40,40,40,40,40,40,40},
		{40,73,41,36,40,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,36,40,40,40,40,40,40,40,40,36,36,36,36,40,40,40,40,40,40,40,40,40,40,40}
	};


//descobrir quantas unidades estão desmatadas em janeiro = ok
for(i=0;i<l;i++){
  for(j=0;j<c;j++){
    // printf("%d ",janeiro[i][j]); //printa a matriz como está no código, sem nenhuma alteração
    if(janeiro[i][j]>=50){
      desJan++;
    }
  }
  // printf("\n");
}
  printf("A quantidade de área desmatada em Janeiro é de: %d", desJan);

//Qual a média percentual de desmatamento desse mês


  float areaF = area;
  float desJanF = desJan;
  float percent = (desJanF*100)/areaF;
  //conversão de inteiro para float para podermos calcular o a porcentagem desejada
  printf("\n A média percentual de desmatamento de Janeiro é de %.3f%%", percent);



  pularLinha();


//INÍCIO FEV---------------------------------------------------
  
	int fevereiro[l][c]={
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{4,4,4,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{40,40,40,40,40,40,36,36,36,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,109,109,72,40,72,72,72,72,40,40,40,73,105,73,40,36,36,40,40,40,36,36,36},
		{141,141,141,141,141,109,72,72,72,72,72,72,40,40,40,73,109,73,40,36,36,40,40,40,36,36,36},
		{109,109,109,109,109,109,72,40,72,72,72,72,40,40,40,73,109,73,40,36,36,40,40,40,36,36,36},
		{109,109,109,141,141,109,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{109,109,109,141,141,141,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{72,72,72,72,72,72,40,40,40,73,109,73,40,36,40,72,72,72,40,40,40,36,36,36,36,36,36},
		{40,40,40,72,72,72,40,36,40,73,109,73,40,36,36,72,72,72,40,40,40,36,36,36,36,36,36},
		{72,72,72,72,72,72,40,40,40,73,109,73,40,36,40,72,72,72,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,73,40,40,40,36,36,36,36,36,36,36,36,36},
		{141,141,141,109,109,109,109,141,109,109,109,109,109,109,109,40,36,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,73,40,36,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,72,72,40,40,40,40,40,40,36,36,36,40,40,40,36,36,36,36,36,36},
		{109,109,109,141,141,109,72,72,72,40,36,36,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,72,72,40,40,40,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36}
	};

for(i=0;i<l;i++){
  for(j=0;j<c;j++){
    if(fevereiro[i][j]>=50){
      desFev++;
    }
  }
  // printf("\n");
}
  printf("\nA quantidade de área desmatada em Fevereiro é de: %d", desFev);
  
  float desFevF = desFev;
  percent = (desFevF*100)/areaF;
  printf("\n A média percentual de desmatamento de FEVEREIRO é de %.2f%%", percent);



//qual a varição, ou seja, quantas unidades estão mais desmatadas que no mês anterior?
    int varJanFev=0;
   
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(fevereiro[i][j]-janeiro[i][j]>0){
                varJanFev++;
            }
        }
    }
    printf("\nO total da variação de Jan pra fevereiro é de: %d", varJanFev);


  pularLinha();
  
  //INÍCIO MARCO------------------------------------------------

	int marco[l][c] = {
		{36,36,36,36,36,36,36,36,36,36,36,36,36,109,109,109,141,109,109,73,4,72,145,109,141,109,109},
		{36,36,36,36,36,36,36,40,36,36,36,40,36,72,141,141,141,141,145,73,4,40,108,104,109,141,145},
		{40,36,36,36,36,40,40,40,40,36,40,4,36,109,145,109,109,141,141,72,36,36,72,109,141,109,76},
		{40,36,40,36,36,36,36,40,40,40,36,36,36,72,109,109,109,145,77,36,36,40,76,109,145,108,72},
		{36,36,40,40,36,36,36,40,40,40,36,40,109,109,76,109,77,109,40,36,40,40,109,109,145,141,109},
		{36,36,36,36,36,36,36,40,40,40,36,36,72,108,109,109,109,109,109,109,73,36,40,73,109,141,109},
		{40,36,36,36,36,36,40,40,40,36,40,36,36,109,145,141,145,141,145,109,36,40,72,109,109,109,109},
		{40,36,36,40,36,36,40,36,36,36,36,36,72,109,109,109,109,141,109,40,36,72,109,141,141,109,72},
		{40,40,40,40,36,36,40,40,40,40,40,40,36,77,141,145,109,108,36,36,40,36,72,109,141,141,109},
		{109,109,109,109,109,109,40,40,40,72,72,72,40,36,109,109,109,109,72,40,36,40,109,109,141,141,145},
		{109,109,109,141,141,141,72,40,40,72,72,72,40,73,109,73,109,141,145,40,4,40,72,109,141,109,109},
		{109,109,109,109,141,109,72,40,40,72,72,72,40,109,113,73,109,109,109,40,4,72,109,109,109,109,40},
		{72,104,105,141,141,141,40,40,40,72,72,72,36,40,72,109,141,141,104,73,40,72,145,145,141,109,109},
		{72,104,105,141,145,141,40,40,40,72,72,72,40,40,76,109,141,141,109,72,40,72,73,72,109,141,109},
		{72,72,72,141,141,141,40,40,40,72,72,72,40,72,109,109,109,109,72,40,40,40,72,72,109,145,109},
		{40,40,40,72,72,72,40,40,40,72,108,72,40,36,40,109,145,145,40,4,36,40,109,113,145,109,40},
		{40,40,40,72,72,72,40,40,40,72,109,72,40,36,40,109,109,108,40,36,40,40,40,40,109,72,36},
		{40,40,40,72,72,72,40,40,40,72,109,72,40,36,77,77,109,76,40,40,40,40,36,36,40,40,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,76,72,109,109,40,40,40,40,40,40,36,40,40},
		{109,109,109,109,109,109,141,141,141,109,109,109,109,109,109,72,40,109,72,36,40,40,40,40,40,40,40},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,77,72,40,36,40,40,36,72,40,40,36,40,40,36},
		{104,109,109,109,109,109,72,40,72,40,40,40,36,36,36,40,40,40,36,40,40,40,40,36,40,40,40},
		{109,109,109,141,141,109,72,40,40,40,40,40,36,36,40,40,40,40,40,40,72,40,36,40,36,36,40},
		{104,108,108,109,109,109,72,40,40,40,40,40,40,40,40,36,36,40,40,40,72,40,40,40,40,4,40}
	};


  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
     if(marco[i][j]>=50){
      desMar++;
      }
    }
    // printf("\n");
  }
  printf("\nA quantidade de área desmatada em Março é de: %d", desMar);

//Qual a média percentual de desmatamento desse mês

  float desMarF = desMar;
  percent = (desMarF*100)/areaF;
  //conversão de inteiro para float para podermos calcular o a porcentagem desejada
  printf("\n A média percentual de desmatamento de MARÇO é de %.3f%%", percent);
  


//qual a varição, ou seja, quantas unidades estão mais desmatadas que no mês anterior?
    int varFevMar=0;
   
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(marco[i][j]-fevereiro[i][j]>0){
                varFevMar++;
            }
        }
    }
    printf("\nO total da variação de Fevereirp para Março é de: %d", varFevMar);




// Tarefa 2
// Para ter uma forma visual de trabalhar, precisamos que você faça um gráfico de
// desmatamento. Você deve imprimir uma nova matriz composta de “_” e imprimir * em
// células que tenham aumento de desmatamento maior que 20% em relação a célula do mês
// anterior.



//Print da matriz de Janeiro, sem alteração de variação, apenas com as áres desmatadas para comparação visual do usuário
pularLinha();

for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		if(janeiro[i][j]<=50){
			printf(" - ");
		}else{
			printf(" * ");
		}
	}
	printf("\n");
}

pularLinha();

//print da matriz com a variação entre Janeiro e Fevereiro:
//para sabermos se o pixel atual é maior que do mês anterior em >20%
//precisamos primeiro calcular esses 20%, que se funciona em: criar uma variável,
//pegar o número, que por exemplo é janeiro[i][j] (janeiro na posição de I e J)
//e multiplicar por 0.2. Então aumento=janeiro[i][j]*0.2 = 20% dessa posição de janeiro.
//Depois somamos isso a janeiro[i][j] e comparamos a fev[i][j], isso claramente dentro do laço de repetição

for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		int comparador = (janeiro[i][j]*0.2)+janeiro[i][j];
		//assim criamos o número com a soma de 20% dele mesmo para fazermos a comparação abaixo.
		if(fevereiro[i][j]>comparador){
			printf(" * ");
		}else{
			printf(" - ");
		}
	}
	printf("\n");
}

pularLinha();

//print da matriz com a variação entre Fevereiro e março

for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		int comparador = (fevereiro[i][j]*0.2)+fevereiro[i][j];
		
		if(marco[i][j]>comparador){
			printf(" * ");
		}else{
			printf(" - ");
		}
	}
	printf("\n");
}


// 3 -Precisamos encontrar uma grande área desmatada onde eles usam como estrada. Para isso,
// descubra qual é a maior linha contígua de desmatamento.
// Para isso você tem que fazer o seguinte:
// Para CADA linha, busque uma célula de desmatamento. Quando encontrar, busque
// um novo vetor tendo ela como o ponto de partida. Ao final mostre apenas qual foi o início e o
// fim de cada estrada. No exemplo abaixo, vamos informar: Estrada começando em
// [5][0] e terminando em [5][4]


//no último mÊs? nos dois últimos meses? com varição?


//OBJETIVO: descobrir maior linha contígua de desmatamento
//procurar nova célula de desmatamento e partir dela checar se a srguinte também é desmatada
//fazer contador para quantidade de casas desmatadas na mesma linha
//fazer o comparador depois de contar, no laço i, verificando se ele é maior que o anterior
//se for > então salvar a posição de início e fim e quantidade


int a,b,m,n=0;
int contador=0;
int maior=0;
int a1,b1,m1,n1=0;
int inicio[a1][b1];
int fim[m1][n1];
//as variáveis iguais que tem o 1 na frente se tratam das variáveis definitivas
//, que vão guardar as posições do maior array, que seria as estradas dos garimpeiros

for(int i=0;i<l;i++){
	for(int j=n;j<c;j++){
		if(fevereiro[i][j]>50){
			//guardando início da ocorrência
			a=i;
			b=j;
			for(int k=j;k<c;k++){
				if(fevereiro[i][k]>50){
					contador++;
				}else{
					m=i;
					n=k;
					break;
				}
			}
			if(contador>maior){
				maior=contador;
				a1=a;
				b1=b;
				m1=m;
				n1=n;
			}
			contador=0;
		}
	}
}

printf("a maior estrada começa em [%d,%d] e termina em [%d,%d]", a1,b1,m1,n1);
	


  return 0;
}
