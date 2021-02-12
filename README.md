# libstr
a better and lite weight C/C++ library to interact easely with C style char strings

## Available:
`contains`: tells if the first second argument (as C string) is contained into the first one (as C string too).\n
    usage: `contains(<main string>, <sub string>)`\n
`startswith`: tells the first argument starts with the second one (all arguments in C style strings).\n
    usage: `startswith(<main string>, <sub string>)`\n
`endswith`: tells the first argument ends with the second one (all arguments in C style strings).\n
    usage: `endswith(<main string>, <sub string>)`\n
`isOnPos`: tells if the third argument in on the given position (second argument (int)) into the first argument.\n
    usage: `isOnPos(<main string>, <position>, <sub string>)`\n
`firstOccurence`: not doumented yet...\n
`cOccurence`: not doumented yet...\n
`isBetweenC`: not doumented yet...\n
`pOccurence`: not doumented yet...\n
`isBetweenP`: not doumented yet...\n

## TODO:
- add a `splitArgs` function/class to separate arguments like standard main function does.\n
- implement a string class that wrap-up every listed function.\n
- implement functions to convert numerical values to characters.\n
- implement function to retrieve information from string (such as a better `strlen()` function, as example).\n

###### the library had not been tested yet...
###### version 0.0.3 alpha
