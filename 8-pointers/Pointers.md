## Pointers
Integer, which holds address from the memory
It's type doen'st change what it is: Integer, which holds address from the memory


- int *a = ...

- nullptr C++ 11 

- NULL classic

### Example 

```
	int a = 5
	int* ptr = &a;
	cout << ptr+1 << endl;
	cout << ptr-1 << endl;
```

- dereferencing 

```
	int n = 10
	int* ptr = &n
	cout << ptr;
	cout << *ptr;
```
- void* 

## Pointers and arrays
int a[5]
int *ptr = a;

- one dimensional ```*(а+i)```
- two dimensional ```*((*а+i)+j)```

## References
& asks the  question what is the address of the variable

```
	int a = 5;
	int &syn = a;

	int a = 5;
	int* ptr = &a;
```

## Pointers and references in fuctions

```
void increment(int value){
	value++;
} 

void incrementWithPointer(int* value){
	(*value)++;
}

void incremenetWithReference(int& value){
	value++;
}

int main(){
	int a = 5;
	increment(a);
	cout << a;//wont increment
	incrementWithPointer(&a);
	cout << a;//will increment
	incrementWithReference(a);
	cout << a;//will increment
	return 0;
}
```

## Dynamic memory allocation ( stack, heap, new, delete, delete[]);

- new find a block of memory, which is big enough to hold our data. 

- example 

```
   void print(int* arrptr, int size){
		for(int i = 0; i < size; i++){
			cout << arrptr[i] << endl;
		}
   }
   
   int main(){
		
		int* numptr = new int;
		delete numptr;
		
		int* arrptr = new int[5];
		print(arrptr, 5);
		delete[] arrptr;
   }
```


```
int * createArray(){
	int arr[50];
	return arr;
}
//will fail, becouse int arr is cleared after exit the stack frame of the function createArray

//but
int * createArray(){
	int* arr = new int[50];
	return arr;
}
```

## Smart pointers*

freeing automatically allocated with new memory

- unique_ptr
- shared_ptr
- weak_ptr

