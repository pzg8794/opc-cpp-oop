;Lab No 17Submitted to Professor Balaji
;By Piter Garcia
;SUPER FAST BINARY TO BCD.


; 12 BIT BINARY IN BX
; (UPPER 12 BITS OF BX).

; BCD RETURNED IN AX.

CODE SEGMENT

    ASSUME CS:CODE
    
BIN12BCD: XOR AX,AX
          XOR CX,CX
          XOR DX,DX
          
	  MOV CL,0CH
          
AGAIN:    ROL BX,1
          ADC AL,AL
          DAA

	  XCHG AL,AH
	  ADC AL,AL
	  DAA

	  XCHG AL,AH
	  LOOP AGAIN
     
          RET

CODE ENDS
END BIN12BCD


