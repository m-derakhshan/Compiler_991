.data
backn: .asciiz "\n"
.text
.globl main
    li �,7
    li �,2
    move �,$s2
    move �,$s3
    add $t0,�,�
    li �,2
    li �,3
    add $t1,�,�
    li �,2
    li �,3
    mul $t2,�,�
    li $t2,4
    add $t3,$t2,$t2
    move �,$s5
    li �,3
    add $t0,�,�
    li �,0
