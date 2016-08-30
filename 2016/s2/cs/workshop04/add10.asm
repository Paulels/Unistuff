	@sum
	M=0 //sum==0
	@i
	M=0 //i=0
	@10
	D=A //D=10
	@counter
	M=D //counter==10
	@array
	D=M //D==array
(LOOP)
	@sum
	M=M+D
	@counter
	M=M-1
	D=M
	@END
	D;JLE
	@array
	D=A
	@i
	M=M+1
	D=M
	@array
	D=D+A
	A=D
	D=M
	@LOOP
	0;JMP
(END)
	@END
	0;JMP
