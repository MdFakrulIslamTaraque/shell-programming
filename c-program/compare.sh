if [[ $1 -gt 0 ]] 
then 
echo  $1 ":positive"
elif [[ $1 -eq 0 ]]
then 
echo $1 ":non-negative"
else
echo $1 ":negative"
fi 

if [[ $2 -gt 0 ]]
then
echo $2 ":positive"
elif [[ $2 -eq 0 ]]
then
echo $2 ":non-negative"
else
echo $2 ":negative"
fi
