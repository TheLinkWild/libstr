# libstr
a better and lite weight C/C++ library to interact easely with C style char strings

## Available:
`contains`: tells if the first second argument (as C string) is contained into the first one (as C string too).\
- usage: `contains(<main string>, <sub string>)`
`startswith`: tells the first argument starts with the second one (all arguments in C style strings).\
- usage: `startswith(<main string>, <sub string>)`...
`endswith`: tells the first argument ends with the second one (all arguments in C style strings).\
- usage: `endswith(<main string>, <sub string>)`
`isOnPos`: tells if the third argument in on the given position (second argument (int)) into the first argument.\
- usage: `isOnPos(<main string>, <position>, <sub string>)`
`firstOccurence`: not doumented yet...\
`cOccurence`: not doumented yet...\
`isBetweenC`: not doumented yet...\
`pOccurence`: not doumented yet...\
`isBetweenP`: not doumented yet...\

## TODO:
- add a `splitArgs` function/class to separate arguments like standard main function does.\
- implement a string class that wrap-up every listed function.\
- implement functions to convert numerical values to characters.\
- implement function to retrieve information from string (such as a better `strlen()` function, as example).\

###### the library had not been tested yet...
###### version 0.0.3 alpha
