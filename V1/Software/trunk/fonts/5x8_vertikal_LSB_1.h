// table of the bits for the 5x8 character set  
//----------------------------------Create by mike0815----> 23-09-2015----------------------------------
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128
 #ifdef LCD_CYRILLIC                                      
  #define CHAR_COUNT8 (Cyr_ja + 16)
 #else
  #define CHAR_COUNT8 128
 #endif
 #if defined(MAIN_C)
 #ifdef FONT_SELECTED
const unsigned char PROGMEM tiny_font[CHAR_COUNT8][TINY_FONT_WIDTH]=
 #else
const unsigned char PROGMEM font[CHAR_COUNT8][FONT_WIDTH]=
 #endif
{
{0x08,0x3E,0x22,0x22,0x3E,0x08},	/*(01) 0x00 Resistor3  */                    
{0x08,0x7F,0x22,0x14,0x08,0x7F},	/*     0x01 Diode1  */                       
{0x7F,0x08,0x14,0x22,0x7F,0x08},	/*     0x02 Diode2  */                       
{0x7F,0x7F,0x00,0x00,0x7F,0x7F},	/*     0x03 Capacitor  */                    
{0x00,0x58,0x64,0x04,0x64,0x58},	/*     0x04 Omega  */                        
{0x00,0x80,0x7C,0x40,0x40,0x3C},	/*     0x05 mu (�) */                        
{0x22,0x22,0x22,0x22,0x22,0x3E},	/*     0x06 Resistor1  */                    
{0x3E,0x22,0x22,0x22,0x22,0x22},	/*     0x07 Resistor2  */                    
{0x08,0x08,0x08,0x08,0x08,0x08},	/*     0x08 Line1 */                         
{0x38,0x40,0x40,0x30,0x40,0x40},	/*(10) 0x09 Inductor1 */                     
{0x30,0x40,0x40,0x30,0x40,0x38},	/*     0x0a Inductor2 */                     
{0x00,0x80,0x7E,0x01,0x49,0x36},	/*     0x0b Beta */                          
{0x00,0x06,0x29,0x79,0x29,0x06},	/*     0x0c  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/*     0x0d  */                              
{0x00,0x60,0x7E,0x0A,0x35,0x3F},	/*     0x0e  */                              
{0x00,0x2A,0x1C,0x36,0x1C,0x2A},	/*     0x0f  */                              
//**************************************************************************** 
#ifdef LANG_CZECH
{0x0,0x20,0x54,0x56,0x55,0x38},		/* 0x10,Cz_a       */    
{0x0,0x38,0x45,0x46,0x45,0x28},		/* 0x11,Cz_c       */  
{0x0,0x38,0x44,0x45,0x44,0x7E},		/* 0x12,Cz_d       */    
{0x0,0x38,0x54,0x56,0x55,0x18},		/* 0x13,Cz_e       */   
{0x0,0x38,0x55,0x56,0x55,0x18},		/* 0x14,Cz_ee       */     
{0x0,0x0,0x48,0x7A,0x41,0x0},		/* 0x15,Cz_i       */    
{0x0,0x78,0x5,0x6,0x7D,0x0},		/* 0x16,Cz_n       */      
{0x0,0x38,0x44,0x46,0x45,0x38},		/* 0x17,Cz_o       */                             
{0x0,0x0,0x79,0x6,0x5,0x8},		/* 0x18,Cz_r       */                               
{0x0,0x48,0x55,0x56,0x55,0x20},		/* 0x19,Cz_s       */                               
{0x0,0x4,0x3E,0x44,0x20,0x3},		/* 0x1a,Cz_t       */                              
{0x0,0x3C,0x40,0x42,0x21,0x7C},		/* 0x1b,Cz_u       */                                
{0x0,0x38,0x42,0x45,0x22,0x78},		/* 0x1c,Cz_uu       */                             
{0x0,0x8C,0x90,0x62,0x11,0xC},		/* 0x1d,Cz_y       */                            
{0x0,0x44,0x65,0x56,0x4D,0x44},		/* 0x1e,Cz_z       */                           
{0x0,0x66,0x53,0x4A,0x47,0x62},		/* 0x1f,Cz_Z       */
#else
 #ifdef LANG_FRANCAIS
 {0x00,0x20,0x54,0x55,0x56,0x38},	/*     0x10 Fr_a_grave */
 {0x00,0x20,0x56,0x55,0x56,0x38},	/*     0x11 Fr_a_circ  */
 {0x00,0x38,0x56,0x55,0x54,0x18},	/*     0x12 Fr_e_aigu  */
 {0x00,0x38,0x56,0x55,0x56,0x18},	/*     0x13 Fr_e_circ  */
 {0x00,0x38,0x54,0x55,0x55,0x18},	/*     0x14 Fr_e_grave */
 {0x00,0x14,0xB6,0xFF,0xB6,0x14},	/*     0x15  */
 {0x00,0x14,0xB6,0xFF,0xB6,0x14},	/*     0x16  */
 {0x00,0x14,0xB6,0xFF,0xB6,0x14},	/*     0x17  */
 {0x00,0x04,0x06,0x7F,0x06,0x04},	/*     0x18  */
 {0x00,0x10,0x30,0x7F,0x30,0x10},	/*     0x19  */
 {0x00,0x08,0x08,0x3E,0x1C,0x08},	/*     0x1a  */
 {0x00,0x08,0x1C,0x3E,0x08,0x08},	/*     0x1b  */
 {0x00,0x78,0x40,0x40,0x40,0x40},	/*     0x1c  */
 {0x00,0x08,0x3E,0x08,0x3E,0x08},	/*(30) 0x1d  */
 {0x00,0x30,0x3C,0x3F,0x3C,0x30},	/*     0x1e  */
 {0x00,0x03,0x0F,0x3F,0x0F,0x03},	/*(32) 0x1f  */

 #else	
 //**************************************************************************** 
 {0x00,0xE0,0x51,0x4F,0x41,0xFF},	/*    (0xe0 - GR_OFFSET2),Cyr_D       */    
 {0x00,0x7F,0x40,0x40,0x40,0xFF},	/*    (0xe1 - GR_OFFSET2),Cyr_C       */    
 {0x00,0x7F,0x40,0x7F,0x40,0xFF},	/*    (0xe2 - GR_OFFSET2),Cyr_Schtsch */    
 {0x00,0xE0,0x54,0x4C,0x44,0xFC},	/*(20)(0xe3 - GR_OFFSET2),Cyr_d       */    
 {0x00,0x18,0x24,0x7E,0x24,0x18},	/*    (0xe4 - GR_OFFSET2),Cyr_f       */    
 {0x00,0x7C,0x40,0x40,0x40,0xFC},	/*    (0xe5 - GR_OFFSET2),Cyr_c       */    
 {0x00,0x7C,0x40,0x7C,0x40,0xFC},	/*    (0xe6 - GR_OFFSET2),Cyr_schtsch */    
 {0x00,0x14,0xB6,0xFF,0xB6,0x14},	/*     0x17  */                              
 {0x00,0x04,0x06,0x7F,0x06,0x04},	/*     0x18  */                              
 {0x00,0x10,0x30,0x7F,0x30,0x10},	/*     0x19  */                              
 {0x00,0x08,0x08,0x3E,0x1C,0x08},	/*     0x1a  */                              
 {0x00,0x08,0x1C,0x3E,0x08,0x08},	/*     0x1b  */                              
 {0x00,0x78,0x40,0x40,0x40,0x40},	/*     0x1c  */                              
 {0x00,0x08,0x3E,0x08,0x3E,0x08},	/*(30) 0x1d  */                              
 {0x00,0x30,0x3C,0x3F,0x3C,0x30},	/*     0x1e  */                              
 {0x00,0x03,0x0F,0x3F,0x0F,0x03},	/*(32) 0x1f  */
//****************************************************************************
 #endif
#endif                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/*(001)0x20 ' ' */                           
{0x00, 0x00, 0x00, 0x5E, 0x00, 0x00},	/*     0x21 '!' */                           
{0x00, 0x00, 0x06, 0x00, 0x06, 0x00},	/*     0x22 '"' */                           
{0x00, 0x28, 0x7C, 0x28, 0x7C, 0x28},	/*     0x23 '#' */                           
{0x00, 0x48, 0x54, 0xD6, 0x54, 0x24},	/*     0x24 '$' */                           
{0x00, 0x42, 0x20, 0x18, 0x04, 0x42},	/*     0x25 '%' */                           
{0x00, 0x34, 0x4A, 0x5A, 0x24, 0x50},	/*     0x26 '&' */                           
{0x00, 0x00, 0x0A, 0x06, 0x00, 0x00},	/*     0x27 ''' */                           
{0x00, 0x00, 0x18, 0x24, 0x42, 0x00},	/*     0x28 '(' */                           
{0x00, 0x00, 0x42, 0x24, 0x18, 0x00},	/*(010)0x29 ')' */                           
{0x00,0x14,0x08,0x3E,0x08,0x14},	/*     0x2a '*' */                           
{0x00, 0x10, 0x38, 0x10, 0x00, 0x00},	/*     0x2b '+' */                           
{0x00,0x00,0xA0,0x60,0x00,0x00},	/*     0x2c ',' */                           
{0x00, 0x10, 0x10, 0x10, 0x10, 0x00},	/*     0x2d '-' */                           
{0x00, 0x00, 0x00, 0x40, 0x00, 0x00},	/*     0x2e '.' */                           
{0x00, 0x00, 0x60, 0x18, 0x06, 0x00},	/*     0x2f '/' */                           
{0x00,0x3C,0x46,0x4A,0x52,0x3C},	/*     0x30 '0' ***************/                           
{0x00,0x00,0x44,0x7E,0x40,0x00},	/*     0x31 '1' ***************/                           
{0x00,0x64,0x52,0x52,0x52,0x4C},	/*     0x32 '2' ***************/                           
{0x00,0x24,0x42,0x4A,0x4A,0x34},	/*(020)0x33 '3' ***************/                           
{0x00,0x18,0x14,0x52,0x7E,0x50},	/*     0x34 '4' ***************/                           
{0x00,0x2E,0x4A,0x4A,0x4A,0x32},	/*     0x35 '5' ***************/                           
{0x00,0x3C,0x4A,0x4A,0x4A,0x32},	/*     0x36 '6' ***************/                           
{0x00,0x02,0x02,0x62,0x12,0x0E},	/*     0x37 '7' ***************/                           
{0x00,0x34,0x4A,0x4A,0x4A,0x34},	/*     0x38 '8' ***************/                           
{0x00,0x4C,0x52,0x52,0x52,0x3C},	/*     0x39 '9' ***************/                           
{0x00, 0x00, 0x00, 0x24, 0x00, 0x00},	/*     0x3a ':' */                           
{0x00, 0x00, 0x40, 0x24, 0x00, 0x00},	/*     0x3b ';' */                           
{0x00, 0x10, 0x28, 0x44, 0x00, 0x00},	/*     0x3c '<' */                           
{0x00, 0x00, 0x28, 0x28, 0x28, 0x00},	/*(030)0x3d '=' ***************/                           
{0x00, 0x00, 0x44, 0x28, 0x10, 0x00},	/*     0x3e '>' */                           
{0x00, 0x04, 0x02, 0x52, 0x0C, 0x00},	/*     0x3f '?' */                           
{0x00, 0x7C, 0x82, 0xBA, 0xA6, 0x5C},	/*     0x40 '@' */                           
{0x00,0x7C, 0x12, 0x12, 0x12, 0x7C},	/*     0x41 'A' */                           
{0x00,0x7E, 0x4A, 0x4A, 0x4A, 0x3C},	/* 	   0x42 'B' */                           
{0x00,0x3C,0x42,0x42,0x42,0x24},	/*	   0x43 'C' ***************/                           
{0x00,0x7E,0x42,0x42,0x42,0x3C},	/*     0x44 'D' ***************/                           
{0x00,0x7E,0x4A,0x4A,0x4A,0x42},	/*     0x45 'E' ***************/                           
{0x00,0x7E,0x0A,0x0A,0x0A,0x02},	/*     0x46 'F' ***************/                           
{0x00,0x3C, 0x42, 0x4A, 0x4A, 0x3A},	/*(040)0x47 'G' */                           
{0x00,0x7E, 0x08, 0x08, 0x08, 0x7E},	/*     0x48 'H' */                           
{0x00,0x00, 0x42, 0x7E, 0x42, 0x00},	/*     0x49 'I' */                           
{0x00,0x22, 0x42, 0x42, 0x42, 0x3E},	/*     0x4a 'J' */                           
{0x00,0x7E, 0x08, 0x18, 0x24, 0x42},	/*     0x4b 'K' */                           
{0x00,0x7E, 0x40, 0x40, 0x40, 0x40},	/*     0x4c 'L' */                           
{0x00,0x7E, 0x04, 0x08, 0x04, 0x7E},	/*     0x4d 'M' */                           
{0x00,0x7E, 0x04, 0x08, 0x10, 0x7E},	/*     0x4e 'N' */                           
{0x00,0x3C, 0x42, 0x42, 0x42, 0x3C},	/*     0x4f 'O' */                           
{0x00,0x7E, 0x12, 0x12, 0x12, 0x0C},	/*     0x50 'P' */                           
{0x00,0x3C, 0x42, 0x52, 0x22, 0x5C},	/*(050)0x51 'Q' */                           
{0x00,0x7E,0x12,0x12,0x32,0x4C},	/*     0x52 'R' ************/                           
{0x00,0x24,0x4A,0x4A,0x52,0x24},	/*     0x53 'S' ************/                           
{0x00,0x02,0x02,0x7E,0x02,0x02},	/*     0x54 'T' ************/                           
{0x00,0x3E,0x40,0x40,0x40,0x3E},	/*     0x55 'U' ************/                           
{0x00,0x1E,0x20,0x40,0x20,0x1E},	/*     0x56 'V' ************/                           
{0x00,0x3E,0x40,0x3C,0x40,0x3E},	/*     0x57 'W' ************/                           
{0x00,0x42,0x24,0x18,0x24,0x42},	/*     0x58 'X' ************/                           
{0x00,0x02, 0x4C, 0x70, 0x4C, 0x02},	/*     0x59 'Y' ************/                           
{0x00,0x66, 0x52, 0x4A, 0x46, 0x62},	/*     0x5a 'Z' ************/                           
{0x00,0x00, 0x00, 0x7E, 0x42, 0x00},	/*(060)0x5b '[' */                           
{0x00,0x00, 0x06, 0x18, 0x60, 0x00},	/*     0x5c '\' */                           
{0x00,0x00, 0x00, 0x42, 0x7E, 0x00},	/*     0x5d ']' */                           
{0x00,0x00, 0x04, 0x02, 0x04, 0x00},	/*     0x5e '^' */                           
{0x00, 0x40, 0x40, 0x40, 0x40, 0x40},	/*     0x5f '_' */                           
{0x00,0x00, 0x02, 0x04, 0x00, 0x00},	/*     0x60 '`' */                           
{0x00,0x20,0x54,0x54,0x54,0x38},	/*     0x61 'a' */                           
{0x00, 0x7E, 0x44, 0x44, 0x44, 0x38},	/*     0x62 'b' */                           
{0x00, 0x38, 0x44, 0x44, 0x44, 0x28},	/*     0x63 'c' */                           
{0x00, 0x38, 0x44, 0x44, 0x44, 0x7E},	/*     0x64 'd' */                           
{0x00,0x38,0x54,0x54,0x54,0x18},	/*(070)0x65 'e' */                           
{0x00, 0x08, 0x7C, 0x0A, 0x0A, 0x00},	/*     0x66 'f' */                           
{0x00, 0x98, 0xA4, 0xA4, 0x94, 0x7C},	/*     0x67 'g' */                           
{0x00, 0x7E, 0x08, 0x08, 0x08, 0x70},	/*     0x68 'h' */                           
{0x00,0x00, 0x48, 0x7A, 0x40, 0x00},	/*     0x69 'i' */                           
{0x00,0x40, 0x80, 0x88, 0x7A, 0x00},	/*     0x6a 'j' */                           
{0x00,0x7E, 0x10, 0x68, 0x44, 0x00},	/*     0x6b 'k' */                           
{0x00,0x00, 0x42, 0x7E, 0x40, 0x00},	/*     0x6c 'l' */                           
{0x00, 0x78, 0x04, 0x78, 0x04, 0x78},	/*     0x6d 'm' */                           
{0x00, 0x78, 0x04, 0x04, 0x7C, 0x00},	/*     0x6e 'n' */                           
{0x00, 0x38, 0x44, 0x44, 0x44, 0x38},	/*(080)0x6f 'o' */                           
{0x00, 0xFC, 0x24, 0x44, 0x44, 0x38},	/* 0x70 'p' */                           
{0x00, 0x38, 0x44, 0x44, 0x24, 0xFC},	/* 0x71 'q' */                           
{0x00, 0x00, 0x78, 0x04, 0x04, 0x08},	/* 0x72 'r' */                           
{0x00,0x48,0x54,0x54,0x54,0x20},	/* 0x73 's' */                           
{0x00, 0x04, 0x3E, 0x44, 0x24, 0x00},	/* 0x74 't' */                           
{0x00,0x3C,0x40,0x40,0x20,0x7C},	/* 0x75 'u' */                           
{0x00,0x1C,0x20,0x40,0x20,0x1C},	/* 0x76 'v' */                           
{0x00,0x3C,0x40,0x30,0x40,0x3C},	/* 0x77 'w' */                           
{0x00,0x44,0x28,0x10,0x28,0x44},	/* 0x78 'x' */                           
{0x00, 0x8C, 0x90, 0x60, 0x10, 0x0C},	/* 0x79 'y' */                           
{0x00,0x44,0x64,0x54,0x4C,0x44},	/* 0x7a 'z' */                           
{0x00,0x00,0x08,0x36,0x41,0x00},	/* 0x7b '{' */                           
{0x00, 0x00, 0x00, 0xFE, 0x00, 0x00},	/* 0x7c '|' */                           
{0x00,0x00,0x41,0x36,0x08,0x00},	/* 0x7d '}' */                           
{0x00,0x08,0x08,0x2A,0x1C,0x08},	/* 0x7e '~' */                           
{0x00,0x3C,0x26,0x23,0x26,0x3C},	/* 0x7f  */                              
 #if 0                                                                           
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x80  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x81  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x82  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x83  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x84  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x85  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x86  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x87  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x88  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x89  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8a  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8b  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8c  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8d  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8e  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8f  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x90  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x91  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x92  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x93  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x94  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x95  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x96  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x97  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x98  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x99  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9a  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9b  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9c  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9d  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9e  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9f  */                              
 #endif                                                                          
#ifdef LCD_CYRILLIC                                                              
{0x00,0x7F,0x49,0x49,0x49,0x33},	/* 0xa0 ,Cyr_B */                        
{0x00,0x7F,0x01,0x01,0x01,0x03},	/* 0xa1 ,Cyr_G */                        
{0x00,0x7C,0x55,0x54,0x55,0x00},	/* 0xa2 ,Cyr_Jo */                       
{0x00,0x77,0x08,0x7F,0x08,0x77},	/* 0xa3 ,Cyr_Zsch */                     
{0x00,0x41,0x49,0x49,0x49,0x36},	/* 0xa4 ,Cyr_Z */                        
{0x00,0x7F,0x10,0x08,0x04,0x7F},	/* 0xa5 ,Cyr_I */                        
{0x00,0x7C,0x21,0x12,0x09,0x7C},	/* 0xa6 ,Cyr_J */                        
{0x00,0x20,0x41,0x3F,0x01,0x7F},	/* 0xa7 ,Cyr_L */                        
{0x00,0x7F,0x01,0x01,0x01,0x7F},	/* 0xa8 ,Cyr_P */                        
{0x00,0x47,0x28,0x10,0x08,0x07},	/* 0xa9 ,Cyr_U */                        
{0x00,0x1C,0x22,0x7F,0x22,0x1C},	/* 0xaa ,Cyr_F */                        
{0x00,0x07,0x08,0x08,0x08,0x7F},	/* 0xab ,Cyr_Tsch */                     
{0x00,0x7F,0x40,0x7F,0x40,0x7F},	/* 0xac ,Cyr_Sch */                      
{0x00,0x01,0x7F,0x48,0x48,0x30},	/* 0xad ,Cyr_HH */                       
{0x00,0x7F,0x48,0x30,0x00,0x7F},	/* 0xae ,Cyr_Y */                        
{0x00,0x22,0x41,0x49,0x49,0x3E},	/* 0xaf ,Cyr_E */                        
{0x00,0x7F,0x08,0x3E,0x41,0x3E},	/* 0xb0 ,Cyr_Ju */                       
{0x00,0x46,0x29,0x19,0x09,0x7F},	/* 0xb1 ,Cyr_Ja */                       
{0x00,0x3C,0x4A,0x4A,0x49,0x31},	/* 0xb2 ,Cyr_b */                        
{0x00,0x7C,0x54,0x54,0x28,0x00},	/* 0xb3 ,Cyr_v */                        
{0x00,0x7C,0x04,0x04,0x04,0x0C},	/* 0xb4 ,Cyr_g */                        
{0x00,0x38,0x55,0x54,0x55,0x18},	/* 0xb5 ,Cyr_jo */                       
{0x00,0x6C,0x10,0x7C,0x10,0x6C},	/* 0xb6 ,Cyr_zsch */                     
{0x00,0x44,0x44,0x54,0x54,0x28},	/* 0xb7 ,Cyr_z */                        
{0x00,0x7C,0x20,0x10,0x08,0x7C},	/* 0xb8 ,Cyr_i */                        
{0x00,0x78,0x42,0x24,0x12,0x78},	/* 0xb9 ,Cyr_j */                        
{0x00,0x7C,0x10,0x28,0x44,0x00},	/* 0xba ,Cyr_k */                        
{0x00,0x20,0x44,0x3C,0x04,0x7C},	/* 0xbb ,Cyr_l */                        
{0x00,0x7C,0x08,0x10,0x08,0x7C},	/* 0xbc ,Cyr_m */                        
{0x00,0x7C,0x10,0x10,0x10,0x7C},	/* 0xbd ,Cyr_n */                        
{0x00,0x7C,0x04,0x04,0x04,0x7C},	/* 0xbe ,Cyr_p */                        
{0x00,0x04,0x04,0x7C,0x04,0x04},	/* 0xbf ,Cyr_t */                        
{0x00,0x0C,0x10,0x10,0x10,0x7C},	/* 0xc0 ,Cyr_tsch */                     
{0x00,0x7C,0x40,0x7C,0x40,0x7C},	/* 0xc1 ,Cyr_sch */                      
{0x00,0x04,0x7C,0x50,0x50,0x20},	/* 0xc2 ,Cyr_hh */                       
{0x00,0x7C,0x50,0x20,0x00,0x7C},	/* 0xc3 ,Cyr_y */                        
{0x00,0x7C,0x50,0x50,0x20,0x00},	/* 0xc4 ,Cyr_ww */                       
{0x00,0x28,0x44,0x54,0x54,0x38},	/* 0xc5 ,Cyr_e */                        
{0x00,0x7C,0x10,0x38,0x44,0x38},	/* 0xc6 ,Cyr_ju */                       
{0x00,0x08,0x54,0x34,0x14,0x7C},	/* 0xc7 ,Cyr_ja */                       
 #if 0                                                                           
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc8  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc9  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xca  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcb  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcc  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcd  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xce  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcf  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd0  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd1  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd2  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd3  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd4  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd5  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd6  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd7  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd8  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd9  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xda  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdb  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdc  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdd  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xde  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdf  */                              
{0x00,0x3C,0x42,0x43,0x3D,0x00},	/* 0xe0 ,Cyr_D */                        
{0x00,0xFE,0x4A,0x4A,0x34,0x00},	/* 0xe1 ,Cyr_d */                        
{0x00,0x3C,0x43,0x43,0x3D,0x00},	/* 0xe2 ,Cyr_f */                        
{0x00,0x3D,0x43,0x42,0x3C,0x00},	/* 0xe3 ,Cyr_C */                        
{0x00,0x32,0x49,0x4A,0x31,0x00},	/* 0xe4 ,Cyr_c */                        
{0x00,0x3A,0x45,0x46,0x39,0x00},	/* 0xe5 ,Cyr_Schtsch */                  
{0x00,0xFC,0x20,0x20,0x1C,0x00},	/* 0xe6 ,Cyr_schtsch */                  
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe7  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe8  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe9  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xea  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xeb  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xec  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xed  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xee  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xef  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf0  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf1  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf2  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf3  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf4  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf5  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf6  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf7  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf8  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf9  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfa  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfb  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfc  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfd  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfe  */                              
{0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xff  */                              
 #endif
#endif                                          
};
#else
 #ifndef __ASSEMBLER__
  #ifdef FONT_SELECTED
 extern const unsigned char PROGMEM tiny_font[CHAR_COUNT8][TINY_FONT_WIDTH];
  #else
 extern const unsigned char PROGMEM font[CHAR_COUNT8][FONT_WIDTH];
  #endif
 #endif
#endif
