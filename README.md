
Description
# Scientific calculator
This is an online scientific calculator which is used as on the user demand and perform various operation like the trignometric operation, log and arithmatic operations . This is an project made after looking the various requirement of the user for the calculation and operation.

Requirements This will be able to distinguish between the high level requirements and low level requirements and able to link between the processes.

There are basically two types of requirement require in my proect whose name is "Scientific & Arithmatic Calculator ". 1: High Level Requirement a)User. b)Windows or Linux operating system. c)Laptop or Personal Computer(proper functioning). d)Calculation Problem. 2: Low Level Requirement a)Arithmatic operation b)Loops c)Switch cases d)If Else operation e)Input and output operation

IT IS A BASIC CALCULATOR FOR NORMAL USE. WHICH CONTAINS DIFFERENT FEATURE FOR DIFFERENT OPERATION. IN THIS CALCULATOR YOU CAN CHOOSE WHICH KIND OF CALCULATOR YOU WANT TO USE.

High Level Requirment
You Have Different feature you can choose with.

If want calculate you compound interest or simple interest or simple calculator function.

User Will be able to do these things without any complexity.

Low level requirment
user can enter desire data.

Statement of evere line should be clear.

So user can understand each Statement and give input according to Statement.

Calculator Should not give wrong output.

**4W 1H Who, What, When, Where and How?**

*Who:* This is an application used by the student and the businessman for their calculation.This is not only for the matric or lower class students but also for the higher secondary students also.

*What:* Basically this is an online calculating application made after seeing the online pendamic and modern technology because no one wants to invest more time in calculation . 
*When:* The use of this application can be made anywhere like mobile apps if developed to its fullest.
*Where:* The use can be on any web browser, as a mobile application, or any other suitable means. 
*How:* With proper work flow and data collection, combining with the management of official information systems this project can be implemented and evolved for many suitable applications. 

**SWOT Analysis Strength: By making this application you are not only making the world digital but also making the world smarter. Advantages of Scientific calculator App: ❖ Reduced time ❖ Enable advanced level of calculation in couple of time. ❖Reduce the investment of money on calculator and its totally free of cost.

**Weakness: Some of the disadvantages are: At a time only one operation can be performed . When you finish with one operation user have to start from begining. No more then one operation can apply or perform at a time .

**Opportunuties: Many oppotunities are present to make the things easier, safer, robust. If all things are taken care then there is a huge growth of these kinds of applications in the near future.

**Threat: Your personal data may be at risk sometimes. Misuse of personal data may lead to attacks to the application and inturn to the system
Badge

@CODE QUALITY SCORE code score pages-build-deployment Cppcheck Build Linux C/C++ CI

2_Architecture
@ Structural Diagram


titleofscreenshot @Behavioural Diagram titleofscreenshot

titleofscreenshot @Main Function

Start Program inputData = Read_Input() switch case(1) choice 1; (call function) case(2) choice 2; (call function) . . . default; @ call first function

declear functions inputData = Read_Input() if operator = "+" result = firstNumber + secondNumber

else if operator = "-" result = firstNumber - secondNumber

else if operator = "*" result = firstNumber * secondNumber

else if operator = "/" result = firstNumber / secondNumber

return result @call secound function

declear functions inputData = Read_Input()

compound interest=p(1+(r/n))^t

return result; @call third function

declear functions inputData = Read_Input()

simple interest= (prt)/100;

return result;

Implementation
make Build For building program make run for running program

Expected Behaviour
First it will ask you to select a input for selecting a type of calculator.

After Selecting it will ask for choose differnt action that you can choose from.

If you select Simple Calculator you have option to choose +,-,*,'/',^,!.

If you select Simple Interest you have to fill detail about Amount time and rate.

If you select Compound Interest you have to fill detail about Amount time and rate.

High Level Test
  Test Code	           Test Description	                        Required Input	      Actual Input	  Expected output	                               Actual result
   M01F01	         USER HAVE TO SELECT A OPERATION                  1	                    1       It should open simple calculator	                 Pass
   M01Q02	         USER HAVE TO SELECT A OPERATION	                2	                    2	      It should open simple Interest calculator	         Pass
   M01W03	         USER HAVE TO SELECT A OPERATION	                3	                    3	      It should open compound interest cal	             Pass
   M01F02	         USER HAVE TO SELECT OPERATION BASED ON CHOICE   	1	                    1	      It should open add calculator	                     Pass
   M01F03	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	  2	                    2	      It should open substract calculator	               Pass
   M01F04	         USER HAVE TO SELECT OPERATION BASED ON CHOICE    3	                    3	      It should open multiplication	                     Pass
   M01F05	         USER HAVE TO SELECT OPERATION BASED ON CHOICE    4                 	  4	      It should open Division calculator	               Pass
   M01F06	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	  5	                    5	      It shuold open square calculator	                 Pass
   M01F07	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	  6	                    6	      It should open factorial calculator                Pass 
   M01Q03     	     USER NEED TO ENTER DATA FOR SIMPLE INTEREST	amount rate time 	 amount rate time	It should accept all values	                   Pass
   M01W02	         USER NEED TO ENTER DATA FOR COMPOUND INTEREST amount rate time	amount rate time	It should accept all values	                     Pass
Low Level Test
  Test Code	           Test Description	                        Required Input	      Actual Input	  Expected output	                               Actual result


   M01FA01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return sum	                               Pass
   M01FB01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return substraction	                       Pass
   M01FC01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return multiply of operand	               Pass
   M01FD01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return division of operand	               Pass
   M01FE01	       USER CAN ENTER OPERAND	                    ANY ONE DOUBLE DATA	  ONE DOUBLE DATA	It should return square of a number	                 Pass
   M01FF01	       USER CAN ENTER OPERAND	                    ANY ONE DOUBLE DATA	  ONE DOUBLE DATA	It should return factorial of operand	               Pass
   M01QA01	       IT SHOULD INITATE AFTER M01Q03	                   NA	                    NA	    It should return simple interest     	               Pass
   M01WA01	       USER NEED TO CHOOSE A MODE OF INTEREST	Option Based Input(1,2,3)	Option Based Input(1,2,3)	Result according to mode of interest	     Pass
