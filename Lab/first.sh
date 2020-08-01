#!/bin/bash
# clear
# echo "Hello World"
# mkdir test
# touch test/newfile
# ls test/



# echo 'Bash is installed in ' $BASH
# echo 'current bash version is' $BASH_VERSINFO
# echo 'My home directory' $HOME
# echo "Current working directory" $PWD

# a=10 # no spacing in assignment operator
# echo  'value of a is ' $a
# echo

# read -p 'enter a: ' a
# read -p 'enter b: ' b
# echo
# echo 'value of a = ' $a
# echo 'value of b = ' $b
# echo

# echo "enter the values in an array ;"
# read -a  array

# echo ${array[0]} ${array[1]}

# arr=(10 20 30 40 20)
# echo ${arr[*]} # this will output the whole array




##############/EXTERNAL ARGUMENTS\################
#####retriving extrenal arguments##############
a=$1
b=$2

echo $a
echo $b

#######################Expressions####################
# addition=$((a + b ))
# echo "sum = " $addition

# multiplication=$((  a * b ))
# echo "multiplication = " $multiplication

# #################Alternarive
# addition_2=$( expr $a + $b )
# echo "sum = " $addition_2

# multiplication_2=$( expr  $a \* $b )
# echo "multiplication = " $multiplication_2


