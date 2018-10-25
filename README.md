## Requirements
* g++ compiler (any version. The version used to compile was 5.4.0).
* CMake builder (minimum required version: 3.5).

## Compile and Run
* Open the terminal.
* Run `cmake .` and `make` to generate `parser` executable file.
* Run `./parser path/to/instance` to execute the parser.

## Full Matrix Structure
The generated matrix has the following structure:

```
c(0,0) c(0,1) c(0,2) ... c(0,N-1)
c(1,0) c(1,1) c(1,2) ... c(1,N-1)

...

c(N-1,0) c(N-1,1) c(N-1,2) .. c(N-1,N-1)
```

where `N` is the size of instance. The positions c(i,i), for i = 0 to n-1, are infinity.

## Bonus
The project has a file named `testSolution.cpp`. This file computes the TSP cost of the optimal route considering the generated full matrix. If you want to execute this file, execute the following command: `make testSolution`.

At this moment, this file receives a file on the following structure:

```
N

c(0,0) c(0,1) c(0,2) ... c(0,N-1)
c(1,0) c(1,1) c(1,2) ... c(1,N-1)

...

c(N-1,0) c(N-1,1) c(N-1,2) .. c(N-1,N-1)

r(0)
r(1)
...
r(N-1)

```
where N is the size of instance, c(i,j) is the cost matrix and r(N) is the optimal route present in the opt.tour files (path: instance/opt-tour/). For example, see `bays29-testSolution` file.

## Copyrights
Some files were obtained from [this repository](https://github.com/Annihil/Little-TSP-solver).