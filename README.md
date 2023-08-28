# pervasive_display_E2581KS061_demo

## components

- Display: [E2581KS061](https://www.pervasivedisplays.com/product/5-81-e-ink-displays/#ptab-3)
- Development board: [EXT3-1](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-3-ext3/)
- Raspberry Pi Pico

## links

- Internal ticket: https://jira.clearpathrobotics.com/browse/CPE87-520
- https://github.com/PervasiveDisplays/EPD_Driver_GF_581_KS
- https://embeddedcomputing.weebly.com/connecting-the-ext3-to-the-raspberry-pi-pico.html
- https://www.pervasivedisplays.com/rapidly-explore-the-capability-of-e-paper-with-ext2/
- https://supitt-eas-prd-wap-pdiwebsite-03.azurewebsites.net/private-doc/pdi-apps-v1-30-installer/
- https://www.pervasivedisplays.com/wp-content/uploads/2021/05/Fast_Update_Application_Guide_Rev03.pdf

## notes

1.  I downloaded the repository <https://github.com/PervasiveDisplays/EPD_Driver_GF_581_KS> as a .zip
2.  Next, I imported this .zip as a library in Arduino IDE
3.  I attempted to compile this, but was getting File Not Found errors from the import statements. 
    I then removed the file paths, and just included the library name to be imported, without the relative file path.
    Arduino IDE was then able to locate the file, and compile.
    I left comments in the .h libraries of the authors original import statement.
4.  The application manual mentions that bits are interpreted as
    - 1 = Black
    - 0 = White
    
    This is opposite of how the PDi Apps tool outputs data.
    Per this tool:
    - 8 black pixels as (0x00)
    - 8 white pixels as (0xff)
5.  We need to use  1-bit grayscale color / monochrome images.
6.  There was signifcant ghosting on the display.
    Refer to the [attached video](./clearpath_logo/pervasive_displays_ghosting.mp4) showing the issue.
