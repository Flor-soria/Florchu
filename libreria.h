int suma(int n, int n2)
{
	int R;
	R=n+n2;
	printf("\nla suma es igual a %d ", R);
}
int resta(int n, int n2)
{   
    int R;
	R=n*n2;
	printf("\nla multiplicacion es igual a %d ", R);
}
int multiplicacion(int n, int n2)
{
    int R;
	R=n-n2;
	printf("\nla resta es igual a %d ", R);
}
float division( int n, int n2)
{
	float R;
	if(n2==0)
	{
		printf("\nno se puede calcular la division");
	}
	else
	{
		R=n/n2;
		printf("\nla division es %2.f ", R);
	}
}
