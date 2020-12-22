int main()
{
	int src = 6;
	int sum = 0;
	char res = 'f';
	for ( int i = 1; i < src; i++){
		if (src % i == 0){
			sum = sum + i;
		}
	}
	if (sum == src){
		res = 's';
	}
	return 0;
}
	
