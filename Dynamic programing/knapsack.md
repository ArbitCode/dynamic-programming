What is knapsack problem?
knapsack means a bag.

Given: Items with value and weight.
Goal:  Fill the bags to get max profit.

Input: Given intems with weight & profit.

wt: 	W1		W2		W3	...	Wn
profit:	P1		p2		p3	...	Pn
bag: W


wt: 	3		2 		4	<-kg
profit:	8		5		9	
bag:	7kg

Note: how you fill the bag is defined bt knapsack type.

Knapsack type
	1. 0/1 -> either include or exclude an item
	2. bounded -> can include limited #item instance in bag
	3. unbounded -> no bound/limit on #item instance in bag
	4. fractional -> can pick part of an item -> greedy algorithm
	5. Itegers -> can't pick part of an item
	
Note: In real life knapsack problem can be the combination of these types.

0/1 Knapsack
	Input: Items with wt. and profit and a bag(wt = w).
	goal:  maximize profit by picking elements and fill the bag.
	
	Constraint: i) Each item can be picked only once.
				   we have choice to either pick or reject an item.
			   ii) We can't pick more than size of knapsack

Some variation of knapsack
1. subset Sum problem
2. partition equal subset sum
3. count of subset with sum = x
4. partition a set into 2 subsets such that difference of subset sum is minimum
5. target sum

   
   