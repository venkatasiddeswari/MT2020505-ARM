     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    MOV R9, #0x20000000
		ADD R9,#0x03B0
		MOV R2, #00
		MOV R3, #01
		MOV R5, #10
		MOV R4, #0x20000000
		ADD R4,#0x03B4
        STR R2,[R9]
		STR R3, [R4]
BABA    LDR R7, [R9]
        LDR R8, [R4]      
		ADD R6, R7,R8
        ADD R4,R4,#4
		ADD R9,R9,#4
		STR R6, [R4]
        ADD R3,R3,#1	
        CMP R3,#10
       	BLT BABA
        MOV R1,#0x20000000
        ADD R9,#0x03B0
        LDR R0,[R9]
        LDR R1,[R9,#4]
        LDR R2,[R9,#8]
        LDR R3,[R9,#12]
		MOV R0,R0
		MOV R1,R1
		MOV R2,R2
		MOV R3,R3
        BL printMsg4p       
stop    B stop ; stop program
     ENDFUNC
     END 