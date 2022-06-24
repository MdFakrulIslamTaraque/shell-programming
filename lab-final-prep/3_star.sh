function star()
{
echo $str $n
echo ""
#here $1 means the first argument of star funciton
for(( i=1; i<=$n; ++i ))
do
  for(( j=1; j<=i; ++j ))
  do
    echo -n '*'
  done
  echo ""
done
}

str="Your entered value is:"
n=$1 #this $1 is the first arg while calling the file from terminal
star n str
