/*

Programa em C++ que simula um caixa para a venda de camisas tamanho P(25.00), M(30.50) e G(40.50).
Informa qual o valor total da compra e informar em quantas parcelas pode dividir:
Menor que 100.00 não divide.
de 100 a menor que 150 divide em 2x
de 150 a menor que 200 divide em 3x
acima de 200 divide em 4x

*/

#include<iostream>
using namespace std;

int main(){

	float tp=0, tm=0, tg=0, quant=0, cod=9, total=0;
	char resp='n';

	while(cod>=1)
	{
		cout<<"\n________________________________";
		cout<<"\n| Informe o código: P=1 M=2 G=3: ";
		cin>>cod;
		cout<<"|";
		cout<<"\n| Informe a quantidade: ";
		cin>>quant;
		cout<<"¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨";
		if(cod==1)
			tp=tp+quant;
		else
			if(cod==2)
				tm=tm+quant;
			else
				if(cod==3)
					tg=tg+quant;
				else
					if(cod>=4)
				{
					cout<<"\n\n *******************ATENÇÃO*************************";
					cout<<"\n Código inválido, deseja sair do caixa: Digite s / n ";
					cin>>resp;
					if(resp=='s')
					cod=-1;
				}

	}


	total=tp*25+tm*30.50+tg*40.50;

	cout<<"\n Valor total das compras: "<<total;

	if(total<100)
		cout<<"\n Não podemos parcelar.";
	else
		if(total<150)
			cout<<"\n Podemos parcelar em 2x de "<< total/2;
		else
			if(total<200)
				cout<<"\n Podemos parcelar em 3x de "<< total/3;
			else
				cout<<"\n Podemos parcelar em 4x de "<< total/4;

	cout<<"\n\n";
	return 0;

}
