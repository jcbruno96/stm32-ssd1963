unsigned int tim3_cpt=0;
unsigned int debug_var=0;

#define TFT_WIDTH 800
#define TFT_HEIGHT 480

// 
//  Font data for Classic Console 16pt
// 

// Character bitmaps for Classic Console 16pt
unsigned int classicConsole_16ptBitmaps[] = 
{
	// <space> ' ' (0 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, // 
	0x00, //
	0x00, //
	0x00, //  
	0x00, //
	0x00, // 
	0x00, //   
	0x00, // 
	0x00, //
	
	// @0 '!' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x60, //  ## 
	0xF0, // ####
	0xF0, // ####
	0xF0, // ####
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x00, //     
	0x60, //  ## 
	0x60, //  ## 
	0x00, //     
	0x00, //     
	0x00, //     

	// @15 '"' (6 pixels wide)
	0x00, //       
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x48, //  #  # 
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @30 '#' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0xFE, // #######
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0xFE, // #######
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0x00, //        
	0x00, //        
	0x00, //        

	// @45 '$' (7 pixels wide)
	0x18, //    ##  
	0x18, //    ##  
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC2, // ##    #
	0xC0, // ##     
	0x7C, //  ##### 
	0x06, //      ##
	0x06, //      ##
	0x86, // #    ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x18, //    ##  
	0x18, //    ##  
	0x00, //        

	// @60 '%' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xC2, // ##    #
	0xC6, // ##   ##
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xC6, // ##   ##
	0x86, // #    ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @75 '&' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0x38, //   ###  
	0x76, //  ### ##
	0xDC, // ## ### 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @90 ''' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xC0, // ## 
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @105 '(' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x30, //   ##
	0x60, //  ## 
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0x60, //  ## 
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     

	// @120 ')' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xC0, // ##  
	0x60, //  ## 
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x60, //  ## 
	0xC0, // ##  
	0x00, //     
	0x00, //     
	0x00, //     

	// @135 '*' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x66, //  ##  ## 
	0x3C, //   ####  
	0xFF, // ########
	0x3C, //   ####  
	0x66, //  ##  ## 
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @150 '+' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x30, //   ##  
	0x30, //   ##  
	0xFC, // ######
	0x30, //   ##  
	0x30, //   ##  
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @165 ',' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @180 '-' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @195 '.' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @210 '/' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x02, //       #
	0x06, //      ##
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xC0, // ##     
	0x80, // #      
	0x00, //        
	0x00, //        
	0x00, //        

	// @225 '0' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x6C, //  ## ## 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x6C, //  ## ## 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @240 '1' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x30, //   ##  
	0x70, //  ###  
	0xF0, // ####  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @255 '2' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x06, //      ##
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xC0, // ##     
	0xC6, // ##   ##
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @270 '3' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x06, //      ##
	0x06, //      ##
	0x3C, //   #### 
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @285 '4' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x0C, //     ## 
	0x1C, //    ### 
	0x3C, //   #### 
	0x6C, //  ## ## 
	0xCC, // ##  ## 
	0xFE, // #######
	0x0C, //     ## 
	0x0C, //     ## 
	0x0C, //     ## 
	0x1E, //    ####
	0x00, //        
	0x00, //        
	0x00, //        

	// @300 '5' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @315 '6' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x60, //  ##    
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @330 '7' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xC6, // ##   ##
	0x06, //      ##
	0x06, //      ##
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x30, //   ##   
	0x30, //   ##   
	0x30, //   ##   
	0x00, //        
	0x00, //        
	0x00, //        

	// @345 '8' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @360 '9' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7E, //  ######
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x0C, //     ## 
	0x78, //  ####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @375 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @390 ';' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @405 '<' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x0C, //     ##
	0x18, //    ## 
	0x30, //   ##  
	0x60, //  ##   
	0xC0, // ##    
	0x60, //  ##   
	0x30, //   ##  
	0x18, //    ## 
	0x0C, //     ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @420 '=' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @435 '>' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xC0, // ##    
	0x60, //  ##   
	0x30, //   ##  
	0x18, //    ## 
	0x0C, //     ##
	0x18, //    ## 
	0x30, //   ##  
	0x60, //  ##   
	0xC0, // ##    
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @450 '?' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x0C, //     ## 
	0x18, //    ##  
	0x18, //    ##  
	0x18, //    ##  
	0x00, //        
	0x18, //    ##  
	0x18, //    ##  
	0x00, //        
	0x00, //        
	0x00, //        

	// @465 '@' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xDE, // ## ####
	0xDE, // ## ####
	0xDE, // ## ####
	0xDE, // ## ####
	0xDC, // ## ### 
	0xC0, // ##     
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @480 'A' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x38, //   ###  
	0x6C, //  ## ## 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFE, // #######
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @495 'B' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x7C, //  ##### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0xFC, // ###### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @510 'C' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x66, //  ##  ##
	0xC2, // ##    #
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC2, // ##    #
	0x66, //  ##  ##
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @525 'D' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xF8, // #####  
	0x6C, //  ## ## 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x6C, //  ## ## 
	0xF8, // #####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @540 'E' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x66, //  ##  ##
	0x62, //  ##   #
	0x68, //  ## #  
	0x78, //  ####  
	0x68, //  ## #  
	0x60, //  ##    
	0x62, //  ##   #
	0x66, //  ##  ##
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @555 'F' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x66, //  ##  ##
	0x62, //  ##   #
	0x68, //  ## #  
	0x78, //  ####  
	0x68, //  ## #  
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0xF0, // ####   
	0x00, //        
	0x00, //        
	0x00, //        

	// @570 'G' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x66, //  ##  ##
	0xC2, // ##    #
	0xC0, // ##     
	0xC0, // ##     
	0xDE, // ## ####
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x66, //  ##  ##
	0x3A, //   ### #
	0x00, //        
	0x00, //        
	0x00, //        

	// @585 'H' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFE, // #######
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @600 'I' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xF0, // ####
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     

	// @615 'J' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x1E, //    ####
	0x0C, //     ## 
	0x0C, //     ## 
	0x0C, //     ## 
	0x0C, //     ## 
	0x0C, //     ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x78, //  ####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @630 'K' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE6, // ###  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x6C, //  ## ## 
	0x78, //  ####  
	0x78, //  ####  
	0x6C, //  ## ## 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0xE6, // ###  ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @645 'L' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xF0, // ####   
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0x62, //  ##   #
	0x66, //  ##  ##
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @660 'M' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xEE, // ### ###
	0xFE, // #######
	0xFE, // #######
	0xD6, // ## # ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @675 'N' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xE6, // ###  ##
	0xF6, // #### ##
	0xFE, // #######
	0xDE, // ## ####
	0xCE, // ##  ###
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @690 'O' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @705 'P' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x7C, //  ##### 
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0xF0, // ####   
	0x00, //        
	0x00, //        
	0x00, //        

	// @720 'Q' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xD6, // ## # ##
	0xDE, // ## ####
	0x7C, //  ##### 
	0x0C, //     ## 
	0x0E, //     ###
	0x00, //        

	// @735 'R' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x7C, //  ##### 
	0x6C, //  ## ## 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0xE6, // ###  ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @750 'S' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x60, //  ##    
	0x38, //   ###  
	0x0C, //     ## 
	0x06, //      ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @765 'T' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0xFC, // ######
	0xB4, // # ## #
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @780 'U' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @795 'V' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x6C, //  ## ## 
	0x38, //   ###  
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @810 'W' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xFE, // #######
	0xEE, // ### ###
	0x6C, //  ## ## 
	0x00, //        
	0x00, //        
	0x00, //        

	// @825 'X' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x6C, //  ## ## 
	0x7C, //  ##### 
	0x38, //   ###  
	0x38, //   ###  
	0x7C, //  ##### 
	0x6C, //  ## ## 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @840 'Y' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x78, //  #### 
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @855 'Z' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xC6, // ##   ##
	0x86, // #    ##
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xC2, // ##    #
	0xC6, // ##   ##
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @870 '[' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xF0, // ####
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     

	// @885 '\' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x80, // #      
	0xC0, // ##     
	0xE0, // ###    
	0x70, //  ###   
	0x38, //   ###  
	0x1C, //    ### 
	0x0E, //     ###
	0x06, //      ##
	0x02, //       #
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @900 ']' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xF0, // ####
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     

	// @915 '^' (7 pixels wide)
	0x10, //    #   
	0x38, //   ###  
	0x6C, //  ## ## 
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @930 '_' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x00, //        
	0x00, //        

	// @945 '`' (4 pixels wide)
	0xC0, // ##  
	0x60, //  ## 
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @960 'a' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x78, //  ####  
	0x0C, //     ## 
	0x7C, //  ##### 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @975 'b' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE0, // ###    
	0x60, //  ##    
	0x60, //  ##    
	0x78, //  ####  
	0x6C, //  ## ## 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @990 'c' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1005 'd' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x1C, //    ### 
	0x0C, //     ## 
	0x0C, //     ## 
	0x3C, //   #### 
	0x6C, //  ## ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1020 'e' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xFE, // #######
	0xC0, // ##     
	0xC0, // ##     
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1035 'f' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x6C, //  ## ##
	0x64, //  ##  #
	0x60, //  ##   
	0xF0, // ####  
	0x60, //  ##   
	0x60, //  ##   
	0x60, //  ##   
	0x60, //  ##   
	0xF0, // ####  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1050 'g' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x76, //  ### ##
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x7C, //  ##### 
	0x0C, //     ## 
	0xCC, // ##  ## 
	0x78, //  ####  

	// @1065 'h' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE0, // ###    
	0x60, //  ##    
	0x60, //  ##    
	0x6C, //  ## ## 
	0x76, //  ### ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0xE6, // ###  ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1080 'i' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x60, //  ## 
	0x60, //  ## 
	0x00, //     
	0xE0, // ### 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     

	// @1095 'j' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x0C, //     ##
	0x0C, //     ##
	0x00, //       
	0x1C, //    ###
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x78, //  #### 

	// @1110 'k' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE0, // ###    
	0x60, //  ##    
	0x60, //  ##    
	0x66, //  ##  ##
	0x6C, //  ## ## 
	0x78, //  ####  
	0x78, //  ####  
	0x6C, //  ## ## 
	0x66, //  ##  ##
	0xE6, // ###  ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1125 'l' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xE0, // ### 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     

	// @1140 'm' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xEC, // ### ## 
	0xFE, // #######
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1155 'n' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xDC, // ## ### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1170 'o' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1185 'p' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xDC, // ## ### 
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x7C, //  ##### 
	0x60, //  ##    
	0x60, //  ##    
	0xF0, // ####   

	// @1200 'q' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x76, //  ### ##
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x7C, //  ##### 
	0x0C, //     ## 
	0x0C, //     ## 
	0x1E, //    ####

	// @1215 'r' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xDC, // ## ### 
	0x76, //  ### ##
	0x66, //  ##  ##
	0x60, //  ##    
	0x60, //  ##    
	0x60, //  ##    
	0xF0, // ####   
	0x00, //        
	0x00, //        
	0x00, //        

	// @1230 's' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x60, //  ##    
	0x38, //   ###  
	0x0C, //     ## 
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1245 't' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x30, //   ##   
	0x30, //   ##   
	0xFC, // ###### 
	0x30, //   ##   
	0x30, //   ##   
	0x30, //   ##   
	0x30, //   ##   
	0x36, //   ## ##
	0x1C, //    ### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1260 'u' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0xCC, // ##  ## 
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1275 'v' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x78, //  #### 
	0x30, //   ##  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1290 'w' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xFE, // #######
	0x6C, //  ## ## 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1305 'x' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0x6C, //  ## ## 
	0x38, //   ###  
	0x38, //   ###  
	0x38, //   ###  
	0x6C, //  ## ## 
	0xC6, // ##   ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1320 'y' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0x7E, //  ######
	0x06, //      ##
	0x0C, //     ## 
	0xF8, // #####  

	// @1335 'z' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xCC, // ##  ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xC6, // ##   ##
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @1350 '{' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x1C, //    ###
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0xE0, // ###   
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x1C, //    ###
	0x00, //       
	0x00, //       
	0x00, //       

	// @1365 '|' (2 pixels wide)
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @1380 '}' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xE0, // ###   
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x1C, //    ###
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0xE0, // ###   
	0x00, //       
	0x00, //       
	0x00, //       

	// @1395 '~' (7 pixels wide)
	0x00, //        
	0x76, //  ### ##
	0xDC, // ## ### 
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
};

// Character descriptors for Classic Console 16pt
// { [Char width in bits], [Offset into classicConsole_16ptCharBitmaps in bytes] }
unsigned int classicConsole_16ptDescriptors[95][2] = 
{
	{7, 0},			//<space>
  {4, 15}, 		// ! 
	{6, 30}, 		// " 
	{7, 45}, 		// # 
	{7, 60}, 		// $ 
	{7, 75}, 		// % 
	{7, 90}, 		// & 
	{3, 105}, 		// ' 
	{4, 120}, 		// ( 
	{4, 135}, 		// ) 
	{8, 150}, 		// * 
	{6, 165}, 		// + 
	{3, 180}, 		// , 
	{7, 195}, 		// - 
	{2, 210}, 		// . 
	{7, 225}, 		// / 
	{7, 240}, 		// 0 
	{6, 255}, 		// 1 
	{7, 270}, 		// 2 
	{7, 285}, 		// 3 
	{7, 300}, 		// 4 
	{7, 315}, 		// 5 
	{7, 330}, 		// 6 
	{7, 345}, 		// 7 
	{7, 360}, 		// 8 
	{7, 375}, 		// 9 
	{2, 390}, 		// : 
	{3, 405}, 		// ; 
	{6, 420}, 		// < 
	{6, 435}, 		// = 
	{6, 450}, 		// > 
	{7, 465}, 		// ? 
	{7, 480}, 		// @ 
	{7, 495}, 		// A 
	{7, 510}, 		// B 
	{7, 525}, 		// C 
	{7, 540}, 		// D 
	{7, 555}, 		// E 
	{7, 570}, 		// F 
	{7, 585}, 		// G 
	{7, 600}, 		// H 
	{4, 615}, 		// I 
	{7, 630}, 		// J 
	{7, 645}, 		// K 
	{7, 660}, 		// L 
	{7, 675}, 		// M 
	{7, 690}, 		// N 
	{7, 705}, 		// O 
	{7, 720}, 		// P 
	{7, 735}, 		// Q 
	{7, 750}, 		// R 
	{7, 765}, 		// S 
	{6, 780}, 		// T 
	{7, 795}, 		// U 
	{7, 810}, 		// V 
	{7, 825}, 		// W 
	{7, 840}, 		// X 
	{6, 855}, 		// Y 
	{7, 870}, 		// Z 
	{4, 885}, 		// [ 
	{7, 900}, 		// \ 
	{4, 915}, 		// ] 
	{7, 930}, 		// ^ 
	{7, 945}, 		// _ 
	{4, 960}, 		// ` 
	{7, 975}, 		// a 
	{7, 990}, 		// b 
	{7, 1005}, 		// c 
	{7, 1020}, 		// d 
	{7, 1035}, 		// e 
	{6, 1050}, 		// f 
	{7, 1065}, 		// g 
	{7, 1080}, 		// h 
	{4, 1095}, 		// i 
	{6, 1110}, 		// j 
	{7, 1125}, 		// k 
	{4, 1140}, 		// l 
	{7, 1155}, 		// m 
	{7, 1170}, 		// n 
	{7, 1185}, 		// o 
	{7, 1200}, 		// p 
	{7, 1215}, 		// q 
	{7, 1230}, 		// r 
	{7, 1245}, 		// s 
	{7, 1260}, 		// t 
	{7, 1275}, 		// u 
	{6, 1290}, 		// v 
	{7, 1305}, 		// w 
	{7, 1320}, 		// x 
	{7, 1335}, 		// y 
	{7, 1350}, 		// z 
	{6, 1365}, 		// { 
	{2, 1380}, 		// | 
	{6, 1395}, 		// } 
	{7, 1410}, 		// ~ 
};
