
#define   R_REGISTER 0x00  
#define   W_REGISTER  0x20   
#define    R_RX_PAYLOAD 0x61   
#define    W_TX_PAYLOAD 0xA0  
#define    FLUSH_TX    0xE1   
#define    FLUSH_RX    0xE2   
#define    REUSE_TX_PL 0xE3  
#define    R_RX_PL_WID 0x60    
#define   W_ACK_PAYLOAD 0xA8  
#define    W_TX_PAYLOAD_NOACK 0xB0
#define   NOP         0xFF 



  // Addresses list 
 #define  CONFIGURATION 0x00        
 #define  EN_AUTOACK      0x01            
 #define  EN_RXPIPES          0x02      
 #define  SETUP_ADDRESSWIDTH      0x03   
 #define  SETUP_AUTORETRANSMISSION    0x04
 #define  RF_CHANNEL 0x05            
 #define  RF_SETUP   0x06               
 #define  STATUS         0x07            
 #define  OBSERVE_TX         0x08        
 #define  RX_POWER_DETECTOR      0x09   
 #define  RX_ADDR_P0 0x0A             
 #define  RX_ADDR_P1 0x0B
 #define RX_ADDR_P2 0x0C
 #define RX_ADDR_P3 0x0D
 #define RX_ADDR_P4 0x0E
 #define RX_ADDR_P5 0x0F
 #define  TX_ADDR 0x10               
 #define RX_PW_P0 0x11             
 #define RX_PW_P1 0x12
 #define RX_PW_P2 0x13
 #define RX_PW_P3 0x14
 #define RX_PW_P4 0x15
 #define RX_PW_P5 0x16
 #define FIFO_STATUS 0x17            
 #define EN_DYNAMIC_PAYLOAD 0x1C   
 #define DYN_PAYLOAD_CONFIG 0x1D   


//Memory addresses subitems 


 
 #define   MASK_RX_DR  0x40 
 #define  MASK_TX_DR  0x20  
 #define  MASK_MAX_RT 0x10 
 #define  EN_CRC      0x08  
 #define  CRC8        0x00   
 #define  CRC16       0x04   
 #define  PWR_UP      0x02  
 #define  PRIM_RX     0x01    
   
    
 //RF Setup Register 
#define   CONT_WAVE     0x80  
#define   PLL_LOCK      0x10   
#define   RF_DR_250kbps 0x20  
#define   RF_DR_1Mbps   0x00 
#define   RF_DR_2Mbps   0x08
#define   RF_PWR_n18dBm 0x00  
#define   RF_PWR_n12dBm 0x02  
#define   RF_PWR_n6dBm  0x04  
#define   RF_PWR_0dBm   0x06  
    
   
//Automated functions contemplated register    

#define   IRQ_RX_dataready  0x40  
#define   IRQ_TX_datasent    0x20 
#define   IRQ_MAX_retransmit 0x10
#define   IRQ_ALL           0x70  
#define   RX_PIPE0         0x00 
#define   RX_PIPE1          0x02
#define   RX_PIPE2          0x04 
#define   RX_PIPE3          0x06 
#define   RX_PIPE4          0x08  
#define   RX_PIPE5         0x0A   
#define   RX_BUFFER_EMPTY   0x0E
#define   TX_BUFFER_FULLY    0x01 
    

//Automated functions contemplated register    

#define   TX_REUSE 0x40
#define   TX_FULL  0x20   
#define   TX_EMPTY 0x10   
#define   RX_FULL  0x02  
#define   RX_EMPTY 0x01  
    

  
#define   EN_DPL      0x04  
#define   EN_ACK_PAY  0x02  
#define   EN_DYN_ACK  0x01   
#define   EN_DPL_ALL  0x07    
   


