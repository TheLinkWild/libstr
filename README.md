# libstr
a better and lite weight C/C++ library to interact easely with C style char strings

## Available:
`contains`: tells if the second argument (C string) is contained into the first one (C string).
> usage: `contains(<main string>, <sub string>)`

`startswith`: tells if the first argument starts with the second one (all C style strings).
> usage: `startswith(<main string>, <sub string>)`...

`endswith`: tells if the first argument ends with the second one (all C style strings).
> usage: `endswith(<main string>, <sub string>)`

`isOnPos`: tells if the third argument in on the given position (second argument (int)) into the first argument.
> usage: `isOnPos(<main string>, <position>, <sub string>)`

`firstOccurence`: returns the position of the third arguments into the first one, starting from the given position (second argument)
>usage: `firstOccurence(<main string>, <position>, <sub string>)`

`string` class

## `string` class (C++ only):
The string class provides the ability to make string objects and interact with them; the class contains all the previously listed functions.
### Available in `string`:
`contains`: tells if the given argument is contained into the the object (C string).
> usage: `contains(<sub string>)`

`startswith`: tells the object starts with the given argument (C string).
> usage: `startswith(<sub string>)`...

`endswith`: tells the object ends with the given argument (C string).
> usage: `endswith(<sub string>)`

`isOnPos`: tells if the second argument (C string) is on the given position (first argument (int)) into the object.
> usage: `isOnPos(<position>, <sub string>)`

`firstOccurence`: returns the position of the first argument (C string) into the object, starting from the given position (second argument (int))
> usage: `firstOccurence(<sub string>, <position>)`

`getString`: return the string of the object (as C style string).

`getStringLenght`: return the lenght of the string of the object.

`modifyString`: modify the string of the object as the given argument (as C style string, of course).
> usage: `<object name>.modifyString(<new name>);`

## TODO:
- add *higher level* functions...
- add a `splitArgs` function/class to separate arguments like standard main function does.\
- implement a string class that wrap-up every listed function.\
- implement functions to convert numerical values to characters.\
- implement function to retrieve information from string (such as a better `strlen()` function, as example).

#### Made in collaboration with: Léolol DB.
###### the library had not been tested yet...
###### version 0.1.0-dev
