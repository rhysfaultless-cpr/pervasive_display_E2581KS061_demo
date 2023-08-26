# pervasive_display_E2581KS061_demo

## notes

1.  I downloaded the repository <https://github.com/PervasiveDisplays/EPD_Driver_GF_581_KS> as a .zip
2.  Next, I imported this /zip as a library in Arduino IDE
3.  I attempted to compile this, but was getting File Not Found errors from the import statements. 
    I then removed the file paths, and just included the library name to be imported, without the relative file path.
    Arduino IDE was then able to locate the file, and compile.
    I left comments in the .h libraries of the authors original import statement.
