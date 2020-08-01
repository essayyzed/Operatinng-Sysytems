#!/bin/bash
echo "bourne again shell (bash)"

echo 

value=3
#echo "value = $value"
if [ $value -eq 1 ]    		# -ne -gt -ge -lt -le 
then
	echo "value = 1"
elif [ $value -eq 2 ]
then
	echo "value = 2"
else
	echo "value is greater than 2"
fi

echo

age=25

if [ $age -ge 20 ] && [ $age -le 30 ]
then
        echo "age is valid"
else
        echo "age is invalid"
fi

echo



age=25

if [ $age -ge 20 -a $age -le 30 ]
then
	echo "age is valid"
else
	echo "age is invalid"
fi

echo

if [[ $age -ge 20 && $age -le 30 ]]
then
        echo "age is valid"
else
        echo "age is invalid"
fi

echo



hit=4

if [ $hit -eq 4 ] || [ $hit -eq 6  ]
then
        echo "win"
else
        echo "lose"
fi

echo

hit=4

if [ $hit -eq 4 -o $hit -eq 6  ]
then
        echo "win"
else
        echo "lose"
fi

