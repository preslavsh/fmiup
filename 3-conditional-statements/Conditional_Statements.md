## KeyWords
- if
- else
- switch

## Operators
- &&, ||, !, ==, >, <, >=, <=, !=, De Morgan

## Snippets
- if

```
	int x;
	cin >> x;
	if(x == 5){
	   cout << "yes" << endl;
	}
```

- if/else

```
	int x;
	cin >> x; 
	if(x == 5){
		cout << "yes"
	} else {
		cout << "no"
	}
```

- if/elseif

```		
	int x;
	cin >> x;
	if(x==5){
		cout << "is 5" << endl;
	}else if(x==6){
		cout << "is 6" << endl;
	}
```

- if/if/if

```
	int x;
	cin >> x;
	if(x>4){
		cout << "more than 4" << endl;
	}
	if(x==5){
		cout << "equal to 5" << endl;
	}
	if(x<6){
		cout << "less than 6" << endl;
	}
```

- other

``` 
	int is5 = x == 5;
	if(is5){
		cout << " is 5" << endl;
	}
```

```
	int x;
	cin >> x;
	if(x){
		cout << "is not 0" << endl;
	}
```

- ternary operator

```
	int a = x > 5 ? 10 : 5;
```

## Switch

- with break

```
    char a;
    cin >> a;
    switch(a){
        case 'a': cout << "yeah"; break;
        case 'b': cout << "hell yeah"; break;
        default: cout << "hell not"; break;
    }
```

- without break

```
    char a;
    cin >> a;
    switch(a){
        case 'a': cout << "yeah";
        case 'b': cout << "hell yeah";
        default: cout << "hell not";
    }
```

