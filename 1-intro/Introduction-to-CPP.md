## What is c++? 

Native languadge with direct control on the hardware, where you compile 
your program directly to machine instructions designed for the specific processor,
unlike virtual machine languadges, where you compile your program to 
intermediate code, which a virtual machine compiles in real time 
to machine instructions 

#### Example
Lets have a book in english and in bulgaria. Native languadge is like
to get the book directly translated to bulgarian, virtual machine languadge
is like to get a translator who translates the book from english to bulgarian
in real time.

## Use of c++?

- game development ( logic and interfaces, engines)
- 3D rendering 
- firmware ( low level software for hardware: circuit boards)
- software, which needs speed and doesn't have a lot of resources
 
## What are we going to use?

- Visual Studio 
- Codeblocks
- .NET framework for Windows
- .NET core
- gcc for Linux
- IDE vs Editor

## Example Program
main.cpp

```
	#include<iostream>
	
	using namespace std;
	
	int main(){
		cout << "Hello World" << endl;
		return 0;
	}
```
#### Explanation of the snipet

#### Explanation of c++ files

- what is .cpp file?
	
- what is header file?
	
- what is object file?
	
- what is namespace?

- cout; iostream

## How compiler works?
- preprocessing
- resolving preprocessor statements
- tokenizer and ast

## What is linker and what is doing? 

## Examples what compiler does? 
- compilation and the generated binary files (object and executables)
- preprocessed file
- assembly instructions in generated files

### Example GCC

```
gcc -o intro intro.cpp // makes executable
gcc -c intro.cpp // makes binary object file with extension o
gcc -E intro.cpp > intro.o // makes preprocessed file object file
gcc -Wall -S intro.cpp // makes assembly preprocessed file extension .s 

```

### Example Visual Studio .NET

- by buiding your project by default you generate .obj file and .exe file in the Debug folder

- try this link for seeing the preprocessed file [Link to MS VS 2017 Preprocessed file documentation](https://l.facebook.com/l.php?u=https%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2F8z9z0bx6.aspx&h=ATMuViS33G8pSeqr6Tjsqt_EXdsJXsxYZT56aMY79582dbDRoDB4A3IRjJ5s3RKZtpTT8ES-Ph1WEnMLroZpr-nuf-3DE8GfJvglP7R2oH-YTX1e-hK10BdLQZFnp0lnFxC6jFyz4-uCq7Zwqx3j_A) 

- to do assembly
