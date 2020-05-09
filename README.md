Try:

```console
[dev@host:cpp-plugin-example]$ mkdir build
[dev@host:cpp-plugin-example]$ cd build
[dev@host:build]$ cmake -DBUILD_SHARED_LIBS=YES ..
[dev@host:build]$ cmake --build .
[dev@host:build]$ ctest 
Test project /path/to/build
    Start 1: test_load
1/1 Test #1: test_load ........................   Passed    0.01 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.03 sec

[dev@host:build]$ cmake -DBUILD_SHARED_LIBS=NO ..
[dev@host:build]$ cmake --build .
[dev@host:build]$ ctest 
Test project /path/to/build
    Start 1: test_load
1/1 Test #1: test_load ........................***Failed  Required regular expression not found. Regex=[Hello, world!
]  0.01 sec

0% tests passed, 1 tests failed out of 1

Total Test time (real) =   0.02 sec

The following tests FAILED:
	  1 - test_load (Failed)
Errors while running CTest
```
