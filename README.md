# libnds_example_1

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)|[![Codecov logo](Codecov.png)](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/libnds_example_1.svg?branch=master)](https://travis-ci.org/richelbilderbeek/libnds_example_1)|[![codecov.io](https://codecov.io/github/richelbilderbeek/libnds_example_1/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/libnds_example_1/branch/master)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/libnds_example_1.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/libnds_example_1)|[![codecov.io](https://codecov.io/github/richelbilderbeek/libnds_example_1/coverage.svg?branch=develop)](https://codecov.io/github/richelbilderbeek/libnds_example_1/branch/develop)

![libnds_example_1](libnds_example_1.png)

This GitHub is part of 

 * [my NDS webpages](https://github.com/richelbilderbeek/cpp/blob/master/content/CppNds.md)

## How to build?

```
make
```

## How to run?

```
desmume libnds_example_1.nds
```

## How to install `devkitPro` and `libnds`?

Do:

 * `sudo ./build_libnds_32`: when your computer is 32 bit
 * `sudo ./build_libnds_64`: when your computer is 64 bit

Add to `~/bashrc`:

```
export DEVKITPRO=/opt/devkitpro
export DEVKITARM=$DEVKITPRO/devkitARM
```

Restart the terminal for these exports to have an effect

## External links

 * [travis_qmake_gcc_cpp98_libnds](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp98_libnds)
 * [travis_qmake_gcc_cpp11_libnds](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp11_libnds)
 * [travis_qmake_gcc_cpp14_libnds](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_libnds)
 * [libnds_example_2](https://github.com/richelbilderbeek/libnds_example_2)
