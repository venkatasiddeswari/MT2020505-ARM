     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 		
	    MOV  R1, #04
		MOV  R2, #05
        MOV  R3, #06
        CMP  R1, R2
        ITE LT
        MOVLT R4,R2
        MOVGE R4,R1
        CMP R4,R3
		ITE LT
  		MOVLT R5,R3
        MOVGE R0,R4
        BL printMsg
stop    B stop ; stop program
     ENDFUNC
     END 