# libstr
a better and lite weight C/C++ library to interact easely with C style char strings

## Available:
`StrSize`: tells the size of the string.
> usage: `StrSize(<string>);`

`StrCopy`: copy the string (do the resize manipulation).
> usage: `StrCopy(<string>);`

`Contains`: tells if the first second argument (as C string) is contained into the first one (as C string too).
> usage: `Contains(<main string>, <sub string>);`

`StartsWith`: tells the first argument starts with the second one (all arguments in C style strings).
> usage: `WtartsWith(<main string>, <sub string>);`

`EndsWith`: tells the first argument ends with the second one (all arguments in C style strings).
> usage: `EndsWith(<main string>, <sub string>)`

`IsOnPos`: tells if the third argument in on the given position (second argument (int)) into the first argument.
> usage: `FsOnPos(<main string>, <position>, <sub string>);`

`FirstOccurence`: returns the first position of the second argument in the first one, starting from the third.
> usage: `FirstOccurence(<main string>, <sub string>, <start position>);`

## Installing:
- Download the `.zip` file or execute
```git clone https://github.com/TheLinkWild/libstr/tree/version-0.2.0-dev/```
- `cd` the where you have downloaded the library
- Execute the `setup.sh` file and you are done! 

## TODO:
- add a `SplitArgs`, `SplitOnChar`, `SplitOnString` function/class to separate arguments like standard main function does.\
- implement functions to convert numerical values to characters.\

#### Made in collaboration with: Léolol DB.
###### MICROSOFT WINDOWS AIN'T SUPPORTED AT THE MOMENT!
###### version 0.2.0-dev

