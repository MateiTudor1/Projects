INCLUDE "EMU8086.INC"
.MODEL SMALL
.STACK 100H
.CODE

MAIN PROC



     PRINT "INPUT A CHARACTER:  "

MOV AH, 1
INT 21H
MOV BL, AL


CMP BL, "A"
JNGE NONE
CMP BL, "Z"
JNLE LOW
 PRINTN 
 PRINT "YOUR CASE  : IS UPPER CASE!"             
 JMP EXIT
 
     

  LOW:

CMP BL, "a"
JNGE NONE
CMP BL, "z"
JNLE NONE

              
              

PRINTN 
PRINT "YOUR CASE  : IS LOWER CASE!"  
JMP EXIT

    NONE:
    PRINTN 
PRINT "NONE OF THEM!"
    
    

EXIT: