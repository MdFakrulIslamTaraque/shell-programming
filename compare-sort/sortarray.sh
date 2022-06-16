echo "Enter number of array elements:"
read size
for (( i=0;i<size;i++ ))
do
    read arr[i]
done


for (( i=0;i<size;i++ ))
do
    for (( j=0;j<size-1;j++ ))
    do
	if [  ${arr[j]} -gt ${arr[j+1]} ]
	then
	temp=${arr[j]}
	arr[$j]=${arr[j+1]}
	arr[$j+1]=$temp
	fi
     done
done

echo "Sorted output:"
for ((i=0;i<size;i++))
do
	echo -n ${arr[i]} " "
done
