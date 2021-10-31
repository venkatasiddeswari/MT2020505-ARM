     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 		
	    MOV R1, #00000000
		MOV R2, #00000000
		MOV R5, #01
		MOV R3, #05
		MOV R6, #02
BABA    LDR R4,[R1]
        udiv R8,R4,R6
		mls  R7,R8,R6,R4
		CMP R7,#0
		ADDEQ R2,R2 ,#1
		ADD R5,R5,#1
		ADD R1,R1,#04
        CMP R5,#5
        BLE BABA
		MOV R0, R2
		BL printMsg
stop    B stop ; stop program
     ENDFUNC
     END 