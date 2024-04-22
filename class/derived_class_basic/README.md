# This is a demo of derived class case.

### There are two classes.
    - Cat
    - Pet

### Totally 5 files involved.
    - main.cpp
    - Pet.h
    - Cat.h
    - Pet.cpp
    - Cat.cpp

### There are two builds with two .exe files.
    - The first .exe called "try_pet_only.exe", did not include cat.h header when it built.
        By running it, you can NOT declare a cat object.
    - The another .exe called "with_cat.exe" is the completely build with all files.
        You can either declare a Cat object and Pet object.

#### This demo is for showing the way to write derived class with separated files.