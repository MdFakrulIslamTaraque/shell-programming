function print()
{
echo "sorted array: ";
for ((i=0; i<$size; ++i ))
do
   echo -n ${a[$i]} " "
done
echo ""
}


function sortArr()
{
for (( i=0; i<size; ++i ))
do
  for (( j=0; j<i; ++j ))
  do
    if [[ ${a[$j]} -gt ${a[$i]} ]]
      then
	  temp=${a[i]}
	  a[$i]=${a[j]}
	  a[$j]=$temp
    fi
  done
done
print
}

function take_input()
{
for (( i=0; i<$size; ++i ))
do
  read a[i]
done
sortArr $a $size
}


read -p "Enter the number of elements of array: " size
take_input size
