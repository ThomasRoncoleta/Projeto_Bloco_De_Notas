/*A concession�ria de ve�culos Tremend�o paga a seus funcion�rios um sal�rio fixo mais uma
comiss�o de R$ 200,00 por cada carro vendido. No final do m�s os sal�rios s�o calculados pelo
setor financeiro e eles n�o ag�entam mais fazer estas contas na m�o.
Voc� acabou de ser contratado como programador da concession�ria e seu primeiro trabalho
� automatizar estes c�lculos. Para isso, utilize os dados do sal�rio fixo e a quantidade de carros
vendidos para calcular a folha de pagamento da empresa.*/

#include<stdio.h>
#include<locale.h>

typedef struct
{
    char nome[40];
    float salario1, comissao; 
} concessionaria;

int main()
{
    setlocale(LC_ALL,"");

    concessionaria Funcionario[30];
    int i=0, qtd=0;
    float SalarioTotal;

    FILE* arq;
    arq = fopen("vendidos.in","r");
    while(!feof(arq))
    {
        fscanf(arq, "%s %f %f\n", Funcionario[qtd].nome, &Funcionario[qtd].salario1, &Funcionario[qtd].comissao);
        qtd++;
    }
    fclose(arq);


    for(i=0;i<qtd;i++)
    {
        SalarioTotal = Funcionario[i].salario1+(Funcionario[i].comissao*200);

        printf("Nome do funcionario(a): %s\n", Funcionario[i].nome);
        printf("Salario total: %.2f\n", SalarioTotal);

    }

    return 0;
}
