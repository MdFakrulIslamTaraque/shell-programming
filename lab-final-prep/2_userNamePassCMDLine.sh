rname="Tareq"
rpass="1234"

uname=$1
upass=$2

if [ $uname != $rname ]  ||  [ $rpass != $upass ]
then
    echo "username or password invalid!!"
else
    echo "valid user!!"
fi
