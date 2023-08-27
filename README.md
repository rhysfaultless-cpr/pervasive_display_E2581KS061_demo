# pervasive_display_E2581KS061_demo

## notes

1.  I downloaded the repository <https://github.com/PervasiveDisplays/EPD_Driver_GF_581_KS> as a .zip
2.  Next, I imported this /zip as a library in Arduino IDE
3.  I attempted to compile this, but was getting File Not Found errors from the import statements. 
    I then removed the file paths, and just included the library name to be imported, without the relative file path.
    Arduino IDE was then able to locate the file, and compile.
    I left comments in the .h libraries of the authors original import statement.
4.  The application manual mentions that bits are interpretted as
    - 1 = Black
    - 0 = White
    This is opposite of how the PDi Apps tool outputs data.
    Per this tool:
    - 8 black pixels as (0x00)
    - 8 white pixels as (0xff)
