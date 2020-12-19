int main()
{
	const float grn_eur = 0.029;		/*defining exchange rates*/
	const float grn_usd = 0.035;
	const float grn_rub = 2.67;
	float grn = 100;			/*defining source value*/
	float eur = grn * grn_eur;		/*converting to each currency*/
	float usd = grn * grn_usd;
	float rub = grn * grn_rub;
	return 0;
} 
