/******************************************************************************
 * Copyright (C) 2025 Jacob Smithmyer.  All rights reserved.
 * SPDX-License-Identifier: MIT
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the “Software”),
 * to deal in the Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the 
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 * DEALINGS IN THE SOFTWARE.
 * 
*******************************************************************************
 * 
 * This header file is for functions I use frequently and for constants I like
 * to set in my environment.
 * 
******************************************************************************/

//FILE GUARD
#ifndef JPS_UNIV_H
#define JPS_UNIV_H


/*************************   FUNCTION PROTOTYPES   *************************/


/*****************************************************************************
 * This function formats a double number in engineering notation, from yocto- 
 * (10^-24) to yotta- (10^24).
 * String is 9 chars long, and is always right-justified so the prefix is 
 * always the 9th char
 *
 * @param	returnStr is the pointer to the string to pass the formatted 
 *			string back to.
 * @param	inputNum is the double that is going to be converted to a string
 *			in engineering notation
 * @param	sigFigs is the integer number of significant figures the number
 * 			will be displayed with. Number of significant figures must be 
 * 			between or including 1 to 7.
 * 
 * @return	0 if a success, 1 if error (Significant figure not in range: 
 * 			"SigFigErr", value not in range: "OutOfRng")
****************************************************************************/
int jps_Eng_Not(char returnStr[15], double inputNum, int sigFigs);


/*****************************************************************************
 * This function finds the power of 10 for the engineering notation formatting
 * of doubles. 
 * The purpose of this function is to allow for specific formatting by only 
 * returning the exponent and allowing the formatting to be handled by the 
 * parent function.
 *
 * @param	inputNum is the double that will be used to find the exponent for
 *			engineering notation
 *
 * @return	integer exponent for engineering notation formatting
****************************************************************************/
int jps_Eng_Power(double inputNum);


/*****************************************************************************
 * This function raises a double to an integer power and returns the product
 * as a double
 *
 * @param	base is the base of the operation.
 * @param	power is the exponent, and can be any whole integer.
 *
 * @return	the value found by exponentiation (base^power). 
 *
****************************************************************************/
double jps_Power(double base, int power);


/*****************************************************************************
 * This function returns the absolute value of a float.
 *
 * @param	value_in is the number to find the absolute value of.
 *
 * @return	the absolute value of value_in, | value_in |
 *
****************************************************************************/
double jps_abs(double value_in);


/*****************************************************************************
 * This function converts an integer between and including 0 and 9 to its 
 * ASCII char representation.
 *
 * @param	IntToConv is the integer to convert between and including 0 and 9
 *
 * @return	The ASCII representation of the integer.
 * 			Returns 'E' if greater than 9 or less than 0.
 *
****************************************************************************/
char jps_Int_to_Char(int IntToConv);


/*****************************************************************************
 * This function converts an ASCII char between and including '0' and '9' to 
 * its integer equivalent.
 * @param	CharToConv is the char to convert
 *
 * @return	The converted integer value of the char
 * 			Returns 0xEEEE if not a number.
 *
****************************************************************************/
char jps_Char_to_Int(char CharToConv);




/************************   CONSTANT DEFINITIONS   ************************/

//Boolean TRUE
#ifndef TRUE
#define TRUE 1
#endif //ifndef TRUE

//Boolean FALSE
#ifndef FALSE
#define FALSE 0
#endif //ifndef FALSE

//for calculations involving the mathematical constant pi
#ifndef PI
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923
#endif //ifndef PI




#endif //IFNDEF JPS_UNIV_H


