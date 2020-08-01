#!/bin/bash
echo "Bourne again shell (bash)  "

echo "enter a: "
read a
echo "enter b: "
read b
echo "enter c: "
read c
echo "enter d: "
read d
echo
echo "a = $a"
echo "b = $b"
echo "c = $c"
echo "d = $d"
echo
read -p "enter a: " a
read -p "enter b: " b
read -p "enter c: " c
read -p "enter d: " d
echo
echo "a = $a, b = $b, c = $c, d = $d"
echo
read -p "enter user_name: " user_name
read -sp "enter password: " password
echo
echo
echo "user name is $user_name"
echo "password is $password"
echo
echo "Enter names: "
read -a  names
echo
echo "names are: ${names[0]}, ${names[1]} "
echo
read -p "Enter a name: "
echo
echo "You entered: $REPLY "
