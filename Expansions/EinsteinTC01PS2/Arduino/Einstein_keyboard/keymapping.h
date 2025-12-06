
typedef struct {
  uint16_t noshift_1[Einstein_KEYMAP_SIZE];
  uint16_t shift_1[Einstein_KEYMAP_SIZE];
  uint16_t noshift_2[Einstein_KEYMAP_SIZE];
  uint16_t shift_2[Einstein_KEYMAP_SIZE];
} EinsteinKeymap_t;

/* Maps are positional in relation to keyboard ASCII codes.

Each map has a normal (without shift) and shifted (with shift) array.

In situations where there is a shift difference, add 160 to the Einstein key byte. 
This is when a key is shifted on keyboard, but not shifted on the Einstein or vise-versa.

Unused ASCII codes need to have the IGNORE_KEYCODE value in place.(Default 340)

*/

const PROGMEM EinsteinKeymap_t EinsteinKeymap_main = {
  // map 1 without shift
   {340,340,340,340, 64,340,340,340,// ASCII Codes 0x00 - 0x07
    340,340,340,340, 72,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,106,106,108,108,116, 74,  6,// ASCII Codes 0x10 - 0x17
    340, 78, 78, 32, 78,340,104,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,104,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     36,  1,105, 73,113, 81, 97, 65,// ASCII Codes 0x30 - 0x37
    118,  2,114, 70,110,102, 86,340,// ASCII Codes 0x38 - 0x3F
    340,  3, 87, 79, 75, 77,115, 83,// ASCII Codes 0x40 - 0x47
     99, 68, 67, 66, 98, 71,103,100,// ASCII Codes 0x48 - 0x4F
     84,  5,117,107, 85, 69,119,109,// ASCII Codes 0x50 - 0x57
    111,101,  7, 82, 74, 76,116,  6,// ASCII Codes 0x58 - 0x5F
    340, 35, 37, 33, 38, 34, 39,112,// ASCII Codes 0x60 - 0x67
    340,340, 80,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F   
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  4,340,340,340,340},// ASCII Codes 0x88 - 0x8F

    
  // map 1 with shift
   {340,340,340,340, 64,340,340,340,// ASCII Codes 0x00 - 0x07
    340,340,340,340, 72,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,106,106,108,108,116, 74,  6,// ASCII Codes 0x10 - 0x17
    340, 78, 78, 32, 78,340,104,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,104,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     36,  1,105, 73,113, 81, 97, 65,// ASCII Codes 0x30 - 0x37
    118,  2,114, 70,110,102, 86,340,// ASCII Codes 0x38 - 0x3F
    340,  3, 87, 79, 75, 77,115, 83,// ASCII Codes 0x40 - 0x47
     99, 68, 67, 66, 98, 71,103,100,// ASCII Codes 0x48 - 0x4F
     84,  5,117,107, 85, 69,119,109,// ASCII Codes 0x50 - 0x57
    111,101,  7, 82, 74, 76,116,  6,// ASCII Codes 0x58 - 0x5F
    340, 35, 37, 33, 38, 34, 39,112,// ASCII Codes 0x60 - 0x67
    340,340, 80,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F   
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  4,340,340,340,340},// ASCII Codes 0x88 - 0x8F
  
  // Same for now....
  // map 2 without shift
   {340,340,340,340, 64,340,340,340,// ASCII Codes 0x00 - 0x07
    340,340,340,340, 72,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,106,106,108,108,116, 74,  6,// ASCII Codes 0x10 - 0x17
    340, 78, 78, 32, 78,340,104,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,104,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     36,  1,105, 73,113, 81, 97, 65,// ASCII Codes 0x30 - 0x37
    118,  2,114, 70,110,102, 86,340,// ASCII Codes 0x38 - 0x3F
    340,  3, 87, 79, 75, 77,115, 83,// ASCII Codes 0x40 - 0x47
     99, 68, 67, 66, 98, 71,103,100,// ASCII Codes 0x48 - 0x4F
     84,  5,117,107, 85, 69,119,109,// ASCII Codes 0x50 - 0x57
    111,101,  7, 82, 74, 76,116,  6,// ASCII Codes 0x58 - 0x5F
    340, 35, 37, 33, 38, 34, 39,112,// ASCII Codes 0x60 - 0x67
    340,340, 80,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F   
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  4,340,340,340,340},// ASCII Codes 0x88 - 0x8F
    
  // map 2 with shift
   {340,340,340,340, 64,340,340,340,// ASCII Codes 0x00 - 0x07
    340,340,340,340, 72,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,106,106,108,108,116, 74,  6,// ASCII Codes 0x10 - 0x17
    340, 78, 78, 32, 78,340,104,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,104,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     36,  1,105, 73,113, 81, 97, 65,// ASCII Codes 0x30 - 0x37
    118,  2,114, 70,110,102, 86,340,// ASCII Codes 0x38 - 0x3F
    340,  3, 87, 79, 75, 77,115, 83,// ASCII Codes 0x40 - 0x47
     99, 68, 67, 66, 98, 71,103,100,// ASCII Codes 0x48 - 0x4F
     84,  5,117,107, 85, 69,119,109,// ASCII Codes 0x50 - 0x57
    111,101,  7, 82, 74, 76,116,  6,// ASCII Codes 0x58 - 0x5F
    340, 35, 37, 33, 38, 34, 39,112,// ASCII Codes 0x60 - 0x67
    340,340, 80,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F   
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  4,340,340,340,340}// ASCII Codes 0x88 - 0x8F

};
