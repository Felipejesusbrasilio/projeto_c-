#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	
	
	setlocale(LC_ALL,"portuguese");
	
	int cc1,cc2,cc3,cc4,cc5,cc6,cc7,cc8,cc9,cc10;
	int amarzenar;
	
	int total;
	int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
	int valores[10] = {2,3,5,10,2,8,12,3,4,6};
	int cancelamentos[10] = {1,2,3,4,5,6,7,8,9,10};
	int produtos[10] = {1,2,3,4,5,6,7,8,9,10};
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	
	
	printf("SUPER MERCADO MUITO BOM");
    printf("\n \n");
	printf("NOSSO PRODUTOS");
	printf("\n \n");
	printf("PÃO = 1 LEITE = 2 CARNE = 3 FRANGO = 4 SUCO = 5 QUEIJO = 6 CARNE DE PORCO = 7 VINHO = 8 LEITE CONDENÇADO = 9 AÇAI = 10");
	printf("\n \n");
	printf("COMO VOCÊ PODE VER PARA CADA ITEM TEMOS UM CODIGO DE ACEITAÇÃO DA COMPRA");
	printf("\n \n");
	printf("CASO VOCÊ QUEIRA FAZER UM CANCELAMENTO NO FINAL DA COMPRA É SÓ APERTA O NUMERO 1 PARA DAR CONTINUIDADE OK");
	printf("\n \n");
	printf("CAIXA RAPIDO");
	printf("\n");
	printf("POR FAVOR DIGITE O CODIGO DE ITEM PARA REALIZAR A COMPRA OK");
	printf("\n");
	printf("VAMOS COMEÇA COM O PÃO E ASSIM EM DIANTE PÃO 1 PARA TRUE 0 PARA FALSE LEITE 2 PARA TRUE 0 PARA FALSE E ASSIM EM DIANTE");
	printf("\n \n");
	scanf("%i",&a);
	
	

	
if(a == produtos[0]){
		printf("PÃO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[0]);
		t1=valores[0];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("PÃO PRODUTO CANCELADO");
		t1 = 0;
	}
	
	printf("\n\n");
	printf("por favor digite o cadigo do item para realizar a comprar");
	printf("\n \n");
	scanf("%i",&b);
	
if(b == produtos[1]){
		printf("LEITE COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[1]);
		t2=valores[1];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("LEITE PRODUTO CANCELADO");
		t2 = 0;
	}
				
printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&c);

if(c == produtos[2]){
		printf("CARNE COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[2]);
		t3 = valores[2];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("CARNE PRODUTO CANCELADO");
		t3 = 0;
	}
	
printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&d);


if(d == produtos[3]){
		printf("FRANGO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[3]);
		t4 = valores[3];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("FRANGO PRODUTO CANCELADO");
	}	t4 = 0;
	
printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&e);


if(e == produtos[4]){
		printf("SUCO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[4]);
		t5 = valores[4];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("SUCO PRODUTO CANCELADO");
		t5 = 0;
	}


printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&f);


if(f == produtos[5]){
		printf("QUEIJO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[5]);
		t6 = valores[5];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("QUEIJO PRODUTO CANCELADO");
		t6 = 0;
	}


printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&g);

if(g == produtos[6]){
		printf("CARNE DE PORCO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[6]);
		t7 = valores[6];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("CARNE DE PORCO PRODUTO CANCELADO");
		t7 = 0;
	}
	
		
printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&h);

if(h == produtos[7]){
		printf("VINHO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[7]);
		t8 = valores[7];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("VINHO PRODUTO CANCELADO");
		t8 = 0;
	}


printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&i);


if(i == produtos[8]){
		printf("LEITE CONDENÇADO COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[8]);
		t9 = valores[8];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("LEITE CONDENÇADO PRODUTO CANCELADO");
	}


printf("\n\n");
printf("por favor digite o cadigo do item para realizar a comprar");
printf("\n \n");
scanf("%i",&j);

if(j == produtos[9]){
		printf("AÇAI COMPRAR REALIZADA COM SUCESSO");
		printf("\n");
		printf("VALOR DO PRODUTO: %i REAIS",valores[9]);
		t10 = valores[9];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		printf("\n");
		printf("AÇAI PRODUTO CANCELADO");
		t10 = 0;
	}
	
total = (t1+t2+t3+t4+t5+t6+t7+t8+t9+t10);
printf("\n\n");
printf("TOTAL DA COMPRAR E DE: %i",total);

printf("\n\n");
printf("POR FAVOR CASO VOCÊ QUEIRA CANCELAR UM PRODUTOR APERTE 1 PARA TRUE E 0 PARA FALSE OK");
printf("\n\n");
scanf("%i",&amarzenar);

if(amarzenar == 1){
	printf("TABELA DE CANCELAMENTO");
	printf("\n\n");
	printf("PÃO = 1 LEITE = 2 CARNE = 3 FRANGO = 4 SUCO = 5 QUEIJO = 6 CARNE DE PORCO = 7 VINHO = 8 LEITE CONDENÇADO = 9 AÇAI = 10");
	printf("\n\n");
	printf("MESMA COISA COMEÇAREMOS COM O PÃO 1 PARA TRUE 0 PARA FALSE LEITE 2 PARA TRUE 0 PARA FALSE E ASSIM VAI OK");
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc1);
	
	if(cc1 == 1){
		printf("PÃO PRODUTO CANCELADO");
		t1 = valores[0];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t1 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc2);
	
	if(cc2 == 2){
		printf("LEITE PRODUTO CANCELADO");
		t2 = valores[1];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t2 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc3);
	
	if(cc3 == 3){
		printf("CARNE PRODUTO CANCELADO");
		t3 = valores[2];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t3 = 0;
	}
	
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc4);
	
	if(cc4 == 4){
		printf("FRANGO PRODUTO CANCELADO");
		t4 = valores[3];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t4 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc5);
	
	if(cc5 == 5){
		printf("SUCO PRODUTO CANCELADO");
		t5 = valores[4];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t5 = 0;
	}
	
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc6);
	
	
	if(cc6 == 6){
		printf("QUEIJO PRODUTO CANCELADO");
		t6 = valores[5];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t6 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc7);
	
	if(cc7 == 7){
		printf("CARNE DE PORCO PRODUTO CANCELADO");
		t7 = valores[6];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t7 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc8);
	
	
	if(cc8 == 8){
		printf("VINHO PRODUTO CANCELADO");
		t8 = valores[7];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t8 = 0;
	}
	
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc9);
	
	if(cc9 == 9){
		printf("LEITE CONDENÇADO PRODUTO CANCELADO");
		t9 = valores[8];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t9 = 0;
	}
	
	printf("\n\n");
	printf("POR FAVOR DIGITE:");
	printf("\n\n");
	scanf("%i",&cc10);
	
	if(cc10 == 10){
		printf("AÇAI  PRODUTO CANCELADO");
		t10 = valores[9];
	}else{
		printf("ERROR AO LER CODIGO DO PRODUTO");
		t10 = 0;
	}
	
	total = (t1-t2-t3-t4-t5-t6-t7-t8-t9-t10);
    printf("\n\n");
    printf("TOTAL DA COMPRAR E DE: %i",total);
	
	
	
}else{
	printf("OBRIGADO TENHA UM BOM DIA ");
	
}



}







	
	
        
		
		

