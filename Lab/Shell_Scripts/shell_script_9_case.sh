#!/bin/bash
echo Bourne again shell  
echo
read -p "enter the choice of your rent a car: " vehicle
echo
case $vehicle in
	1) echo "The rent for the car is 100 dollars";;
	2) echo "The rent for the van is 150 dolalrs";;
	*) echo "invalid vehicle!!";;
esac

