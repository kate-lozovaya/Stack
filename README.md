```
cmake -H. -B_builds -DBUILD_TESTS=ON -DBUILD_EXAMPLES=ON
cmake --build _builds
cmake --build _builds --target test -- ARGS=--verbose
_builds/example
```
[![Build Status](https://travis-ci.org/kate-lozovaya/Stack.svg?branch=master)](https://travis-ci.org/kate-lozovaya/Stack)
