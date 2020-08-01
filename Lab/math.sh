add=$3
sub=$4
mul=$5
div=$6
mod=$7

add=$(( $1 + $2 ))
sub=$(( $1 - $2 ))
mul=$(( $1 * $2 ))
div=$(( $1 / $2 ))
mod=$(( $1 % $2 ))



if [ $1 = "add" ]
then
    echo $(( $2 + $3 ))
elif [ $1 = "sub" ]
then
    echo $(( $2 - $3 ))
elif [ $1 = 'mul' ]
then
    echo $(( $2 * $3 ))
elif [ $1 = 'div' ]
then
    echo $(( $2 / $3 ))
elif [ $1 = 'mod' ]
then
    echo $(( $2 % $3 ))
else
    echo "Invalid Argument"

fi