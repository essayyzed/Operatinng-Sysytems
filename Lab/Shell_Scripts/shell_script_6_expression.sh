#!/bin/bash
echo "bourne again shell (bash)"
echo

num1=10
num2=5
echo
echo "num1=$num1, num2=$num2"
echo
echo "num1 + num2 =" $(( num1 + num2  ))
echo "num1 - num2 =" $(( num1 - num2  ))
echo "num1 * num2 =" $(( num1 * num2  ))
echo "num1 / num2 =" $(( num1 / num2  ))
echo "num1 % num2 =" $(( num1 % num2  )) 
echo
echo "num1 + num2 =" $( expr $num1 + $num2 )
echo "num1 - num2 =" $( expr $num1 - $num2 )
echo "num1 * num2 =" $( expr $num1 \* $num2 )
echo "num1 / num2 =" $( expr $num1 / $num2 )
echo "num1 % num2 =" $( expr $num1 % $num2 ) 
echo
num3=$( expr $num1 + $num2 )
echo "$num1 + $num2 = $num3"
num3=$( expr $num1 - $num2 )
echo "$num1 - $num2 = $num3"
num3=$( expr $num1 \* $num2 )
echo "$num1 * $num2 = $num3"
num3=$( expr $num1 / $num2 )
echo "$num1 / $num2 = $num3"
num3=$( expr $num1 % $num2 )
echo "$num1 % $num2 = $num3"
