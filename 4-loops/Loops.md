## Keywords

- for, while, do-while

## Example

- for 
	
```
	int i = 0; //start value
	i < 5; // condition for end
	i++; //condition for incrementing
	for(int i = 0; i < 5; i++){
		cout << i << endl;
	}

```

```
	for(int i = 0; i < 5; i+=2){
		cout << i << endl;
	}
```

```
	int i = 0;
	for(;;){
		if(i < 5) break;
		i++;
	}
```

- while:

```
	bool isTrue = false;
	int counter = 0;
	while(!isTrue){
		if(counter == 5){
			isTrue = true;	
		}
		cout << counter << endl;
		counter++;
	}
```

- do-while

```
	int x = 0;
	do {
		cout << "yes" << endl;
	} while(x<-1);
```

- nested loops

```
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << i*5 + j + 1 << endl;
		}
	}
```

- for-each 

```
	int a[3] = {1,2,3};
	for(int& num: a){
        cout << num << endl;
	}
```

## Control Flow Statements

- break

```
	for(int i = 0; i < 10; i++){
		if(i==5) break;
		cout << i << endl;
	}
```

- continue

```
	for(int i = 0; i < 10; i++){
		if(i==5) {
			continue;
		}
		cout << i << endl;
	}
```

- break

```
	for(int i = 0; i < 10; i++){
		cout << i << endl;
		if(i==5) return 0;
	}
	cout << "hello" << endl;
```
