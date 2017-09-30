## Functions
- program become easy to modify
- we escape duplication of code

### Example

```
	int multiply(int a, int b){
		return a * b;
	}

	void logMultiply(int a, int b){
		cout << multiply(a, b);
	}

	int main(){
		logMultiply(1,2);
		return 0;
	}
```

```
	void print(int a[3])
	{
		for(int i = 0; i < 3; i++){
			cout << a[i] << endl;
		}
	}

	void print(int a[][3]){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
```

## Function signature == function name + parameters of the function

- function overloading

```
	void func(int a){
		cout << a << endl;
	}
	
	void func(int a, int b){
		cout << a << b << endl;
	}
```

```
	void func(int a)...
	int func(int a) ... 
```

## Recursion
```
	void func(int i){
		if(i == 5) return;
		cout << i;
		func(++i);
	}
	...
	int i = 0;
	func(0);
```

- fibonacci, factoriel, flood fill, binary search
 
## Function definitions

```
	void log();
	
	int main(){
		log();
	}
	
	void log(){
		cout << "yes" << endl;
	}
```
