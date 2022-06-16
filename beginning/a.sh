read -p "Enter user_name:" user_name
read -sp "Enter password: " password
if [ $user_name == "fakrul" ]
then
	if [ $password ==  12345]
	then echo "successful"
	else echo "wrong user"
	fi
else
	echo  "wrong user"
fi
echo $user_name $password
