# find-Max-and-Min-vectors-from-n-vectors
Simple program to find Max and min vectors from the Matrix, with given n vectors on input.
## About code

I writed algorithm code on Windows, so on linux or mac may be others compile ways.
But I created CMakeLists.txt file and I think that is very similar compiling proces.

### Prerequisites

On Windows you must install Cmake and MinGW application before compile algorithm.
* See:
  * [CMake install](https://cmake.org/install/)
  * [MinGW install](http://www.mingw.org/wiki/howto_install_the_mingw_gcc_compiler_suite)

### How compile the algorithm

* Open Cmd terminal As Admin in folder with code.
  * Example:
```sh
> cd C:\CMake\MaxMinVec
```

 * Next:
 ```sh
> cmake -G "MinGW Makefiles" .
```
![test1](https://user-images.githubusercontent.com/35242996/46587934-2afd1600-ca94-11e8-8472-c1d3eaca0928.PNG)

 * After finish build in cmd:
 ```sh
 > make -j
 ```
![test2](https://user-images.githubusercontent.com/35242996/46587936-2afd1600-ca94-11e8-90ff-8229d6f83f86.PNG)
 
## Running the tests
* Open program in bin folder.
```sh
> cd bin
> maxminvec
```
### Testing
 * Test for Matrix 3x2
 ```sh
 > 1 0
 > 1 1
 > 9 7
 > Max: 9 7
 > Min: 1 0
 ```
![test4](https://user-images.githubusercontent.com/35242996/46588032-88459700-ca95-11e8-8824-c3b8c924d071.PNG)
