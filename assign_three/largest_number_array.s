     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 		
	    MOV R1, #00000000
		MOV R2, #01
		MOV R3, #0
BABA    LDR R4,[R1]
        CMP R4,R3
		MOVGE R3,R4 
        ADD R2,R2,#1
		ADD R1,R1,#04
        CMP R2,#5
        BLE BABA
        BGT stop
		MOV R0,R1
		BL printMsg
stop    B stop ; stop program
     ENDFUNC
     END 