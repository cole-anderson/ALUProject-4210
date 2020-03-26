/*
	Cole Anderson
	CPSC 4210 Term Project
	ALU Implementation
*/
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
/*
		Adder (Functioning)
*/

//ONEBITADDER
module oneBitAdder(output sum, output cout, input a, input b, input cin);

	wire w1, w2, w3;
	xor(w1, a, b);
	xor(sum, w1, cin);
	and(w2, cin, w1);
	and(w3, a, b);
	or(cout, w2, w3);

endmodule

//ONEBIT ADD AND SUBTRACTOR
module oneBitAdderSub(output sum, output cout, input a, input b, input cin, input as);

	wire addSub;
	xor(addSub, b, as);
	oneBitAdder a1(sum, cout, a, addSub, cin);

endmodule

//FOURBITADDER AND SUBTRACTOR
module fourBitAdderSub(output [3:0] sum, output cout, input [3:0] a, input [3:0] b, input cin, input as);

	wire w1, w2, w3;
	oneBitAdderSub a11(sum[0], w1, a[0], b[0], cin, as);
	oneBitAdderSub a21(sum[1], w2, a[1], b[1], w1, as);
	oneBitAdderSub a31(sum[2], w3, a[2], b[2], w2, as);
	oneBitAdderSub a41(sum[3], cout, a[3], b[3], w3, as);

endmodule

//EIGHTBITADDER AND SUBTRACTOR
module eightBitAdderSub(output [7:0] sum, output cout, input [7:0] a, input [7:0] b, input cin, input as);

	wire w1;
	fourBitAdderSub a12(sum[3:0], w1, a[3:0], b[3:0], cin, as);
	fourBitAdderSub a22(sum[7:4], cout, a[7:4], b[7:4], w1, as);

endmodule

//32BITADDER AND SUBTRACTOR
module thirtyTwoBitAdderSub(output [31:0] sum, output cout, input [31:0] a, input [31:0] b, input cin, input as);

	wire w1, w2, w3;
	eightBitAdderSub a13(sum[7:0], w1, a[7:0], b[7:0], cin, as);
	eightBitAdderSub a23(sum[15:8], w2, a[15:8], b[15:8], w1, as);
	eightBitAdderSub a33(sum[23:16], w3, a[23:16], b[23:16], w2, as);
	eightBitAdderSub a43(sum[31:24], cout, a[31:24], b[31:24], w3, as);

endmodule

module stimulusAdder;
	reg [31:0] A, B;
	reg C_IN;
	reg AS;
	wire[31:0] sum;
	wire C_OUT;

	//instantiate
	thirtyTwoBitAdderSub my32BitAdderSub(sum, C_OUT, A, B, C_IN, AS);
	initial
		begin
		$monitor($time, "A=%d, B=%d, C_IN=%b, ---, C_OUT=%b, AS = %b, sum = %d\n", A, B, C_IN, C_OUT, AS, sum);
		end
	initial
		begin
		A = 5; B = 3;
		C_IN = 0;
		AS =0;
		#5 A=5; B=5;AS = 1; C_IN = 1;
		#5 A=20; B=10;
		#5 A=15; B=10;
		end

endmodule

//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
/*
		32 bit MUX(Functioning)
*/

//FOURTOONE(1BIT)
module fourtooneBase(output Q_out,input In0,input In1,input In2,input In3,input s0,input s1);

	wire s1n, s0n;//select negations
	wire q0, q1, q2, q3;//outputs of AND
	//NOT
	not(s0n, s0);
	not(s1n, s1);
	//AND
	and(q0, In0, s0n, s1n);
	and(q1, In1, s0, s1n);
	and(q2, In2, s0n, s1);
	and(q3, In3, s0, s1);
	//OR
	or(Q_out, q0, q1, q2, q3);

endmodule
//FOURTOONE(4BIT)
module fourtooneA(output [3:0] Q_out,input [3:0] In0, input [3:0] In1, input [3:0] In2, input [3:0] In3, input [1:0] s);

	fourtooneBase f1(Q_out[0], In0[0], In1[0], In2[0], In3[0], s[0], s[1]);
	fourtooneBase f2(Q_out[1], In0[1], In1[1], In2[1], In3[1], s[0], s[1]);
	fourtooneBase f3(Q_out[2], In0[2], In1[2], In2[2], In3[2], s[0], s[1]);
	fourtooneBase f4(Q_out[3], In0[3], In1[3], In2[3], In3[3], s[0], s[1]);

endmodule
//FOURTOONE(8bit)
module fourtooneB(output [7:0] Q_out,input [7:0] In0,input [7:0] In1,input [7:0] In2,input [7:0] In3,input [1:0] s);

	fourtooneA f1(Q_out[3:0], In0[3:0], In1[3:0], In2[3:0], In3[3:0], s);
	fourtooneA f2(Q_out[7:4], In0[7:4], In1[7:4], In2[7:4], In3[7:4], s);

endmodule
//FOURTOONE(32bit)
module fourtooneThirty(output [31:0] Q_out,input [31:0] In0,input [31:0] In1,input [31:0] In2,input [31:0] In3,input [1:0] s);

	fourtooneB f1 (Q_out[7:0], In0[7:0], In1[7:0], In2[7:0], In3[7:0],s);
	fourtooneB f2 (Q_out[15:8], In0[15:8], In1[15:8], In2[15:8], In3[15:8], s);
	fourtooneB f3 (Q_out[23:16], In0[23:16], In1[23:16], In2[23:16], In3[23:16], s);
	fourtooneB f4 (Q_out[31:24], In0[31:24], In1[31:24], In2[31:24], In3[31:24], s);

endmodule
//Stimulus :: WORKS$
module stimulusMUX;

	reg[31:0] in0, in1, in2, in3;
	reg[1:0] S;
	wire[31:0] out;

	//Instantiate
	fourtooneThirty my32bitMux (out, in0, in1, in2, in3, S);


	initial
	begin
	$monitor ("in0 = %b, in1 = %b, in2 = %b,in3 = %b, S = %b, OUT = %d\n,", in0, in1, in3, in3, S, out);
	in0 = 32'd10;
	in1 = 32'd20;
	in2 = 32'd30;
	in3 = 32'd40;
	S = 2'b 00;
	#5  S = 2'b 00;
	#5  S = 2'b 01;
	#5  S = 2'b 10;
	#5  S = 2'b 11;

	end
endmodule

//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
/*
		32 bit LOGICUNIT(Functioning)
*/
//1 BIT LOGIC UNIT
module logicOne(output r, input a, input b, input[1:0] s);

	wire q1, q2, q3, q0;
	and(q0, a, b);
	or(q1, a, b);
	xor(q2, a, b);
	nor(q3, a, b);
	fourtooneBase l1 (r, q0, q1, q2, q3, s[0], s[1]);

endmodule
//FOURTOONE(4BIT)
module logicFour(output[3:0] r, input[3:0] a, input[3:0] b, input[1:0] s);

	logicOne l1(r[0], a[0], b[0], s);
	logicOne l2(r[1], a[1], b[1], s);
	logicOne l3(r[2], a[2], b[2], s);
	logicOne l4(r[3], a[3], b[3], s);

endmodule
//LOGIC(8BIT)
module logicEight(output[7:0] r, input[7:0] a, input[7:0] b, input[1:0] s);

	logicFour l1(r[3:0], a[3:0], b[3:0], s);
	logicFour l2(r[7:4], a[7:4], b[7:4], s);

endmodule
//LOGIC(32BIT)
module logicThirtyTwo(output[31:0] r, input[31:0] a, input[31:0] b, input[1:0] s);

	logicEight l1 (r[7:0], a[7:0], b[7:0], s);
	logicEight l2 (r[15:8], a[15:8], b[15:8], s);
	logicEight l3 (r[23:16], a[23:16], b[23:16], s);
	logicEight l4 (r[31:24], a[31:24], b[31:24], s);

endmodule
//Stimulus :: WORKS$
module stimulusLogicUnit;

	reg[31:0] A, B;
	reg[1:0] S;
	wire[31:0] out;

	//Instantiate
	logicThirtyTwo my32BitLogicUnit(out[31:0], A, B, S);

	initial
	begin
	$monitor ("A = %b\nB = %b\nO = %b\n", A, B, out);
	A = 32'd17; B= 32'd15;
	S = 2'b 00;
	#5  S = 2'b 01;
	#5  S = 2'b 10;
	#5  S = 2'b 11;
	end

endmodule

//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
/*
		//32 bit SHIFTER(Functioning)
*/
module shifter32(out, rightl, shiftamount, in);

	output[31:0] out;
	input[31:0] in;
	input rightl;
	input [4:0] shiftamount;
	assign out = (rightl ? in << shiftamount : in >> shiftamount);
	endmodule

//Stimulus :: WORKS$
module stimulusShifter;

	reg [4:0] shift;
	reg left;
	reg [31:0] inward;
	wire [31:0] outward;

	shifter32 my32BitShifter(outward, left, shift, inward);
	initial
	begin

	$monitor($time, "input = %b,  output = %b, left = %b, shift = %b\n", inward, outward, left, shift);

	inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00000;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00001;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00001;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00010;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00011;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00100;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00101;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00110;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00111;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01000;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b00010;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01001;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01011;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01100;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01101;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01110;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b01111;

	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10001;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10010;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10011;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10100;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10101;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10110;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b10111;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11000;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11001;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11011;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11100;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11101;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11110;
	#5 inward = 32'b11000000000000000000000000000000; left = 0; shift = 5'b11111;

	#5 inward = 32'b00000000000000000000000000000011; left = 1; shift = 5'b10110;
	#5 inward = 32'b00000000000000000000000000000011; left = 1; shift = 5'b10010;
	#5 inward = 32'b00000000000000000000000000000011; left = 1; shift = 5'b10011;

	end

endmodule
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
/*
		Const'Var
*/
//TWO TO ONE MUX
module twotooneBase(output Q_out,input In0,input In1,input s);

wire w0,w1,Sbar;
not(Sbar, s);
and(w0, In0,s);
and(w1, In1,Sbar);
or(Q_out, w0,w1);

endmodule

//5 BIT TWO TO ONE MUX
module ConstVarM(output [4:0] Q_out,input [4:0] In0,input [4:0] In1,input s);

	twotooneBase m1(Q_out[0], In0[0], In1[0], s);
	twotooneBase m2(Q_out[1], In0[1], In1[1], s);
	twotooneBase m3(Q_out[2], In0[2], In1[2], s);
	twotooneBase m4(Q_out[3], In0[3], In1[3], s);
	twotooneBase m5(Q_out[4], In0[4], In1[4], s);

endmodule

//ConstVar Stimulus
module stimulusConstVar;

	reg[4:0] in0, in1;
	reg S;
	wire[4:0] out;

	//Instantiate
	ConstVarM fivetoonemux(out, in0, in1, S);
	initial
	begin
	$monitor ("in0 = %d, in1 = %d, S = %b, OUT = %d\n,", in0, in1, S, out);
	in0 = 3;
	in1 = 5;
	S = 0;
	#5  S = 0;
	#5  S = 1;
	end

endmodule
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
//*****************************************************************************************************************************************************************
module ALU_32bits (output [31:0] s, input [31:0] a, b, input c_0, input Const_Var, shift_direction, input [1:0] Function_class, input [1:0] Logic_function, input [4:0] Const_amount);

wire [31:0] shiftW;
wire [31:0] adderSubW;
wire [31:0] logicW;
wire [4:0] amountW;
wire cout;

//Calling All Modules:
ConstVarM constVar(amountW, a[4:0], Const_amount ,Const_Var);

shifter32 shiftMod(shiftW, shift_direction, amountW, b);

logicThirtyTwo logicMod(logicW, a, b, Logic_function);

thirtyTwoBitAdderSub addSubMod(adderSubW, cout, a, b, c_0, c_0);

fourtooneThirty muxMod(s, shiftW, {31'd0, adderSubW[31]}, adderSubW, logicW, Function_class);

endmodule
/*
	My Stimulus
*/

module myStimulus();
	//Input and Output
	reg [31:0] x;
	reg [31:0] y;
	reg [1:0] f;
	reg [1:0] l;
	reg [4:0] constA;
	reg cin;
	reg cvar;
	reg shifdir;
	wire [31:0] out;

	//Instantiate
	ALU_32bits my_ALU (out,  x, y,  cin, cvar, shifdir, f, l, constA);


	initial
		begin

////
		$monitor($time, "X = %d, Y = %d, cin = %b, f = %d, l = %b ,shiftd = %b, cvar = %b, constA = %d, out = %d, \n", x, y, cin, f, l, shifdir, cvar, constA,out);
		x=4'd0; y=4'd0; cin=1'b0;
		//Shifting
		#5 f[1]=1; f[0]=0; x=4'd9; y=14'd5; cin=1'b1;
		#5 f[1]=0; f[0]=0; x=16'd8; y=4'd13; shifdir=1; cvar=1;
		#5 x=16'd127; y=16'd234;f[1]=0; f[0]=0;shifdir=0;cvar=0;constA=5'd8;

		//Addition AND Subtraction
		#5 f[1]=1; f[0]=0; x= 5; y= 3;cin=1'b0;
		#5 f[1]=1; f[0]=0; x= 8; y= 2;cin=1'b1;
		//Logic
		#5 f[1]=1; f[0]=1;l=2'd0; x=4'd5; y=4'd6; cin=1'b0;
		#5 f[1]=1; f[0]=1;l=2'd1; x=8'd12; y=8'd15; cin=1'b1;
		#5 f[1]=1; f[0]=1;l=2'd2; x=8'd25; y=8'd12; cin=1'b1;
		#5 f[1]=1; f[0]=1;l=2'd3; x=8'd15; y=8'd12; cin=1'b1;

		end

endmodule

/*
	Hua Li Stimulus
*/
module stimulus;

//inputs
reg[31:0] A,B;
reg C_0,Const_Var,shift_direction;
reg [1:0] Function_class;
reg [1:0] Logic_function;
reg [4:0] Const_amount;


//outputs
wire[31:0] s;

ALU_32bits my_ALU (s,  A, B,  C_0, Const_Var, shift_direction, Function_class, Logic_function, Const_amount);

initial
begin

$monitor($time,"A=%d, B=%d, C_IN=%b,-- Function_class=%d, shift_direction=%b, Const_Var=%b, Const_amount=%d, shift_direction=%b, Logic_function=%d,--OUTPUT=%d \n",A,B,C_0,Function_class,shift_direction,Const_Var,Const_amount,shift_direction,Logic_function,s);
end

initial
begin
A=4'd0; B=4'd0; C_0=1'b0;
#5 A=4'd3; B=4'd4; Function_class[1]=1; Function_class[0]=0;
#5 A=4'd2; B=4'd5;C_0=1'b1; Function_class[1]=0; Function_class[0]=1;
#5 A=4'd10; B=4'd5; C_0=1'b1;  Function_class[1]=1; Function_class[0]=0;
#5 A=16'd6; B=4'd123; Function_class[1]=0; Function_class[0]=0; shift_direction=1; Const_Var=1;

#5 A=16'd256; B=16'd321;Function_class[1]=0; Function_class[0]=0;shift_direction=0;Const_Var=0;Const_amount=5'd7;
#5 A=4'd10; B=4'd5; C_0=1'b0;Function_class[1]=1; Function_class[0]=1;Logic_function=2'd0;
#5 A=8'd19; B=8'd22; C_0=1'b1;Function_class[1]=1; Function_class[0]=1;Logic_function=2'd1;
#5 A=8'd33; B=8'd39; C_0=1'b1;Function_class[1]=1; Function_class[0]=1;Logic_function=2'd2;
#5 A=8'd66; B=8'd77; C_0=1'b0;Function_class[1]=1; Function_class[0]=1;Logic_function=2'd3;
end

endmodule
