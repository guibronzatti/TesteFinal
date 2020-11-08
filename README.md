sort
====

Obs.: **Modified to remove CUDA code.**

Test results:

[<img alt="Build Status" src="https://travis-ci.org/guibronzatti/TesteFinal.svg?branch=main" height="40">][travis-url]

Repository of sorting algorithms in C.

## Information
> Our program generates and fills arrays in four different ways: 
  > 
  1. arrays with totally random elements
  2. arrays already ordered 
  3. arrays ordered in descending order 
  4. arrays 90% ordered.
	
> Sorting methods implemented
  >
  1. Selection sort
  2. Insertion sort
  3. Shell sort
  4. Quick sort
  5. Heap sort
  6. Merge sort  

## Compiling

Run the MAKEFILE

## Instructions

To run the program, type:

```c
./app -a $algorithm -n $number_of_elements -s $state [-P]
```
### Parameters

> 1. -a sorting algorithm 
2. -n number of elements
3. -s array state
4. -P print results

| Param         | Value         | 
| ------------- |:-------------:| 
| -a            | selection     |
|               |   insertion   |
|               |     shell     | 
|               | quick         | 
|               | heap          | 
|               | merge         | 
| -n            | int > 0       |
| -s            | random        |
|               | ascending     |
|               | descending    | 
|               | almost        | 
| -P            |


License
-------
MIT License. See [LICENSE](LICENSE) for details.

[main-url]: https://github.com/guibronzatti/TesteFinal
[readme-url]: https://github.com/guibronzatti/TesteFinal/blob/main/README.md
[license-url]: https://github.com/guibronzatti/TesteFinal/blob/main/LICENSE
[license-img]: https://img.shields.io/github/license/rsp/travis-hello-modern-cpp.svg
[travis-url]: https://travis-ci.org/guibronzatti/TesteFinal
[travis-img]: https://travis-ci.org/guibronzatti/TesteFinal.svg?branch=master
[github-follow-url]: https://github.com/guibronzatti
