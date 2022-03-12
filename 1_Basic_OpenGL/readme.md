# Basic OpenGL Tutorial / Tips
- The resource which I am using is https://ogldev.org/www/tutorial01/tutorial01.html
- I will be using `Ubuntu 20.04`. It is much easier to make a Linux Virtual machine and then execute OPENGL instead of doing it in windows

## Compiling The C File 
- To use OpenGL, we need to compile the program using `g++` or `gcc`
- Some flags will be used and the final command is as follows:
	- Replace `{code_file_name.c}` with the `C` file
	- Replace `{output_file_name.out}` with the name you wish to give the output file
	
`g++ {code_file_name.c} -lGL -lGLU -lglut -o {output_file_name.out}`

## Headers Required
For accessing OpenGL : `#include "GL/freeglut.h"`

# Initialisation and Display Mode
## Initialisation
- The OpenGL is initialised in a program using the `glutInit()` function
- To use this command, we need to accept command line paramters through `main()`:
	- [Read about command line arguments here](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/)
- The syntax is as follows: `glutInit(int &argc,char** argv)`:
	- `int& argc` : We need to pass the address of `argc` which we capture from `main()` function.
	- `char** argv` : The actual command line parameters (strings) which we pass to the program
- Without this, an OpenGL program will not execute

## Display Mode (GLUT_DOUBLE)
- For practical purposes, we use the `GLUT_DOUBLE` flag to enable **Double Buffers**
- [Original Link to understand basics of Double BUffers](https://www2.cs.arizona.edu/classes/cs433/spring02/opengl/dblbuffer.html)
- In simple terms, Double Buffer consists of two buffers called the `Front Buffer` and `Back Buffer`

| Front Buffer                                       | Back Buffer                         |
| ----------------------------------                 | ----------------------------------- |
| The contents of this buffer is displayed on screen | The GPU writes on this buffer       |
| User views this buffer                             | User does not view this buffer      |

- After completion of each frame, the buffers are swapped AND therefore, the Fron Buffer becomes Back buffer and Back buffer becomes front buffer
- This is an efficient way of displaying graphics
- (This swap is done through a callback function which will be discussed later)

## Display Mode (GLUT_RGBA)
- This is basically telling OpenGL to use RGBA color scheme
- To experminet with RGBA scehme, [Use this website](https://rgbacolorpicker.com/)
- Each color is represented in the combination of **R**ed, **G**reen, **B**lue,**A**lpha:
	- Alpha means the transparency of the color
	- In original scale, a value of `256` means full color. For example, `R = 256` meant "express red color fully"
	- A value of `1` means "Do not express the color". This means the resultant color is black
	- For computer purposes (the counting being 0 indexed), we assume `0` = Black and `255` = Full Color
- For OpenGL,the values are clamped between **0 to 1**: 
	- Divide the original values by `256`
	- Then we will obtain the clamped value

--------------------------------------------------------------------
# Creating Window
## Window Size

## Window Position
