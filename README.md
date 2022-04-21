# Complex-Number-Representation
Book practice project from Problem Solving With C++ Chapter 11. Project 3.

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	complex-number-representation-using-class.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 11. Project 3.
Defining a class to represent complex numbers. Demonstrates ability to work with classes. Used a constructor with thwo parameters of type double that could be used to set the member variables of an object to any value. Also included is a constructor that only has a single paramenter of type double , demined so that the object will be initialized to realPart+0*i. A default constructor that initializes an object to 0 is also included, and operators were overloaded to correctly apply to the type Complex.  

Written using Microsoft Visual Studio. 

## Algorithm

- Two member variables of type double - real to represent a, imaginary to represent b
- default constructor(initializes to 0+0 * i), one param constructor (init. realPart + 0 * i), two param constructor (init. a + b * i)
- Overload operators ==, +, -, *, >>, and <<

    1. Define class ComplexNumber
      1.1 (public) ComplexNumber(); //initializes object to 0 + 0 * i
      1.2 (public) ComplexNumber(double realPart); //initializes object to realPart + 0 * i
      1.3 (public) ComplexNumber(double realPart, double imaginaryPart); //initializes object to realPart + imaginaryPart * i
      1.4 (public) friend variables
      1.5 (private) double real, imaginary
   2. Declare functions
      2.2 Test equations: precondition: first and second are initialized ComplexNumber objects postcondition: compares first and second with operators +, -, * and /
   3. Int Main
   4. Define Class Functions
   5. Define Functions
    

## Requirements
No requirements or modules needed for running this program. 
