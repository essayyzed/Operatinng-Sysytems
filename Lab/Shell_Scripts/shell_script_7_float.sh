#!/bin/bash
echo "bourne again shell (bash)"
echo

num1=20.5
num2=5
echo
echo "$num1+$num2" | bc
echo "$num1-$num2" | bc
echo "$num1*$num2" | bc
echo "$num1/$num2" | bc
echo "$num1%$num2" | bc
echo
echo "scale=2;$num1/$num2" | bc
echo
num=39
echo "scale=2;sqrt($num)" | bc -l #-l calls the maths library for sqrt function
echo
echo "scale=2;3^3" | bc -l 
echo
num3=$(echo "$num1 * $num2" | bc)
echo "num3 = $num3"
