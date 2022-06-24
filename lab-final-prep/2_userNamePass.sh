rname="Tareq"
rpass="1234"
read -p "Enter name: " uname
read -sp "Enter password:"  upass
echo ""
if [ $uname != $rname ] || [ $rpass != $upass ]
then
    echo "invalid!!"
else
    echo "valid!!"
fi

