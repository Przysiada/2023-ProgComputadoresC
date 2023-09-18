int fatorialParcial( int num, int parcial )
{
	if ( num == 1 )
		return parcial;
	else
		return fatorialParcial( (num - 1) , (parcial * num) );
}

int fatorialCauda( int num )
{
	return fatorialParcial( num, 1 );
}

void main()
{
  fatorial( 5 );
}
