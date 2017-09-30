## Array
- index
- size

```
	int arr[5] = {1,2,3,4,5};
	int arr[] = {1,2,3,4,5};
	int arr[5];
```

```
	int arr[5];
	arr[0] = 1;
	arr[4] = 5;
	int a = arr[0];
	int b = arr[4];
	cout << a << endl;
	cout << b << endl;
	cout << arr[-1] << endl;
	cout << arr[5] << endl;
```

- begin from 0;

## Array input
```
	int size;
	cin >> size;
	int arr[100];
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
```

## Multi - dimensional arrays

```
	int m[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			cout << m[row][col];
		}
		cout << endl;
	}
```
