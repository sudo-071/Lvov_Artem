int main()
{
	char src[] = {'L','o','u','i','s',' ','A','m','e','n'};
	int arr_size = sizeof(src);
	for (int i = 0; i <= arr_size; i++){
		if (src[i] == 'a' || src[i] == 'A'){
			src[i] = '@';
		}
		else if (src[i] == 'o' || src[i] == 'O'){
			src[i] = '0';
		}
		else if (src[i] == 'i' || src[i] == 'I'){
			src[i] = '1';
		}
		else if (src[i] == 's' || src[i] == 'S'){
			src[i] = '$';
		}
	}
	return 0;
}
