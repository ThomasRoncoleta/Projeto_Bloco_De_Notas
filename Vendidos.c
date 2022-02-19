/*A concessionária de veículos Tremendão paga a seus funcionários um salário fixo mais uma
comissão de R$ 200,00 por cada carro vendido. No final do mês os salários são calculados pelo
setor financeiro e eles não agüentam mais fazer estas contas na mão.
Você acabou de ser contratado como programador da concessionária e seu primeiro trabalho
é automatizar estes cálculos. Para isso, utilize os dados do salário fixo e a quantidade de carros
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
