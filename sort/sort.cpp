

template<class T>
void insertionsort(T data[], int n){
	for (int i=1,j; i < n; i++){
		T tmp = data[i];
		for (j = i; j > 0 && tmp < data[j-1]; j--)
			data[j] = data[j-1];
		data[j] = tmp;
	}
}

template<class T>
void selectionsort(T data[], int n){
	for (int i=0,j,least; i < n-1; i++){
		for (j=i+1,least=i; j < n; j++){
			if (data[j] < data[least])
				least = j;
		}
		swap(data[least], data[i]);
	}
}