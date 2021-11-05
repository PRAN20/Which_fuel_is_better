# Which_fuel_is_better

## Which Fuel is Cheaper 

The current price of petrol is X
 rupees, and the current price of diesel is Y
rupees. At the start of each month, the price of petrol increases by A
 rupees and the price of diesel increases by B
 rupees.

Chef is curious to know which fuel costs less at the end of the Kth
 month. If petrol is cheaper than diesel at the end of Kth
 month, then print 𝙿𝙴𝚃𝚁𝙾𝙻
. If diesel is cheaper than petrol at the end of the Kth
 month, then print 𝙳𝙸𝙴𝚂𝙴𝙻
. If both the fuels have the same price at the end of the Kth
 month, then print 𝚂𝙰𝙼𝙴 𝙿𝚁𝙸𝙲𝙴
.

## Input Format
The first line of input contains a single integer T
, denoting the number of test cases. The description of T
 test cases follows.
Each test case consists of a single line of input, containing five space-separated integers X,Y,A,B,K
.
## Output Format
For each test case,

Print 𝙿𝙴𝚃𝚁𝙾𝙻
 if petrol is cheaper than diesel.
Print 𝙳𝙸𝙴𝚂𝙴𝙻
 if diesel is cheaper than petrol.
Print 𝚂𝙰𝙼𝙴 𝙿𝚁𝙸𝙲𝙴
 otherwise.
Note: The output is case-insensitive. You can print each character in either lower-case or upper-case.

## Constraints
1≤T≤1000
1≤K≤1000
0≤X,Y,A,B≤1000
Subtasks
Subtask 1 (100 points): Original constraints
## Sample Input 1 
 3
1 1 1 1 1
2 1 2 1 2
2 2 1 1 2
## Sample Output 1 
 SAME PRICE
DIESEL
SAME PRICE
