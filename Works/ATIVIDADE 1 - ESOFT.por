programa
{
	inteiro N;
	real area;
	real menor = 0;
	real R;
	funcao inicio()
	{
		escreva("Quantas áreas serão calculadas? ") leia(N)
		para(inteiro i = 1; i <= N; i++){
			escreva("Qual o " + i + " raio? ") leia(R)
			area = 3.1415 * (R * R )
			se (menor == 0 ) {
				menor = area
			}
			se (menor > area ) {
				menor = area
			}
		}
		escreva("A menor área foi: " + menor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 199; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */