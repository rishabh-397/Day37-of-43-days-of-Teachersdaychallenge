# Day37-of-43-days-of-Teachersdaychallenge

A. XXXXX
time limit per test1 second
memory limit per test256 megabytes
Ehab loves number theory, but for some reason he hates the number x
. Given an array a
, find the length of its longest subarray such that the sum of its elements isn't divisible by x
, or determine that such subarray doesn't exist.

An array a
 is a subarray of an array b
 if a
 can be obtained from b
 by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
The first line contains an integer t
 (1≤t≤5)
 — the number of test cases you need to solve. The description of the test cases follows.

The first line of each test case contains 2 integers n
 and x
 (1≤n≤105
, 1≤x≤104
) — the number of elements in the array a
 and the number that Ehab hates.

The second line contains n
 space-separated integers a1
, a2
, …
, an
 (0≤ai≤104
) — the elements of the array a
.

Output
For each testcase, print the length of the longest subarray whose sum isn't divisible by x
. If there's no such subarray, print −1
.

Example
Input
3
3 3
1 2 3
3 4
1 2 3
2 2
0 6

Output
2
3
-1


. Captain Flint and Crew Recruitment
time limit per test1 second
memory limit per test256 megabytes
Despite his bad reputation, Captain Flint is a friendly person (at least, friendly to animals). Now Captain Flint is searching worthy sailors to join his new crew (solely for peaceful purposes). A sailor is considered as worthy if he can solve Flint's task.

Recently, out of blue Captain Flint has been interested in math and even defined a new class of integers. Let's define a positive integer x
 as nearly prime if it can be represented as p⋅q
, where 1<p<q
 and p
 and q
 are prime numbers. For example, integers 6
 and 10
 are nearly primes (since 2⋅3=6
 and 2⋅5=10
), but integers 1
, 3
, 4
, 16
, 17
 or 44
 are not.

Captain Flint guessed an integer n
 and asked you: can you represent it as the sum of 4
 different positive integers where at least 3
 of them should be nearly prime.

Uncle Bogdan easily solved the task and joined the crew. Can you do the same?

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

Next t
 lines contain test cases — one per line. The first and only line of each test case contains the single integer n
 (1≤n≤2⋅105)
 — the number Flint guessed.

Output
For each test case print:

YES and 4
 different positive integers such that at least 3
 of them are nearly prime and their sum is equal to n
 (if there are multiple answers print any of them);
NO if there is no way to represent n
 as the sum of 4
 different positive integers where at least 3
 of them are nearly prime.
You can print each character of YES or NO in any case.

Example

Input
7
7
23
31
36
44
100
258

Output
NO
NO
YES
14 10 6 1
YES
5 6 10 15
YES
6 7 10 21
YES
2 10 33 55
YES
10 21 221 6
