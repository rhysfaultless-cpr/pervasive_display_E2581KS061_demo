/*
	demoImageData.h
  DEMO set of Image Data
*/

// Load Global Update Images
// #include "image_data/5.81/image_581_720x256_BW.c"
#include "image_581_720x256_BW.c"
// #include "image_data/5.81/image_581_720x256_BWR.c"
#include "image_581_720x256_BWR.c"
#define BW_monoBuffer (uint8_t *)&image_581_720x256_BW_mono
#define BW_0x00Buffer (uint8_t *)&image_581_720x256_BW_0x00
#define BWR_blackBuffer (uint8_t *)&image_581_720x256_BWR_blackBuffer
#define BWR_redBuffer (uint8_t *)&image_581_720x256_BWR_redBuffer

#define BW_black (uint8_t *)&image_black
#define BW_white (uint8_t *)&image_white
#define BW_clearpath (uint8_t *)&image_clearpath
#define BW_clearpath_inverted (uint8_t *)&image_clearpath_inverted
