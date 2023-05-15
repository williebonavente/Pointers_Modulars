# **CASE STUDY ARITHMETIC WITH COMMON FRACTIONS**

## **PROBLEM**
You are working problems in which you must display your results as integer ratios; 
therefore, you need to be able to perform computations with common fractions and get 
results that are common fractions in reduced form. You want to write a program that 
will allow you to add, subtract, multiply, and divide several pairs of common fractions. 

## **ANALYSIS**
Because the problem specifies that results are to be in reduced form, we will need 
to include a fraction-reducing function in addition to the computational functions. If 
we break the problem into small enough chunks, there should be an opportunity to 
reuse code by calling the same function multiple times. The in-depth analysis of the 
problem is actually distributed through the development of these functions.

## **DATA REQUIREMENTS**
### Problem Inputs
`int n1, d1` &rarr; numerator, denominator of first fraction
`int n2, d2` &rarr; numerator, denominator of second fraction
`char op`&rarr; arithmetic operator + - * or /
`char again` &rarr; y or n depending on user's desire to continue

### Problem Outputs
`int n_ans` &rarr; numerator of answer
`int d_ans` &rarr; denominator of answer

## **DESIGN**
As we develop an algorithm through stepwise refinement, we will look for instances 
in which a definition of a new function would simplify the design. 

## INITIAL ALGORITHM
1. Repeat as long as user wants to continue.
2. Get a fraction problem.
   - 2.1 Get first fraction
   - 2.2 Get operator
   - 2.3 Get second fraction
3. Compute the result.
    - 3.1 Select task based on operator
      - $+$ : 3.1.1 Add the fractions
      - $-$ : 3.1.2 Add the first fraction and the negation of the second.
      - $\times$ : 3.1.3 Multiply the fractions.
      - $\div$ : 3.1.4 Multiply the first fractions and the reciprocal of the second.
    - 3.2 Put the result fraction in reduce form
      - 3.2.1 Find the greatest common divisor $(gcd)$ of the numerator and denominator.
      - 3.2.2 Divide the numerator and denominator by the gcd. 
4. Display problem and result.
5. Check if user wants to continue.

### *STUB*
a skeleton function that consist of a header and statements that display trace messages
and assign values to output parameter; enables testing and flow of control among functions 
before this function is completed.