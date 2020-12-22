int main()
{
	int src_1 = 91;
	int src_2 = 2592;
	int gf = 0;
	for ( int i = 1; i <= src_1 && i <= src_2; i++){
		if (src_1 % i == 0 && src_2 % i == 0){
			gf = i;
		}
	}
	return 0;
}
