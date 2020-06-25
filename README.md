# FlagSet
Helper class for managing flags in C++ projects

## Usage
Just copy *FlagSet.h* to your project and you are ready to use it.

To create a new FlagSet do these x things
1. Create a *enum class XYZ : std::uintXY_t*
2. Define the enum values, use the **auto increment** of enum
3. Make sure the first enum value **start with 0** (either dont set it or set it to 0)
4. Add one last value to enum named **\_eCount** and set it to count of all enum values before 
5. Create typedef or make using like:
    *using FL = FlagSet< XYZ >;*

Now you are ready to enjoy your new FlagSet.  

## Interface
TODO
