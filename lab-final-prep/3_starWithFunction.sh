function star()
{
#here $1 means the first argument of star funciton
for(( i=1; i<=$1; ++i ))
do
  for(( j=1; j<=i; ++j ))
  do
    echo -n '*'
  done
  echo ""
done
}
read -p "Enter n:" n
star $n
