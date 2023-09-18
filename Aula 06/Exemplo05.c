int multiplicacao(int a, int b) {
	if (b == 1)
		return a;
	else
		return a + multiplicacao( a, (b – 1) );
}

int multiplicacaoParcial(int a , int b , int parcial) {
	if (b == 1)
		return parcial;
	else
		return multiplicacaoParcial( a, (b - 1), (parcial + a) );
}

int multiplicacaoCauda(int a, int b) {
	return multiplicacaoParcial(a, b, a);
}
